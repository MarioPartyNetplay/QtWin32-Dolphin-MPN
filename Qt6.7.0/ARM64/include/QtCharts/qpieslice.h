// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef QPIESLICE_H
#define QPIESLICE_H

#include <QtCharts/QChartGlobal>
#include <QtCore/QObject>
#include <QtGui/QPen>
#include <QtGui/QBrush>
#include <QtGui/QFont>

QT_BEGIN_NAMESPACE
class QPieSlicePrivate;
class QPieSeries;

class Q_CHARTS_EXPORT QPieSlice : public QObject
{
    Q_OBJECT
    Q_ENUMS(LabelPosition)
    Q_PROPERTY(QString label READ label WRITE setLabel NOTIFY labelChanged)
    Q_PROPERTY(qreal value READ value WRITE setValue NOTIFY valueChanged)
    Q_PROPERTY(bool labelVisible READ isLabelVisible WRITE setLabelVisible NOTIFY labelVisibleChanged)
    Q_PROPERTY(LabelPosition labelPosition READ labelPosition WRITE setLabelPosition)
    Q_PROPERTY(bool exploded READ isExploded WRITE setExploded)
    Q_PROPERTY(QPen pen READ pen WRITE setPen NOTIFY penChanged)
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor NOTIFY borderColorChanged)
    Q_PROPERTY(int borderWidth READ borderWidth WRITE setBorderWidth NOTIFY borderWidthChanged)
    Q_PROPERTY(QBrush brush READ brush WRITE setBrush NOTIFY brushChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(QBrush labelBrush READ labelBrush WRITE setLabelBrush NOTIFY labelBrushChanged)
    Q_PROPERTY(QColor labelColor READ labelColor WRITE setLabelColor NOTIFY labelColorChanged)
    Q_PROPERTY(QFont labelFont READ labelFont WRITE setLabelFont NOTIFY labelFontChanged)
    Q_PROPERTY(qreal labelArmLengthFactor READ labelArmLengthFactor WRITE setLabelArmLengthFactor)
    Q_PROPERTY(qreal explodeDistanceFactor READ explodeDistanceFactor WRITE setExplodeDistanceFactor)
    Q_PROPERTY(qreal percentage READ percentage NOTIFY percentageChanged)
    Q_PROPERTY(qreal startAngle READ startAngle NOTIFY startAngleChanged)
    Q_PROPERTY(qreal angleSpan READ angleSpan NOTIFY angleSpanChanged)

public:
    enum LabelPosition {
        LabelOutside,
        LabelInsideHorizontal,
        LabelInsideTangential,
        LabelInsideNormal
    };

public:
    explicit QPieSlice(QObject *parent = nullptr);
    QPieSlice(QString label, qreal value, QObject *parent = nullptr);
    virtual ~QPieSlice();

    void setLabel(QString label);
    QString label() const;

    void setValue(qreal value);
    qreal value() const;

    void setLabelVisible(bool visible = true);
    bool isLabelVisible() const;

    LabelPosition labelPosition();
    void setLabelPosition(LabelPosition position);

    void setExploded(bool exploded = true);
    bool isExploded() const;

    void setPen(const QPen &pen);
    QPen pen() const;

    QColor borderColor();
    void setBorderColor(QColor color);

    int borderWidth();
    void setBorderWidth(int width);

    void setBrush(const QBrush &brush);
    QBrush brush() const;

    QColor color();
    void setColor(QColor color);

    void setLabelBrush(const QBrush &brush);
    QBrush labelBrush() const;

    QColor labelColor();
    void setLabelColor(QColor color);

    void setLabelFont(const QFont &font);
    QFont labelFont() const;

    void setLabelArmLengthFactor(qreal factor);
    qreal labelArmLengthFactor() const;

    void setExplodeDistanceFactor(qreal factor);
    qreal explodeDistanceFactor() const;

    qreal percentage() const;
    qreal startAngle() const;
    qreal angleSpan() const;

    QPieSeries *series() const;

Q_SIGNALS:
    void clicked();
    void hovered(bool state);
    void pressed();
    void released();
    void doubleClicked();
    void labelChanged();
    void valueChanged();
    void labelVisibleChanged();
    void penChanged();
    void brushChanged();
    void labelBrushChanged();
    void labelFontChanged();
    void percentageChanged();
    void startAngleChanged();
    void angleSpanChanged();
    void colorChanged();
    void borderColorChanged();
    void borderWidthChanged();
    void labelColorChanged();

private:
    QPieSlicePrivate * const d_ptr;
    Q_DECLARE_PRIVATE(QPieSlice)
    Q_DISABLE_COPY(QPieSlice)
};

QT_END_NAMESPACE

#endif // QPIESLICE_H
