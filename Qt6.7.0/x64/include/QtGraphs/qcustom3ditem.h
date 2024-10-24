// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef QCUSTOM3DITEM_H
#define QCUSTOM3DITEM_H

#include <QtCore/QObject>
#include <QtGraphs/qgraphsglobal.h>
#include <QtGui/QImage>
#include <QtGui/QQuaternion>
#include <QtGui/QVector3D>

QT_BEGIN_NAMESPACE

class QCustom3DItemPrivate;

class Q_GRAPHS_EXPORT QCustom3DItem : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QCustom3DItem)
    Q_PROPERTY(QString meshFile READ meshFile WRITE setMeshFile NOTIFY meshFileChanged)
    Q_PROPERTY(QString textureFile READ textureFile WRITE setTextureFile NOTIFY textureFileChanged)
    Q_PROPERTY(QVector3D position READ position WRITE setPosition NOTIFY positionChanged)
    Q_PROPERTY(bool positionAbsolute READ isPositionAbsolute WRITE setPositionAbsolute NOTIFY
                   positionAbsoluteChanged)
    Q_PROPERTY(QVector3D scaling READ scaling WRITE setScaling NOTIFY scalingChanged)
    Q_PROPERTY(QQuaternion rotation READ rotation WRITE setRotation NOTIFY rotationChanged)
    Q_PROPERTY(bool visible READ isVisible WRITE setVisible NOTIFY visibleChanged)
    Q_PROPERTY(
        bool shadowCasting READ isShadowCasting WRITE setShadowCasting NOTIFY shadowCastingChanged)
    Q_PROPERTY(bool scalingAbsolute READ isScalingAbsolute WRITE setScalingAbsolute NOTIFY
                   scalingAbsoluteChanged)

public:
    explicit QCustom3DItem(QObject *parent = nullptr);
    explicit QCustom3DItem(const QString &meshFile,
                           const QVector3D &position,
                           const QVector3D &scaling,
                           const QQuaternion &rotation,
                           const QImage &texture,
                           QObject *parent = nullptr);
    ~QCustom3DItem() override;

    void setMeshFile(const QString &meshFile);
    QString meshFile() const;

    void setTextureFile(const QString &textureFile);
    QString textureFile() const;

    void setPosition(const QVector3D &position);
    QVector3D position() const;

    void setPositionAbsolute(bool positionAbsolute);
    bool isPositionAbsolute() const;

    void setScaling(const QVector3D &scaling);
    QVector3D scaling() const;

    void setScalingAbsolute(bool scalingAbsolute);
    bool isScalingAbsolute() const;

    void setRotation(const QQuaternion &rotation);
    QQuaternion rotation();

    void setVisible(bool visible);
    bool isVisible() const;

    void setShadowCasting(bool enabled);
    bool isShadowCasting() const;

    Q_INVOKABLE void setRotationAxisAndAngle(const QVector3D &axis, float angle);

    void setTextureImage(const QImage &textureImage);

Q_SIGNALS:
    void meshFileChanged(const QString &meshFile);
    void textureFileChanged(const QString &textureFile);
    void positionChanged(const QVector3D &position);
    void positionAbsoluteChanged(bool positionAbsolute);
    void scalingChanged(const QVector3D &scaling);
    void rotationChanged(const QQuaternion &rotation);
    void visibleChanged(bool visible);
    void shadowCastingChanged(bool shadowCasting);
    void scalingAbsoluteChanged(bool scalingAbsolute);
    void needUpdate();

protected:
    QCustom3DItem(QCustom3DItemPrivate &d, QObject *parent = nullptr);

private:
    Q_DISABLE_COPY(QCustom3DItem)

    friend class QQuickGraphsItem;
};

QT_END_NAMESPACE

#endif
