// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QSCXMLEVENT_P_H
#define QSCXMLEVENT_P_H

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

#include <QtScxml/qscxmlevent.h>
#include <QtScxml/private/qscxmlexecutablecontent_p.h>

#ifndef BUILD_QSCXMLC
#include <QtScxml/qscxmlstatemachine.h>
#endif

#include <QtCore/qatomic.h>

QT_BEGIN_NAMESPACE

#ifndef BUILD_QSCXMLC
class QScxmlEventBuilder
{
    QScxmlStateMachine *stateMachine;
    QScxmlExecutableContent::StringId instructionLocation;
    QString event;
    QScxmlExecutableContent::EvaluatorId eventexpr;
    QString contents;
    QScxmlExecutableContent::EvaluatorId contentExpr;
    const QScxmlExecutableContent::Array<QScxmlExecutableContent::ParameterInfo> *params;
    QScxmlEvent::EventType eventType;
    QString id;
    QString idLocation;
    QString target;
    QScxmlExecutableContent::EvaluatorId targetexpr;
    QString type;
    QScxmlExecutableContent::EvaluatorId typeexpr;
    const QScxmlExecutableContent::Array<QScxmlExecutableContent::StringId> *namelist;

    static QAtomicInt idCounter;
    QString generateId() const
    {
        QString id = QString::number(++idCounter);
        id.prepend(QStringLiteral("id-"));
        return id;
    }

    QScxmlEventBuilder()
    { init(); }

    void init() // Because stupid VS2012 can't cope with non-static field initializers.
    {
        stateMachine = nullptr;
        eventexpr = QScxmlExecutableContent::NoEvaluator;
        contentExpr = QScxmlExecutableContent::NoEvaluator;
        params = nullptr;
        eventType = QScxmlEvent::ExternalEvent;
        targetexpr = QScxmlExecutableContent::NoEvaluator;
        typeexpr = QScxmlExecutableContent::NoEvaluator;
        namelist = nullptr;
    }

public:
    QScxmlEventBuilder(QScxmlStateMachine *stateMachine, const QString &eventName, const QScxmlExecutableContent::DoneData *doneData)
    {
        init();
        this->stateMachine = stateMachine;
        Q_ASSERT(doneData);
        instructionLocation = doneData->location;
        event = eventName;
        contents = stateMachine->tableData()->string(doneData->contents);
        contentExpr = doneData->expr;
        params = &doneData->params;
        eventType = QScxmlEvent::InternalEvent;
    }

    QScxmlEventBuilder(QScxmlStateMachine *stateMachine, const QScxmlExecutableContent::Send &send)
    {
        init();
        this->stateMachine = stateMachine;
        instructionLocation = send.instructionLocation;
        event = stateMachine->tableData()->string(send.event);
        eventexpr = send.eventexpr;
        contents = stateMachine->tableData()->string(send.content);
        contentExpr = send.contentexpr;
        params = send.params();
        id = stateMachine->tableData()->string(send.id);
        idLocation = stateMachine->tableData()->string(send.idLocation);
        target = stateMachine->tableData()->string(send.target);
        targetexpr = send.targetexpr;
        type = stateMachine->tableData()->string(send.type);
        typeexpr = send.typeexpr;
        namelist = &send.namelist;
    }

    QScxmlEvent *operator()() { return buildEvent(); }

    QScxmlEvent *buildEvent();

    static QScxmlEvent *errorEvent(QScxmlStateMachine *stateMachine, const QString &name,
                                   const QString &message, const QString &sendid);

    bool evaluate(const QScxmlExecutableContent::ParameterInfo &param,
                  QScxmlStateMachine *stateMachine, QVariantMap &keyValues);

    bool evaluate(
            const QScxmlExecutableContent::Array<QScxmlExecutableContent::ParameterInfo> *params,
            QScxmlStateMachine *stateMachine, QVariantMap &keyValues);

    void submitError(const QString &type, const QString &msg, const QString &sendid = QString());
};
#endif // BUILD_QSCXMLC

class QScxmlEventPrivate
{
public:
    QScxmlEventPrivate()
        : eventType(QScxmlEvent::ExternalEvent)
        , delayInMiliSecs(0)
    {}

    QString name;
    QScxmlEvent::EventType eventType;
    QVariant data; // extra data
    QString sendid; // if set, or id of <send> if failure
    QString origin; // uri to answer by setting the target of send, empty for internal and platform events
    QString originType; // type to answer by setting the type of send, empty for internal and platform events
    QString invokeId; // id of the invocation that triggered the child process if this was invoked
    int delayInMiliSecs;

    static QByteArray debugString(QScxmlEvent *event);
};

QT_END_NAMESPACE

#endif // QSCXMLEVENT_P_H

