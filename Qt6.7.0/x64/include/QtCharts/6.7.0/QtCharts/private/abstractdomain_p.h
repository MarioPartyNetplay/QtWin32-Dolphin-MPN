// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

//  W A R N I N G
//  -------------
//
// This file is not part of the Qt Chart API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef ABSTRACTDOMAIN_H
#define ABSTRACTDOMAIN_H
#include <QtCharts/QChartGlobal>
#include <QtCharts/private/qchartglobal_p.h>
#include <QtCore/QRectF>
#include <QtCore/QSizeF>
#include <QtCore/QDebug>
#include <QtCore/QObject>

QT_BEGIN_NAMESPACE

class QAbstractAxis;

class Q_CHARTS_PRIVATE_EXPORT AbstractDomain: public QObject
{
    Q_OBJECT
public:
    enum DomainType { UndefinedDomain,
                      XYDomain,
                      XLogYDomain,
                      LogXYDomain,
                      LogXLogYDomain,
                      XYPolarDomain,
                      XLogYPolarDomain,
                      LogXYPolarDomain,
                      LogXLogYPolarDomain };
public:
    explicit AbstractDomain(QObject *object = 0);
    virtual ~AbstractDomain();

    virtual void setSize(const QSizeF &size);
    QSizeF size() const;

    virtual DomainType type() = 0;

    virtual void setRange(qreal minX, qreal maxX, qreal minY, qreal maxY) = 0;
    void setRangeX(qreal min, qreal max);
    void setRangeY(qreal min, qreal max);
    void setMinX(qreal min);
    void setMaxX(qreal max);
    void setMinY(qreal min);
    void setMaxY(qreal max);

    qreal minX() const { return m_minX; }
    qreal maxX() const { return m_maxX; }
    qreal minY() const { return m_minY; }
    qreal maxY() const { return m_maxY; }

    qreal spanX() const;
    qreal spanY() const;
    bool isEmpty() const;

    void blockRangeSignals(bool block);
    bool rangeSignalsBlocked() const { return m_signalsBlocked; }

    void zoomReset();
    void storeZoomReset();
    bool isZoomed() { return m_zoomed; }

    friend bool Q_AUTOTEST_EXPORT operator== (const AbstractDomain &domain1, const AbstractDomain &domain2);
    friend bool Q_AUTOTEST_EXPORT operator!= (const AbstractDomain &domain1, const AbstractDomain &domain2);
    friend QDebug Q_AUTOTEST_EXPORT operator<<(QDebug dbg, const AbstractDomain &domain);

    virtual void zoomIn(const QRectF &rect) = 0;
    virtual void zoomOut(const QRectF &rect) = 0;
    virtual void move(qreal dx, qreal dy) = 0;

    virtual QPointF calculateGeometryPoint(const QPointF &point, bool &ok) const = 0;
    virtual QPointF calculateDomainPoint(const QPointF &point) const = 0;
    virtual QList<QPointF> calculateGeometryPoints(const QList<QPointF> &list) const = 0;

    virtual bool attachAxis(QAbstractAxis *axis);
    virtual bool detachAxis(QAbstractAxis *axis);

    static void looseNiceNumbers(qreal &min, qreal &max, int &ticksCount);
    static qreal niceNumber(qreal x, bool ceiling);

    void setReverseX(bool reverse) { m_reverseX = reverse; }
    void setReverseY(bool reverse) { m_reverseY = reverse; }

    bool isReverseX() const { return m_reverseX; }
    bool isReverseY() const { return m_reverseY; }

Q_SIGNALS:
    void updated();
    void rangeHorizontalChanged(qreal min, qreal max);
    void rangeVerticalChanged(qreal min, qreal max);

public Q_SLOTS:
    void handleVerticalAxisRangeChanged(qreal min,qreal max);
    void handleHorizontalAxisRangeChanged(qreal min,qreal max);
    void handleReverseXChanged(bool reverse);
    void handleReverseYChanged(bool reverse);

protected:
    void adjustLogDomainRanges(qreal &min, qreal &max);
    QRectF fixZoomRect(const QRectF &rect);

    qreal m_minX;
    qreal m_maxX;
    qreal m_minY;
    qreal m_maxY;
    QSizeF m_size;
    bool m_signalsBlocked;
    bool m_zoomed;
    qreal m_zoomResetMinX;
    qreal m_zoomResetMaxX;
    qreal m_zoomResetMinY;
    qreal m_zoomResetMaxY;
    bool m_reverseX;
    bool m_reverseY;
};

QT_END_NAMESPACE

#endif // ABSTRACTDOMAIN_H
