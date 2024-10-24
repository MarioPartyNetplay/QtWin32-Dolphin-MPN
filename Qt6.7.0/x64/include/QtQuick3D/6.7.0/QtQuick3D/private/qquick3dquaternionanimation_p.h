// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef QQUICK3DQUATERNIONANIMATION_H
#define QQUICK3DQUATERNIONANIMATION_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtGui/qquaternion.h>

#include <QtQuick3D/private/qquick3dobject_p.h>
#include <QtQuick/private/qquickanimation_p.h>

QT_BEGIN_NAMESPACE

class QQuick3DQuaternionAnimationPrivate;

class Q_QUICK3D_EXPORT QQuick3DQuaternionAnimation : public QQuickPropertyAnimation
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QQuick3DQuaternionAnimation)
    Q_PROPERTY(QQuaternion from READ from WRITE setFrom)
    Q_PROPERTY(QQuaternion to READ to WRITE setTo)
    Q_PROPERTY(Type type READ type WRITE setType NOTIFY typeChanged)

    Q_PROPERTY(float fromXRotation READ fromXRotation WRITE setFromXRotation NOTIFY fromXRotationChanged)
    Q_PROPERTY(float fromYRotation READ fromYRotation WRITE setFromYRotation NOTIFY fromYRotationChanged)
    Q_PROPERTY(float fromZRotation READ fromZRotation WRITE setFromZRotation NOTIFY fromZRotationChanged)
    Q_PROPERTY(float toXRotation READ toXRotation WRITE setToXRotation NOTIFY toXRotationChanged)
    Q_PROPERTY(float toYRotation READ toYRotation WRITE setToYRotation NOTIFY toYRotationChanged)
    Q_PROPERTY(float toZRotation READ toZRotation WRITE setToZRotation NOTIFY toZRotationChanged)

    QML_NAMED_ELEMENT(QuaternionAnimation)

public:
    enum Type {
        Slerp = 0,
        Nlerp
    };
    Q_ENUM(Type)

    QQuick3DQuaternionAnimation(QObject *parent = nullptr);

    QQuaternion from() const;
    void setFrom(const QQuaternion &f);

    QQuaternion to() const;
    void setTo(const QQuaternion &t);

    Type type() const;
    void setType(Type type);

    float fromXRotation() const;
    void setFromXRotation(float f);

    float fromYRotation() const;
    void setFromYRotation(float f);

    float fromZRotation() const;
    void setFromZRotation(float f);

    float toXRotation() const;
    void setToXRotation(float f);

    float toYRotation() const;
    void setToYRotation(float f);

    float toZRotation() const;
    void setToZRotation(float f);

Q_SIGNALS:
    void typeChanged(QQuick3DQuaternionAnimation::Type type);
    void fromXRotationChanged(float value);
    void fromYRotationChanged(float value);
    void fromZRotationChanged(float value);
    void toXRotationChanged(float value);
    void toYRotationChanged(float value);
    void toZRotationChanged(float value);
};

Q_QUICK3D_EXPORT QVariant q_quaternionInterpolator(const QQuaternion &from, const QQuaternion &to, qreal progress);

QT_END_NAMESPACE

#endif // QQUICK3DQUATERNIONANIMATION_H
