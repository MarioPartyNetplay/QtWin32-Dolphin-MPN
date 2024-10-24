// Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QT3DRENDER_QRENDERTARGETOUTPUT_P_H
#define QT3DRENDER_QRENDERTARGETOUTPUT_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DCore/private/qnode_p.h>
#include <Qt3DRender/qrendertargetoutput.h>
#include <Qt3DRender/private/qt3drender_global_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class QAbstractTexture;

class Q_3DRENDERSHARED_PRIVATE_EXPORT QRenderTargetOutputPrivate : public Qt3DCore::QNodePrivate
{
public:
    QRenderTargetOutputPrivate();

    Q_DECLARE_PUBLIC(QRenderTargetOutput)

    QAbstractTexture *m_texture;
    QRenderTargetOutput::AttachmentPoint m_attachmentPoint;
    int m_mipLevel;
    int m_layer;
    QAbstractTexture::CubeMapFace m_face;
};

struct QRenderTargetOutputData
{
    Qt3DCore::QNodeId textureId;
    QRenderTargetOutput::AttachmentPoint attachmentPoint;
    int mipLevel;
    int layer;
    QAbstractTexture::CubeMapFace face;
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_QRENDERTARGETOUTPUT_P_H
