// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

/* This file is autogenerated from the Unicode 15.0 database. Do not edit */

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of internal files.  This header file may change from version to version
// without notice, or even be removed.
//
// We mean it.
//

#ifndef QUNICODETABLES_P_H
#define QUNICODETABLES_P_H

#include <QtCore/private/qglobal_p.h>

#include <QtCore/qchar.h>

QT_BEGIN_NAMESPACE

#define UNICODE_DATA_VERSION QChar::Unicode_15_0

namespace QUnicodeTables {

enum Case {
    LowerCase,
    UpperCase,
    TitleCase,
    CaseFold,

    NumCases
};

struct Properties {
    ushort category            : 8; /* 5 used */
    ushort direction           : 8; /* 5 used */
    ushort combiningClass      : 8;
    ushort joining             : 3;
    signed short digitValue    : 5;
    signed short mirrorDiff    : 16;
    ushort unicodeVersion      : 5; /* 5 used */
    ushort eastAsianWidth      : 3; /* 3 used */
    ushort nfQuickCheck        : 8;
#ifdef Q_OS_WASM
    unsigned char              : 0; //wasm 64 packing trick
#endif
    struct {
        ushort special    : 1;
        signed short diff : 15;
    } cases[NumCases];
#ifdef Q_OS_WASM
    unsigned char              : 0; //wasm 64 packing trick
#endif
    ushort graphemeBreakClass  : 5; /* 5 used */
    ushort wordBreakClass      : 5; /* 5 used */
    ushort lineBreakClass      : 6; /* 6 used */
    ushort sentenceBreakClass  : 4; /* 4 used */
    ushort idnaStatus          : 4; /* 3 used */
    ushort script              : 8;
};

Q_CORE_EXPORT const Properties * QT_FASTCALL properties(char32_t ucs4) noexcept;
Q_CORE_EXPORT const Properties * QT_FASTCALL properties(char16_t ucs2) noexcept;

static_assert(sizeof(Properties) == 20);

enum class EastAsianWidth : unsigned int {
    A,
    F,
    H,
    N,
    Na,
    W,
};

enum GraphemeBreakClass {
    GraphemeBreak_Any,
    GraphemeBreak_CR,
    GraphemeBreak_LF,
    GraphemeBreak_Control,
    GraphemeBreak_Extend,
    GraphemeBreak_ZWJ,
    GraphemeBreak_RegionalIndicator,
    GraphemeBreak_Prepend,
    GraphemeBreak_SpacingMark,
    GraphemeBreak_L,
    GraphemeBreak_V,
    GraphemeBreak_T,
    GraphemeBreak_LV,
    GraphemeBreak_LVT,
    GraphemeBreak_Extended_Pictographic,

    NumGraphemeBreakClasses
};

enum WordBreakClass {
    WordBreak_Any,
    WordBreak_CR,
    WordBreak_LF,
    WordBreak_Newline,
    WordBreak_Extend,
    WordBreak_ZWJ,
    WordBreak_Format,
    WordBreak_RegionalIndicator,
    WordBreak_Katakana,
    WordBreak_HebrewLetter,
    WordBreak_ALetter,
    WordBreak_SingleQuote,
    WordBreak_DoubleQuote,
    WordBreak_MidNumLet,
    WordBreak_MidLetter,
    WordBreak_MidNum,
    WordBreak_Numeric,
    WordBreak_ExtendNumLet,
    WordBreak_WSegSpace,

    NumWordBreakClasses
};

enum SentenceBreakClass {
    SentenceBreak_Any,
    SentenceBreak_CR,
    SentenceBreak_LF,
    SentenceBreak_Sep,
    SentenceBreak_Extend,
    SentenceBreak_Sp,
    SentenceBreak_Lower,
    SentenceBreak_Upper,
    SentenceBreak_OLetter,
    SentenceBreak_Numeric,
    SentenceBreak_ATerm,
    SentenceBreak_SContinue,
    SentenceBreak_STerm,
    SentenceBreak_Close,

    NumSentenceBreakClasses
};

// see http://www.unicode.org/reports/tr14/tr14-30.html
// we don't use the XX and AI classes and map them to AL instead.
enum LineBreakClass {
    LineBreak_OP, LineBreak_CL, LineBreak_CP, LineBreak_QU, LineBreak_GL,
    LineBreak_NS, LineBreak_EX, LineBreak_SY, LineBreak_IS, LineBreak_PR,
    LineBreak_PO, LineBreak_NU, LineBreak_AL, LineBreak_HL, LineBreak_ID,
    LineBreak_IN, LineBreak_HY, LineBreak_BA, LineBreak_BB, LineBreak_B2,
    LineBreak_ZW, LineBreak_CM, LineBreak_WJ, LineBreak_H2, LineBreak_H3,
    LineBreak_JL, LineBreak_JV, LineBreak_JT, LineBreak_RI, LineBreak_CB,
    LineBreak_EB, LineBreak_EM, LineBreak_ZWJ,
    LineBreak_SA, LineBreak_SG, LineBreak_SP,
    LineBreak_CR, LineBreak_LF, LineBreak_BK,

    NumLineBreakClasses
};

enum class IdnaStatus : unsigned int {
    Disallowed,
    Valid,
    Ignored,
    Mapped,
    Deviation
};

Q_CORE_EXPORT GraphemeBreakClass QT_FASTCALL graphemeBreakClass(char32_t ucs4) noexcept;
inline GraphemeBreakClass graphemeBreakClass(QChar ch) noexcept
{ return graphemeBreakClass(ch.unicode()); }

Q_CORE_EXPORT WordBreakClass QT_FASTCALL wordBreakClass(char32_t ucs4) noexcept;
inline WordBreakClass wordBreakClass(QChar ch) noexcept
{ return wordBreakClass(ch.unicode()); }

Q_CORE_EXPORT SentenceBreakClass QT_FASTCALL sentenceBreakClass(char32_t ucs4) noexcept;
inline SentenceBreakClass sentenceBreakClass(QChar ch) noexcept
{ return sentenceBreakClass(ch.unicode()); }

Q_CORE_EXPORT LineBreakClass QT_FASTCALL lineBreakClass(char32_t ucs4) noexcept;
inline LineBreakClass lineBreakClass(QChar ch) noexcept
{ return lineBreakClass(ch.unicode()); }

Q_CORE_EXPORT IdnaStatus QT_FASTCALL idnaStatus(char32_t ucs4) noexcept;
inline IdnaStatus idnaStatus(QChar ch) noexcept
{ return idnaStatus(ch.unicode()); }

Q_CORE_EXPORT QStringView QT_FASTCALL idnaMapping(char32_t usc4) noexcept;
inline QStringView idnaMapping(QChar ch) noexcept
{ return idnaMapping(ch.unicode()); }

Q_CORE_EXPORT EastAsianWidth QT_FASTCALL eastAsianWidth(char32_t ucs4) noexcept;
inline EastAsianWidth eastAsianWidth(QChar ch) noexcept
{ return eastAsianWidth(ch.unicode()); }

} // namespace QUnicodeTables

QT_END_NAMESPACE

#endif // QUNICODETABLES_P_H