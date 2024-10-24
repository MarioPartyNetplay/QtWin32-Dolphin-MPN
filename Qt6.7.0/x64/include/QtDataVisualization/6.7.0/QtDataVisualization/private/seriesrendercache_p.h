// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

//
//  W A R N I N G
//  -------------
//
// This file is not part of the QtDataVisualization API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef SERIESRENDERCACHE_P_H
#define SERIESRENDERCACHE_P_H

#include "datavisualizationglobal_p.h"
#include "qabstract3dseries_p.h"

QT_BEGIN_NAMESPACE

class Abstract3DRenderer;
class ObjectHelper;
class TextureHelper;

class SeriesRenderCache
{
public:
    SeriesRenderCache(QAbstract3DSeries *series, Abstract3DRenderer *renderer);
    virtual ~SeriesRenderCache();

    virtual void populate(bool newSeries);
    virtual void cleanup(TextureHelper *texHelper);

    // NOTE: Series pointer can only be used to access the series when syncing with controller.
    // It is not guaranteed to be valid while rendering and should only be used as an identifier.
    inline QAbstract3DSeries *series() const { return m_series; }

    inline const QAbstract3DSeries::Mesh &mesh() const { return m_mesh; }
    inline const QQuaternion &meshRotation() const { return m_meshRotation; }
    inline void setMeshRotation(const QQuaternion &rotation) { m_meshRotation = rotation; }
    inline ObjectHelper *object() const { return m_object; }
    inline const Q3DTheme::ColorStyle &colorStyle() const { return m_colorStyle; }
    inline const QVector4D &baseColor() const { return m_baseColor; }
    inline const GLuint &baseUniformTexture() const { return m_baseUniformTexture; }
    inline const GLuint &baseGradientTexture() const { return m_baseGradientTexture; }
    inline const QImage &gradientImage() const { return m_gradientImage; }
    inline const QVector4D &singleHighlightColor() const { return m_singleHighlightColor; }
    inline const GLuint &singleHighlightGradientTexture() const { return m_singleHighlightGradientTexture; }
    inline const QVector4D &multiHighlightColor() const { return m_multiHighlightColor; }
    inline const GLuint &multiHighlightGradientTexture() const { return m_multiHighlightGradientTexture; }
    inline const QString &name() const { return m_name; }
    inline const QString &itemLabel() const { return m_itemLabel; }
    inline void setValid(bool valid) { m_valid = valid; }
    inline bool isValid() const { return m_valid; }
    inline bool isVisible() const { return m_visible; }
    inline void setDataDirty(bool state) { m_objectDirty = state; }
    inline bool dataDirty() const { return m_objectDirty; }
    inline void setStaticObjectUVDirty(bool state) { m_staticObjectUVDirty = state; }
    inline bool staticObjectUVDirty() { return m_staticObjectUVDirty; }

protected:
    QAbstract3DSeries *m_series;
    ObjectHelper *m_object; // Shared reference
    QAbstract3DSeries::Mesh m_mesh;
    QQuaternion m_meshRotation;

    Q3DTheme::ColorStyle m_colorStyle;
    QVector4D m_baseColor;
    GLuint m_baseUniformTexture;
    GLuint m_baseGradientTexture;
    QImage m_gradientImage;
    QVector4D m_singleHighlightColor;
    GLuint m_singleHighlightGradientTexture;
    QVector4D m_multiHighlightColor;
    GLuint m_multiHighlightGradientTexture;

    QString m_name;
    QString m_itemLabel;
    bool m_valid;
    bool m_visible;
    Abstract3DRenderer *m_renderer;
    bool m_objectDirty;
    bool m_staticObjectUVDirty;
};

QT_END_NAMESPACE

#endif

