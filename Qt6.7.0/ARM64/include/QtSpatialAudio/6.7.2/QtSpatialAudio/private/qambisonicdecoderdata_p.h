// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-3.0-only
#ifndef QAMBISONICDECODERDATA_P_H
#define QAMBISONICDECODERDATA_P_H

#include <qtspatialaudioglobal_p.h>

//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

// This file is generated by the matlab/octave file adt_generate_qt.m
// using the Ambisonic Decoder Toolbox (https://bitbucket.org/ambidecodertoolbox/adt/src/master/)


QT_BEGIN_NAMESPACE

// Decoder matrix for 5dot0, ambisonic level 1
static constexpr float decoderMatrix_5dot0_1_lf[5*4] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, // C
0.552170f, 0.623932f, 0.000000f, -0.628578f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, // Rs
};

// Decoder matrix for 5dot0, ambisonic level 1
static constexpr float decoderMatrix_5dot0_1_hf[5*4] = {
0.361445f, 0.351810f, 0.000000f, 0.315542f, // L
0.361435f, -0.351809f, 0.000000f, 0.315535f, // R
0.191780f, 0.000000f, 0.000000f, 0.268870f, // C
0.780886f, 0.509439f, 0.000000f, -0.513232f, // Ls
0.780893f, -0.509444f, 0.000000f, -0.513226f, // Rs
};

// Decoder matrix for 5dot0, ambisonic level 2
static constexpr float decoderMatrix_5dot0_2_lf[5*9] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, 0.157509f, 0.000000f, -0.095304f, 0.000000f, -0.013008f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, -0.157507f, 0.000000f, -0.095343f, 0.000000f, -0.013009f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, // C
0.552170f, 0.623932f, 0.000000f, -0.628578f, -0.041978f, 0.000000f, -0.139072f, 0.000000f, -0.030798f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, 0.041979f, 0.000000f, -0.139039f, 0.000000f, -0.030796f, // Rs
};

// Decoder matrix for 5dot0, ambisonic level 2
static constexpr float decoderMatrix_5dot0_2_hf[5*9] = {
0.404108f, 0.527714f, 0.000000f, 0.473313f, 0.099617f, 0.000000f, -0.060276f, 0.000000f, -0.008227f, // L
0.404097f, -0.527714f, 0.000000f, 0.473303f, -0.099616f, 0.000000f, -0.060300f, 0.000000f, -0.008228f, // R
0.214417f, 0.000000f, 0.000000f, 0.403305f, 0.000000f, 0.000000f, -0.035484f, 0.000000f, 0.070209f, // C
0.873057f, 0.764158f, 0.000000f, -0.769848f, -0.026549f, 0.000000f, -0.087957f, 0.000000f, -0.019478f, // Ls
0.873065f, -0.764166f, 0.000000f, -0.769839f, 0.026550f, 0.000000f, -0.087936f, 0.000000f, -0.019477f, // Rs
};

// Decoder matrix for 5dot0, ambisonic level 3
static constexpr float decoderMatrix_5dot0_3_lf[5*16] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, 0.157509f, 0.000000f, -0.095304f, 0.000000f, -0.013008f, 0.013422f, 0.000000f, 0.030238f, 0.000000f, 0.025660f, 0.000000f, -0.014215f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, -0.157507f, 0.000000f, -0.095343f, 0.000000f, -0.013009f, -0.013422f, 0.000000f, -0.030227f, 0.000000f, 0.025649f, 0.000000f, -0.014214f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.018999f, 0.000000f, 0.020478f, // C
0.552170f, 0.623932f, 0.000000f, -0.628578f, -0.041978f, 0.000000f, -0.139072f, 0.000000f, -0.030798f, -0.012642f, 0.000000f, 0.049794f, 0.000000f, -0.073727f, 0.000000f, -0.001768f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, 0.041979f, 0.000000f, -0.139039f, 0.000000f, -0.030796f, 0.012642f, 0.000000f, -0.049793f, 0.000000f, -0.073721f, 0.000000f, -0.001769f, // Rs
};

// Decoder matrix for 5dot0, ambisonic level 3
static constexpr float decoderMatrix_5dot0_3_hf[5*16] = {
0.426355f, 0.618969f, 0.000000f, 0.555160f, 0.160893f, 0.000000f, -0.097352f, 0.000000f, -0.013287f, 0.006823f, 0.000000f, 0.015372f, 0.000000f, 0.013045f, 0.000000f, -0.007226f, // L
0.426343f, -0.618969f, 0.000000f, 0.555149f, -0.160891f, 0.000000f, -0.097392f, 0.000000f, -0.013289f, -0.006823f, 0.000000f, -0.015367f, 0.000000f, 0.013039f, 0.000000f, -0.007226f, // R
0.226221f, 0.000000f, 0.000000f, 0.473046f, 0.000000f, 0.000000f, -0.057310f, 0.000000f, 0.113395f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.009658f, 0.000000f, 0.010410f, // C
0.921121f, 0.896300f, 0.000000f, -0.902974f, -0.042880f, 0.000000f, -0.142060f, 0.000000f, -0.031459f, -0.006427f, 0.000000f, 0.025314f, 0.000000f, -0.037481f, 0.000000f, -0.000899f, // Ls
0.921130f, -0.896310f, 0.000000f, -0.902963f, 0.042881f, 0.000000f, -0.142027f, 0.000000f, -0.031457f, 0.006427f, 0.000000f, -0.025313f, 0.000000f, -0.037478f, 0.000000f, -0.000899f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 1
static constexpr float decoderMatrix_5dot1_1_lf[6*4] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, // C
0.5f, 0.0f, 0.0f, 0.0f, // LFE
0.552170f, 0.623932f, 0.000000f, -0.628578f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 1
static constexpr float decoderMatrix_5dot1_1_hf[6*4] = {
0.361445f, 0.351810f, 0.000000f, 0.315542f, // L
0.361435f, -0.351809f, 0.000000f, 0.315535f, // R
0.191780f, 0.000000f, 0.000000f, 0.268870f, // C
0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.780886f, 0.509439f, 0.000000f, -0.513232f, // Ls
0.780893f, -0.509444f, 0.000000f, -0.513226f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 2
static constexpr float decoderMatrix_5dot1_2_lf[6*9] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, 0.157509f, 0.000000f, -0.095304f, 0.000000f, -0.013008f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, -0.157507f, 0.000000f, -0.095343f, 0.000000f, -0.013009f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, // C
0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.552170f, 0.623932f, 0.000000f, -0.628578f, -0.041978f, 0.000000f, -0.139072f, 0.000000f, -0.030798f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, 0.041979f, 0.000000f, -0.139039f, 0.000000f, -0.030796f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 2
static constexpr float decoderMatrix_5dot1_2_hf[6*9] = {
0.404108f, 0.527714f, 0.000000f, 0.473313f, 0.099617f, 0.000000f, -0.060276f, 0.000000f, -0.008227f, // L
0.404097f, -0.527714f, 0.000000f, 0.473303f, -0.099616f, 0.000000f, -0.060300f, 0.000000f, -0.008228f, // R
0.214417f, 0.000000f, 0.000000f, 0.403305f, 0.000000f, 0.000000f, -0.035484f, 0.000000f, 0.070209f, // C
0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.873057f, 0.764158f, 0.000000f, -0.769848f, -0.026549f, 0.000000f, -0.087957f, 0.000000f, -0.019478f, // Ls
0.873065f, -0.764166f, 0.000000f, -0.769839f, 0.026550f, 0.000000f, -0.087936f, 0.000000f, -0.019477f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 3
static constexpr float decoderMatrix_5dot1_3_lf[6*16] = {
0.255580f, 0.430877f, 0.000000f, 0.386458f, 0.157509f, 0.000000f, -0.095304f, 0.000000f, -0.013008f, 0.013422f, 0.000000f, 0.030238f, 0.000000f, 0.025660f, 0.000000f, -0.014215f, // L
0.255573f, -0.430877f, 0.000000f, 0.386450f, -0.157507f, 0.000000f, -0.095343f, 0.000000f, -0.013009f, -0.013422f, 0.000000f, -0.030227f, 0.000000f, 0.025649f, 0.000000f, -0.014214f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.018999f, 0.000000f, 0.020478f, // C
0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.552170f, 0.623932f, 0.000000f, -0.628578f, -0.041978f, 0.000000f, -0.139072f, 0.000000f, -0.030798f, -0.012642f, 0.000000f, 0.049794f, 0.000000f, -0.073727f, 0.000000f, -0.001768f, // Ls
0.552175f, -0.623939f, 0.000000f, -0.628571f, 0.041979f, 0.000000f, -0.139039f, 0.000000f, -0.030796f, 0.012642f, 0.000000f, -0.049793f, 0.000000f, -0.073721f, 0.000000f, -0.001769f, // Rs
};

// Decoder matrix for 5dot1, ambisonic level 3
static constexpr float decoderMatrix_5dot1_3_hf[6*16] = {
0.426355f, 0.618969f, 0.000000f, 0.555160f, 0.160893f, 0.000000f, -0.097352f, 0.000000f, -0.013287f, 0.006823f, 0.000000f, 0.015372f, 0.000000f, 0.013045f, 0.000000f, -0.007226f, // L
0.426343f, -0.618969f, 0.000000f, 0.555149f, -0.160891f, 0.000000f, -0.097392f, 0.000000f, -0.013289f, -0.006823f, 0.000000f, -0.015367f, 0.000000f, 0.013039f, 0.000000f, -0.007226f, // R
0.226221f, 0.000000f, 0.000000f, 0.473046f, 0.000000f, 0.000000f, -0.057310f, 0.000000f, 0.113395f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.009658f, 0.000000f, 0.010410f, // C
0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.921121f, 0.896300f, 0.000000f, -0.902974f, -0.042880f, 0.000000f, -0.142060f, 0.000000f, -0.031459f, -0.006427f, 0.000000f, 0.025314f, 0.000000f, -0.037481f, 0.000000f, -0.000899f, // Ls
0.921130f, -0.896310f, 0.000000f, -0.902963f, 0.042881f, 0.000000f, -0.142027f, 0.000000f, -0.031457f, 0.006427f, 0.000000f, -0.025313f, 0.000000f, -0.037478f, 0.000000f, -0.000899f, // Rs
};

// Decoder matrix for 7dot0, ambisonic level 1
static constexpr float decoderMatrix_7dot0_1_lf[7*4] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, // C
0.276200f, 0.619758f, 0.000000f, 0.000000f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, // Rb
};

// Decoder matrix for 7dot0, ambisonic level 1
static constexpr float decoderMatrix_7dot0_1_hf[7*4] = {
0.291186f, 0.257087f, 0.000000f, 0.298946f, // L
0.291162f, -0.257091f, 0.000000f, 0.298940f, // R
0.191780f, 0.000000f, 0.000000f, 0.268870f, // C
0.390605f, 0.506030f, 0.000000f, 0.000000f, // Ls
0.390645f, -0.506039f, 0.000000f, 0.000000f, // Rs
0.390637f, 0.253019f, 0.000000f, -0.438240f, // Lb
0.390600f, -0.253026f, 0.000000f, -0.438232f, // Rb
};

// Decoder matrix for 7dot0, ambisonic level 2
static constexpr float decoderMatrix_7dot0_2_lf[7*9] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, 0.144868f, 0.000000f, -0.081538f, 0.000000f, 0.023353f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, -0.144867f, 0.000000f, -0.081652f, 0.000000f, 0.023347f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, // C
0.276200f, 0.619758f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106989f, 0.000000f, -0.163267f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106856f, 0.000000f, -0.163267f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, -0.141395f, 0.000000f, -0.106873f, 0.000000f, 0.081634f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, 0.141394f, 0.000000f, -0.107038f, 0.000000f, 0.081628f, // Rb
};

// Decoder matrix for 7dot0, ambisonic level 2
static constexpr float decoderMatrix_7dot0_2_hf[7*9] = {
0.325556f, 0.385630f, 0.000000f, 0.448419f, 0.091623f, 0.000000f, -0.051569f, 0.000000f, 0.014770f, // L
0.325529f, -0.385637f, 0.000000f, 0.448410f, -0.091622f, 0.000000f, -0.051641f, 0.000000f, 0.014766f, // R
0.214417f, 0.000000f, 0.000000f, 0.403305f, 0.000000f, 0.000000f, -0.035484f, 0.000000f, 0.070209f, // C
0.436710f, 0.759045f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.067666f, 0.000000f, -0.103259f, // Ls
0.436755f, -0.759058f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.067582f, 0.000000f, -0.103259f, // Rs
0.436746f, 0.379529f, 0.000000f, -0.657361f, -0.089426f, 0.000000f, -0.067593f, 0.000000f, 0.051630f, // Lb
0.436704f, -0.379539f, 0.000000f, -0.657348f, 0.089426f, 0.000000f, -0.067697f, 0.000000f, 0.051626f, // Rb
};

// Decoder matrix for 7dot0, ambisonic level 3
static constexpr float decoderMatrix_7dot0_3_lf[7*16] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, 0.144868f, 0.000000f, -0.081538f, 0.000000f, 0.023353f, 0.019489f, 0.000000f, 0.019857f, 0.000000f, 0.022683f, 0.000000f, -0.011066f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, -0.144867f, 0.000000f, -0.081652f, 0.000000f, 0.023347f, -0.019488f, 0.000000f, -0.019830f, 0.000000f, 0.022669f, 0.000000f, -0.011066f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.018999f, 0.000000f, 0.020478f, // C
0.276200f, 0.619758f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106989f, 0.000000f, -0.163267f, -0.018501f, 0.000000f, 0.040168f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106856f, 0.000000f, -0.163267f, 0.018501f, 0.000000f, -0.040194f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, -0.141395f, 0.000000f, -0.106873f, 0.000000f, 0.081634f, 0.018501f, 0.000000f, 0.020094f, 0.000000f, -0.034809f, 0.000000f, 0.000000f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, 0.141394f, 0.000000f, -0.107038f, 0.000000f, 0.081628f, -0.018500f, 0.000000f, -0.020079f, 0.000000f, -0.034779f, 0.000000f, 0.000000f, // Rb
};

// Decoder matrix for 7dot0, ambisonic level 3
static constexpr float decoderMatrix_7dot0_3_hf[7*16] = {
0.343479f, 0.452315f, 0.000000f, 0.525962f, 0.147981f, 0.000000f, -0.083290f, 0.000000f, 0.023855f, 0.009908f, 0.000000f, 0.010095f, 0.000000f, 0.011532f, 0.000000f, -0.005626f, // L
0.343450f, -0.452323f, 0.000000f, 0.525952f, -0.147980f, 0.000000f, -0.083406f, 0.000000f, 0.023849f, -0.009907f, 0.000000f, -0.010081f, 0.000000f, 0.011524f, 0.000000f, -0.005626f, // R
0.226221f, 0.000000f, 0.000000f, 0.473046f, 0.000000f, 0.000000f, -0.057310f, 0.000000f, 0.113395f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.009658f, 0.000000f, 0.010410f, // C
0.460752f, 0.890303f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.109288f, 0.000000f, -0.166775f, -0.009405f, 0.000000f, 0.020420f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Ls
0.460799f, -0.890318f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.109152f, 0.000000f, -0.166775f, 0.009405f, 0.000000f, -0.020434f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Rs
0.460790f, 0.445159f, 0.000000f, -0.771035f, -0.144433f, 0.000000f, -0.109170f, 0.000000f, 0.083387f, 0.009406f, 0.000000f, 0.010215f, 0.000000f, -0.017696f, 0.000000f, 0.000000f, // Lb
0.460745f, -0.445171f, 0.000000f, -0.771020f, 0.144432f, 0.000000f, -0.109338f, 0.000000f, 0.083382f, -0.009405f, 0.000000f, -0.010207f, 0.000000f, -0.017681f, 0.000000f, 0.000000f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 1
static constexpr float decoderMatrix_7dot1_1_lf[8*4] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, // C
0.5f, 0.0f, 0.0f, 0.0f, // LFE
0.276200f, 0.619758f, 0.000000f, 0.000000f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 1
static constexpr float decoderMatrix_7dot1_1_hf[8*4] = {
0.291186f, 0.257087f, 0.000000f, 0.298946f, // L
0.291162f, -0.257091f, 0.000000f, 0.298940f, // R
0.191780f, 0.000000f, 0.000000f, 0.268870f, // C
0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.390605f, 0.506030f, 0.000000f, 0.000000f, // Ls
0.390645f, -0.506039f, 0.000000f, 0.000000f, // Rs
0.390637f, 0.253019f, 0.000000f, -0.438240f, // Lb
0.390600f, -0.253026f, 0.000000f, -0.438232f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 2
static constexpr float decoderMatrix_7dot1_2_lf[8*9] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, 0.144868f, 0.000000f, -0.081538f, 0.000000f, 0.023353f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, -0.144867f, 0.000000f, -0.081652f, 0.000000f, 0.023347f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, // C
0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.276200f, 0.619758f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106989f, 0.000000f, -0.163267f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106856f, 0.000000f, -0.163267f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, -0.141395f, 0.000000f, -0.106873f, 0.000000f, 0.081634f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, 0.141394f, 0.000000f, -0.107038f, 0.000000f, 0.081628f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 2
static constexpr float decoderMatrix_7dot1_2_hf[8*9] = {
0.325556f, 0.385630f, 0.000000f, 0.448419f, 0.091623f, 0.000000f, -0.051569f, 0.000000f, 0.014770f, // L
0.325529f, -0.385637f, 0.000000f, 0.448410f, -0.091622f, 0.000000f, -0.051641f, 0.000000f, 0.014766f, // R
0.214417f, 0.000000f, 0.000000f, 0.403305f, 0.000000f, 0.000000f, -0.035484f, 0.000000f, 0.070209f, // C
0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.436710f, 0.759045f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.067666f, 0.000000f, -0.103259f, // Ls
0.436755f, -0.759058f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.067582f, 0.000000f, -0.103259f, // Rs
0.436746f, 0.379529f, 0.000000f, -0.657361f, -0.089426f, 0.000000f, -0.067593f, 0.000000f, 0.051630f, // Lb
0.436704f, -0.379539f, 0.000000f, -0.657348f, 0.089426f, 0.000000f, -0.067697f, 0.000000f, 0.051626f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 3
static constexpr float decoderMatrix_7dot1_3_lf[8*16] = {
0.205900f, 0.314866f, 0.000000f, 0.366133f, 0.144868f, 0.000000f, -0.081538f, 0.000000f, 0.023353f, 0.019489f, 0.000000f, 0.019857f, 0.000000f, 0.022683f, 0.000000f, -0.011066f, // L
0.205883f, -0.314871f, 0.000000f, 0.366126f, -0.144867f, 0.000000f, -0.081652f, 0.000000f, 0.023347f, -0.019488f, 0.000000f, -0.019830f, 0.000000f, 0.022669f, 0.000000f, -0.011066f, // R
0.135609f, 0.000000f, 0.000000f, 0.329297f, 0.000000f, 0.000000f, -0.056105f, 0.000000f, 0.111010f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.018999f, 0.000000f, 0.020478f, // C
0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.276200f, 0.619758f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106989f, 0.000000f, -0.163267f, -0.018501f, 0.000000f, 0.040168f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Ls
0.276228f, -0.619768f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.106856f, 0.000000f, -0.163267f, 0.018501f, 0.000000f, -0.040194f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Rs
0.276222f, 0.309884f, 0.000000f, -0.536733f, -0.141395f, 0.000000f, -0.106873f, 0.000000f, 0.081634f, 0.018501f, 0.000000f, 0.020094f, 0.000000f, -0.034809f, 0.000000f, 0.000000f, // Lb
0.276196f, -0.309893f, 0.000000f, -0.536723f, 0.141394f, 0.000000f, -0.107038f, 0.000000f, 0.081628f, -0.018500f, 0.000000f, -0.020079f, 0.000000f, -0.034779f, 0.000000f, 0.000000f, // Rb
};

// Decoder matrix for 7dot1, ambisonic level 3
static constexpr float decoderMatrix_7dot1_3_hf[8*16] = {
0.343479f, 0.452315f, 0.000000f, 0.525962f, 0.147981f, 0.000000f, -0.083290f, 0.000000f, 0.023855f, 0.009908f, 0.000000f, 0.010095f, 0.000000f, 0.011532f, 0.000000f, -0.005626f, // L
0.343450f, -0.452323f, 0.000000f, 0.525952f, -0.147980f, 0.000000f, -0.083406f, 0.000000f, 0.023849f, -0.009907f, 0.000000f, -0.010081f, 0.000000f, 0.011524f, 0.000000f, -0.005626f, // R
0.226221f, 0.000000f, 0.000000f, 0.473046f, 0.000000f, 0.000000f, -0.057310f, 0.000000f, 0.113395f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.009658f, 0.000000f, 0.010410f, // C
0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // LFE
0.460752f, 0.890303f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.109288f, 0.000000f, -0.166775f, -0.009405f, 0.000000f, 0.020420f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Ls
0.460799f, -0.890318f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.109152f, 0.000000f, -0.166775f, 0.009405f, 0.000000f, -0.020434f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, // Rs
0.460790f, 0.445159f, 0.000000f, -0.771035f, -0.144433f, 0.000000f, -0.109170f, 0.000000f, 0.083387f, 0.009406f, 0.000000f, 0.010215f, 0.000000f, -0.017696f, 0.000000f, 0.000000f, // Lb
0.460745f, -0.445171f, 0.000000f, -0.771020f, 0.144432f, 0.000000f, -0.109338f, 0.000000f, 0.083382f, -0.009405f, 0.000000f, -0.010207f, 0.000000f, -0.017681f, 0.000000f, 0.000000f, // Rb
};

QT_END_NAMESPACE

#endif

