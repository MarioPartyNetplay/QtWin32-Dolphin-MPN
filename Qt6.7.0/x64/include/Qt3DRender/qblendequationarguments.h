// Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
// Copyright (C) 2016 The Qt Company Ltd and/or its subsidiary(-ies).
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QT3DRENDER_QBLENDEQUATIONARGUMENTS_H
#define QT3DRENDER_QBLENDEQUATIONARGUMENTS_H

#include <Qt3DRender/qrenderstate.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class QBlendEquationArgumentsPrivate;

class Q_3DRENDERSHARED_EXPORT QBlendEquationArguments : public QRenderState
{
    Q_OBJECT
    Q_PROPERTY(Blending sourceRgb READ sourceRgb WRITE setSourceRgb NOTIFY sourceRgbChanged)
    Q_PROPERTY(Blending sourceAlpha READ sourceAlpha WRITE setSourceAlpha NOTIFY sourceAlphaChanged)
    Q_PROPERTY(Blending destinationRgb READ destinationRgb WRITE setDestinationRgb NOTIFY destinationRgbChanged)
    Q_PROPERTY(Blending destinationAlpha READ destinationAlpha WRITE setDestinationAlpha NOTIFY destinationAlphaChanged)
    Q_PROPERTY(int bufferIndex READ bufferIndex WRITE setBufferIndex NOTIFY bufferIndexChanged)

public:

    enum Blending
    {
        Zero = 0,
        One = 1,
        SourceColor = 0x0300,
        SourceAlpha = 0x0302,
        Source1Alpha, // ### Qt 6: Fix -> has same value as OneMinusSourceAlpha
        Source1Color, // ### Qt 6: Fix -> has same value as DestinationAlpha
        DestinationColor = 0x0306,
        DestinationAlpha = 0x0304,
        SourceAlphaSaturate = 0x0308,
        ConstantColor = 0x8001,
        ConstantAlpha = 0x8003,
        OneMinusSourceColor = 0x0301,
        OneMinusSourceAlpha = 0x0303,
        OneMinusDestinationAlpha = 0x0305,
        OneMinusDestinationColor = 0x0307,
        OneMinusConstantColor = 0x8002,
        OneMinusConstantAlpha = 0x8004,
        OneMinusSource1Alpha,
        OneMinusSource1Color,
        OneMinusSource1Color0 = OneMinusSource1Color // ### Qt 6: Remove
    };
    Q_ENUM(Blending) // LCOV_EXCL_LINE

    explicit QBlendEquationArguments(Qt3DCore::QNode *parent = nullptr);
    ~QBlendEquationArguments();

    Blending sourceRgb() const;
    Blending destinationRgb() const;
    Blending sourceAlpha() const;
    Blending destinationAlpha() const;
    int bufferIndex() const;

public Q_SLOTS:
    void setSourceRgb(Blending sourceRgb);
    void setDestinationRgb(Blending destinationRgb);
    void setSourceAlpha(Blending sourceAlpha);
    void setDestinationAlpha(Blending destinationAlpha);
    void setSourceRgba(Blending sourceRgba);
    void setDestinationRgba(Blending destinationRgba);
    void setBufferIndex(int index);

Q_SIGNALS:
    void sourceRgbChanged(Blending sourceRgb);
    void sourceAlphaChanged(Blending sourceAlpha);
    void destinationRgbChanged(Blending destinationRgb);
    void destinationAlphaChanged(Blending destinationAlpha);
    void sourceRgbaChanged(Blending sourceRgba);
    void destinationRgbaChanged(Blending destinationRgba);
    void bufferIndexChanged(int index);

protected:
    explicit QBlendEquationArguments(QBlendEquationArgumentsPrivate &dd, Qt3DCore::QNode *parent = nullptr);

private:
    Q_DECLARE_PRIVATE(QBlendEquationArguments)
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_QBLENDEQUATIONARGUMENTS_H
