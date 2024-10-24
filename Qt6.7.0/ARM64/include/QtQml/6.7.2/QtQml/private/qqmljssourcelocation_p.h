// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QQMLJSSOURCELOCATION_P_H
#define QQMLJSSOURCELOCATION_P_H

#include <QtCore/private/qglobal_p.h>
#include <QtCore/qhashfunctions.h>

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

QT_BEGIN_NAMESPACE

namespace QQmlJS {

class SourceLocation
{
public:
    explicit SourceLocation(quint32 offset = 0, quint32 length = 0, quint32 line = 0, quint32 column = 0)
        : offset(offset), length(length),
          startLine(line), startColumn(column)
    { }

    bool isValid() const { return *this != SourceLocation(); }

    quint32 begin() const { return offset; }
    quint32 end() const { return offset + length; }

    // Returns a zero length location at the start of the current one.
    SourceLocation startZeroLengthLocation() const
    {
        return SourceLocation(offset, 0, startLine, startColumn);
    }
    // Returns a zero length location at the end of the current one.
    SourceLocation endZeroLengthLocation(QStringView text) const
    {
        quint32 i = offset;
        quint32 endLine = startLine;
        quint32 endColumn = startColumn;
        while (i < end()) {
            QChar c = text.at(i);
            switch (c.unicode()) {
            case '\n':
                if (i + 1 < end() && text.at(i + 1) == QLatin1Char('\r'))
                    ++i;
                Q_FALLTHROUGH();
            case '\r':
                ++endLine;
                endColumn = 1;
                break;
            default:
                ++endColumn;
            }
            ++i;
        }
        return SourceLocation(offset + length, 0, endLine, endColumn);
    }

// attributes
    // ### encode
    quint32 offset;
    quint32 length;
    quint32 startLine;
    quint32 startColumn;

    friend size_t qHash(const SourceLocation &location, size_t seed = 0)
    {
        return qHashMulti(seed, location.offset, location.length,
                          location.startLine, location.startColumn);
    }

    friend bool operator==(const SourceLocation &a, const SourceLocation &b)
    {
        return a.offset == b.offset && a.length == b.length
                && a.startLine == b.startLine && a.startColumn == b.startColumn;
    }

    friend bool operator!=(const SourceLocation &a, const SourceLocation &b) { return !(a == b); }

    // Returns a source location starting at the beginning of l1, l2 and ending at the end of them.
    // Ignores invalid source locations.
    friend SourceLocation combine(const SourceLocation &l1, const SourceLocation &l2) {
        quint32 e = qMax(l1.end(), l2.end());
        SourceLocation res;
        if (l1.offset <= l2.offset)
            res = (l1.isValid() ? l1 : l2);
        else
            res = (l2.isValid() ? l2 : l1);
        res.length = e - res.offset;
        return res;
    }
};

} // namespace QQmlJS

QT_END_NAMESPACE

#endif
