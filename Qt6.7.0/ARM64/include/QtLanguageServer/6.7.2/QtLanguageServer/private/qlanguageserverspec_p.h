// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

// this file was generated by the generate.ts script

#ifndef QLANGUAGESERVERSPEC_P_H
#define QLANGUAGESERVERSPEC_P_H

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

#include <QtLanguageServer/qtlanguageserverglobal.h>
#include <QtLanguageServer/private/qlanguageserverspectypes_p.h>

QT_BEGIN_NAMESPACE

namespace QLspSpecification {
namespace ClientCapabilitiesInfo {
constexpr auto GeneralRegularExpressions = "general.regularExpressions";
using GeneralRegularExpressionsType = RegularExpressionsClientCapabilities;
constexpr auto WorkspaceWorkspaceEdit = "workspace.workspaceEdit";
using WorkspaceWorkspaceEditType = WorkspaceEditClientCapabilities;
constexpr auto WindowShowMessage = "window.showMessage";
using WindowShowMessageType = ShowMessageRequestClientCapabilities;
constexpr auto WindowShowDocument = "window.showDocument";
using WindowShowDocumentType = ShowDocumentClientCapabilities;
constexpr auto WorkspaceWorkspaceFolders = "workspace.workspaceFolders";
using WorkspaceWorkspaceFoldersType = bool;
constexpr auto WorkspaceDidChangeConfiguration = "workspace.didChangeConfiguration";
using WorkspaceDidChangeConfigurationType = DidChangeConfigurationClientCapabilities;
constexpr auto WorkspaceConfiguration = "workspace.configuration";
using WorkspaceConfigurationType = bool;
constexpr auto WorkspaceDidChangeWatchedFiles = "workspace.didChangeWatchedFiles";
using WorkspaceDidChangeWatchedFilesType = DidChangeWatchedFilesClientCapabilities;
constexpr auto WorkspaceSymbol = "workspace.symbol";
using WorkspaceSymbolType = WorkspaceSymbolClientCapabilities;
constexpr auto WorkspaceExecuteCommand = "workspace.executeCommand";
using WorkspaceExecuteCommandType = ExecuteCommandClientCapabilities;
constexpr auto WorkspaceApplyEdit = "workspace.applyEdit";
using WorkspaceApplyEditType = bool;
constexpr auto WorkspaceFileOperationsWillCreate = "workspace.fileOperations.willCreate";
using WorkspaceFileOperationsWillCreateType = bool;
constexpr auto WorkspaceFileOperationsDidCreate = "workspace.fileOperations.didCreate";
using WorkspaceFileOperationsDidCreateType = bool;
constexpr auto WorkspaceFileOperationsWillRename = "workspace.fileOperations.willRename";
using WorkspaceFileOperationsWillRenameType = bool;
constexpr auto WorkspaceFileOperationsDidRename = "workspace.fileOperations.didRename";
using WorkspaceFileOperationsDidRenameType = bool;
constexpr auto WorkspaceFileOperationsWillDelete = "workspace.fileOperations.willDelete";
using WorkspaceFileOperationsWillDeleteType = bool;
constexpr auto WorkspaceFileOperationsDidDelete = "workspace.fileOperations.didDelete";
using WorkspaceFileOperationsDidDeleteType = bool;
constexpr auto TextDocumentSynchronizationDynamicRegistration =
        "textDocument.synchronization.dynamicRegistration";
using TextDocumentSynchronizationDynamicRegistrationType = bool;
constexpr auto TextDocumentSynchronizationWillSave = "textDocument.synchronization.willSave";
using TextDocumentSynchronizationWillSaveType = bool;
constexpr auto TextDocumentSynchronizationWillSaveWaitUntil =
        "textDocument.synchronization.willSaveWaitUntil";
using TextDocumentSynchronizationWillSaveWaitUntilType = bool;
constexpr auto TextDocumentSynchronizationDidSave = "textDocument.synchronization.didSave";
using TextDocumentSynchronizationDidSaveType = bool;
constexpr auto TextDocumentPublishDiagnostics = "textDocument.publishDiagnostics";
using TextDocumentPublishDiagnosticsType = PublishDiagnosticsClientCapabilities;
constexpr auto TextDocumentCompletion = "textDocument.completion";
using TextDocumentCompletionType = CompletionClientCapabilities;
constexpr auto TextDocumentHover = "textDocument.hover";
using TextDocumentHoverType = HoverClientCapabilities;
constexpr auto TextDocumentSignatureHelp = "textDocument.signatureHelp";
using TextDocumentSignatureHelpType = SignatureHelpClientCapabilities;
constexpr auto TextDocumentDeclaration = "textDocument.declaration";
using TextDocumentDeclarationType = DeclarationClientCapabilities;
constexpr auto TextDocumentDefinition = "textDocument.definition";
using TextDocumentDefinitionType = DefinitionClientCapabilities;
constexpr auto TextDocumentTypeDefinition = "textDocument.typeDefinition";
using TextDocumentTypeDefinitionType = TypeDefinitionClientCapabilities;
constexpr auto TextDocumentImplementation = "textDocument.implementation";
using TextDocumentImplementationType = ImplementationClientCapabilities;
constexpr auto TextDocumentReferences = "textDocument.references";
using TextDocumentReferencesType = ReferenceClientCapabilities;
constexpr auto TextDocumentDocumentHighlight = "textDocument.documentHighlight";
using TextDocumentDocumentHighlightType = DocumentHighlightClientCapabilities;
constexpr auto TextDocumentDocumentSymbol = "textDocument.documentSymbol";
using TextDocumentDocumentSymbolType = DocumentSymbolClientCapabilities;
constexpr auto TextDocumentCodeAction = "textDocument.codeAction";
using TextDocumentCodeActionType = CodeActionClientCapabilities;
constexpr auto TextDocumentCodeActionResolveSupport = "textDocument.codeAction.resolveSupport";
using TextDocumentCodeActionResolveSupportType = QJsonObject;
constexpr auto TextDocumentCodeLens = "textDocument.codeLens";
using TextDocumentCodeLensType = CodeLensClientCapabilities;
constexpr auto WorkspaceCodeLens = "workspace.codeLens";
using WorkspaceCodeLensType = CodeLensWorkspaceClientCapabilities;
constexpr auto TextDocumentDocumentLink = "textDocument.documentLink";
using TextDocumentDocumentLinkType = DocumentLinkClientCapabilities;
constexpr auto TextDocumentColorProvider = "textDocument.colorProvider";
using TextDocumentColorProviderType = DocumentColorClientCapabilities;
constexpr auto TextDocumentFormatting = "textDocument.formatting";
using TextDocumentFormattingType = DocumentFormattingClientCapabilities;
constexpr auto TextDocumentRangeFormatting = "textDocument.rangeFormatting";
using TextDocumentRangeFormattingType = DocumentRangeFormattingClientCapabilities;
constexpr auto TextDocumentOnTypeFormatting = "textDocument.onTypeFormatting";
using TextDocumentOnTypeFormattingType = DocumentOnTypeFormattingClientCapabilities;
constexpr auto TextDocumentRename = "textDocument.rename";
using TextDocumentRenameType = RenameClientCapabilities;
constexpr auto TextDocumentFoldingRange = "textDocument.foldingRange";
using TextDocumentFoldingRangeType = FoldingRangeClientCapabilities;
constexpr auto TextDocumentSelectionRange = "textDocument.selectionRange";
using TextDocumentSelectionRangeType = SelectionRangeClientCapabilities;
constexpr auto TextDocumentCallHierarchy = "textDocument.callHierarchy";
using TextDocumentCallHierarchyType = CallHierarchyClientCapabilities;
constexpr auto TextDocumentSemanticTokens = "textDocument.semanticTokens";
using TextDocumentSemanticTokensType = SemanticTokensClientCapabilities;
constexpr auto WorkspaceSemanticTokens = "workspace.semanticTokens";
using WorkspaceSemanticTokensType = SemanticTokensWorkspaceClientCapabilities;
}

namespace ServerCapabilitiesInfo {
constexpr auto WorkspaceWorkspaceFolders = "workspace.workspaceFolders";
using WorkspaceWorkspaceFoldersType = WorkspaceFoldersServerCapabilities;
constexpr auto WorkspaceSymbolProvider = "workspaceSymbolProvider";
using WorkspaceSymbolProviderType = std::variant<bool, WorkspaceSymbolOptions>;
constexpr auto ExecuteCommandProvider = "executeCommandProvider";
using ExecuteCommandProviderType = ExecuteCommandOptions;
constexpr auto WorkspaceFileOperationsWillCreate = "workspace.fileOperations.willCreate";
using WorkspaceFileOperationsWillCreateType = FileOperationRegistrationOptions;
constexpr auto WorkspaceFileOperationsDidCreate = "workspace.fileOperations.didCreate";
using WorkspaceFileOperationsDidCreateType = FileOperationRegistrationOptions;
constexpr auto WorkspaceFileOperationsWillRename = "workspace.fileOperations.willRename";
using WorkspaceFileOperationsWillRenameType = FileOperationRegistrationOptions;
constexpr auto WorkspaceFileOperationsDidRename = "workspace.fileOperations.didRename";
using WorkspaceFileOperationsDidRenameType = FileOperationRegistrationOptions;
constexpr auto WorkspaceFileOperationsWillDelete = "workspace.fileOperations.willDelete";
using WorkspaceFileOperationsWillDeleteType = FileOperationRegistrationOptions;
constexpr auto WorkspaceFileOperationsDidDelete = "workspace.fileOperations.didDelete";
using WorkspaceFileOperationsDidDeleteType = FileOperationRegistrationOptions;
constexpr auto TextDocumentSync = "textDocumentSync";
using TextDocumentSyncType = std::variant<TextDocumentSyncKind, TextDocumentSyncOptions>;
constexpr auto TextDocumentSyncWillSave = "textDocumentSync.willSave";
using TextDocumentSyncWillSaveType = bool;
constexpr auto TextDocumentSyncWillSaveWaitUntil = "textDocumentSync.willSaveWaitUntil";
using TextDocumentSyncWillSaveWaitUntilType = bool;
constexpr auto TextDocumentSyncSave = "textDocumentSync.save";
using TextDocumentSyncSaveType = std::variant<bool, SaveOptions>;
constexpr auto CompletionProvider = "completionProvider";
using CompletionProviderType = CompletionOptions;
constexpr auto HoverProvider = "hoverProvider";
using HoverProviderType = std::variant<bool, HoverOptions>;
constexpr auto SignatureHelpProvider = "signatureHelpProvider";
using SignatureHelpProviderType = SignatureHelpOptions;
constexpr auto DeclarationProvider = "declarationProvider";
using DeclarationProviderType =
        std::variant<bool, DeclarationOptions, DeclarationRegistrationOptions>;
constexpr auto DefinitionProvider = "definitionProvider";
using DefinitionProviderType = std::variant<bool, DefinitionOptions>;
constexpr auto TypeDefinitionProvider = "typeDefinitionProvider";
using TypeDefinitionProviderType =
        std::variant<bool, TypeDefinitionOptions, TypeDefinitionRegistrationOptions>;
constexpr auto ImplementationProvider = "implementationProvider";
using ImplementationProviderType =
        std::variant<bool, ImplementationOptions, ImplementationRegistrationOptions>;
constexpr auto ReferencesProvider = "referencesProvider";
using ReferencesProviderType = std::variant<bool, ReferenceOptions>;
constexpr auto DocumentHighlightProvider = "documentHighlightProvider";
using DocumentHighlightProviderType = std::variant<bool, DocumentHighlightOptions>;
constexpr auto DocumentSymbolProvider = "documentSymbolProvider";
using DocumentSymbolProviderType = std::variant<bool, DocumentSymbolOptions>;
constexpr auto CodeActionProvider = "codeActionProvider";
using CodeActionProviderType = std::variant<bool, CodeActionOptions>;
constexpr auto CodeLensProvider = "codeLensProvider";
using CodeLensProviderType = CodeLensOptions;
constexpr auto DocumentLinkProvider = "documentLinkProvider";
using DocumentLinkProviderType = DocumentLinkOptions;
constexpr auto ColorProvider = "colorProvider";
using ColorProviderType =
        std::variant<bool, DocumentColorOptions, DocumentColorRegistrationOptions>;
constexpr auto DocumentFormattingProvider = "documentFormattingProvider";
using DocumentFormattingProviderType = std::variant<bool, DocumentFormattingOptions>;
constexpr auto DocumentRangeFormattingProvider = "documentRangeFormattingProvider";
using DocumentRangeFormattingProviderType = std::variant<bool, DocumentRangeFormattingOptions>;
constexpr auto DocumentOnTypeFormattingProvider = "documentOnTypeFormattingProvider";
using DocumentOnTypeFormattingProviderType = DocumentOnTypeFormattingOptions;
constexpr auto RenameProvider = "renameProvider";
using RenameProviderType = std::variant<bool, RenameOptions>;
constexpr auto FoldingRangeProvider = "foldingRangeProvider";
using FoldingRangeProviderType =
        std::variant<bool, FoldingRangeOptions, FoldingRangeRegistrationOptions>;
constexpr auto SelectionRangeProvider = "selectionRangeProvider";
using SelectionRangeProviderType =
        std::variant<bool, SelectionRangeOptions, SelectionRangeRegistrationOptions>;
constexpr auto CallHierarchyProvider = "callHierarchyProvider";
using CallHierarchyProviderType =
        std::variant<bool, CallHierarchyOptions, CallHierarchyRegistrationOptions>;
constexpr auto SemanticTokensProvider = "semanticTokensProvider";
using SemanticTokensProviderType =
        std::variant<SemanticTokensOptions, SemanticTokensRegistrationOptions>;
constexpr auto LinkedEditingRangeProvider = "linkedEditingRangeProvider";
using LinkedEditingRangeProviderType =
        std::variant<bool, LinkedEditingRangeOptions, LinkedEditingRangeRegistrationOptions>;
constexpr auto MonikerProvider = "monikerProvider";
using MonikerProviderType = std::variant<bool, MonikerOptions, MonikerRegistrationOptions>;
}

namespace Requests {
constexpr auto InitializeMethod = "initialize";
using InitializeParamsType = InitializeParams;
constexpr auto ShutdownMethod = "shutdown";
using ShutdownParamsType = std::nullptr_t;
constexpr auto ShowMessageRequestMethod = "window/showMessageRequest";
using ShowMessageRequestParamsType = ShowMessageRequestParams;
constexpr auto ShowDocumentMethod = "window/showDocument";
using ShowDocumentParamsType = ShowDocumentParams;
constexpr auto WorkDoneProgressCreateMethod = "window/workDoneProgress/create";
using WorkDoneProgressCreateParamsType = WorkDoneProgressCreateParams;
constexpr auto RegistrationMethod = "client/registerCapability";
using RegistrationParamsType = RegistrationParams;
constexpr auto UnregistrationMethod = "client/unregisterCapability";
using UnregistrationParamsType = UnregistrationParams;
constexpr auto WorkspaceWorkspaceFoldersMethod = "workspace/workspaceFolders";
using WorkspaceWorkspaceFoldersParamsType = std::nullptr_t;
constexpr auto ConfigurationMethod = "workspace/configuration";
using ConfigurationParamsType = ConfigurationParams;
constexpr auto WorkspaceSymbolMethod = "workspace/symbol";
using WorkspaceSymbolParamsType = WorkspaceSymbolParams;
constexpr auto ExecuteCommandMethod = "workspace/executeCommand";
using ExecuteCommandParamsType = ExecuteCommandParams;
constexpr auto ApplyWorkspaceEditMethod = "workspace/applyEdit";
using ApplyWorkspaceEditParamsType = ApplyWorkspaceEditParams;
constexpr auto CreateFilesMethod = "workspace/willCreateFiles";
using CreateFilesParamsType = CreateFilesParams;
constexpr auto RenameFilesMethod = "workspace/willRenameFiles";
using RenameFilesParamsType = RenameFilesParams;
constexpr auto DeleteFilesMethod = "workspace/willDeleteFiles";
using DeleteFilesParamsType = DeleteFilesParams;
constexpr auto WillSaveTextDocumentMethod = "textDocument/willSaveWaitUntil";
using WillSaveTextDocumentParamsType = WillSaveTextDocumentParams;
constexpr auto CompletionMethod = "textDocument/completion";
using CompletionParamsType = CompletionParams;
constexpr auto CompletionItemResolveMethod = "completionItem/resolve";
using CompletionItemResolveParamsType = CompletionItem;
constexpr auto HoverMethod = "textDocument/hover";
using HoverParamsType = HoverParams;
constexpr auto SignatureHelpMethod = "textDocument/signatureHelp";
using SignatureHelpParamsType = SignatureHelpParams;
constexpr auto DeclarationMethod = "textDocument/declaration";
using DeclarationParamsType = DeclarationParams;
constexpr auto DefinitionMethod = "textDocument/definition";
using DefinitionParamsType = DefinitionParams;
constexpr auto TypeDefinitionMethod = "textDocument/typeDefinition";
using TypeDefinitionParamsType = TypeDefinitionParams;
constexpr auto ImplementationMethod = "textDocument/implementation";
using ImplementationParamsType = ImplementationParams;
constexpr auto ReferenceMethod = "textDocument/references";
using ReferenceParamsType = ReferenceParams;
constexpr auto DocumentHighlightMethod = "textDocument/documentHighlight";
using DocumentHighlightParamsType = DocumentHighlightParams;
constexpr auto DocumentSymbolMethod = "textDocument/documentSymbol";
using DocumentSymbolParamsType = DocumentSymbolParams;
constexpr auto CodeActionMethod = "textDocument/codeAction";
using CodeActionParamsType = CodeActionParams;
constexpr auto CodeActionResolveMethod = "codeAction/resolve";
using CodeActionResolveParamsType = CodeAction;
constexpr auto CodeLensMethod = "textDocument/codeLens";
using CodeLensParamsType = CodeLensParams;
constexpr auto CodeLensResolveMethod = "codeLens/resolve";
using CodeLensResolveParamsType = CodeLens;
constexpr auto CodeLensRefreshMethod = "workspace/codeLens/refresh";
using CodeLensRefreshParamsType = std::nullptr_t;
constexpr auto DocumentLinkMethod = "textDocument/documentLink";
using DocumentLinkParamsType = DocumentLinkParams;
constexpr auto DocumentLinkResolveMethod = "documentLink/resolve";
using DocumentLinkResolveParamsType = DocumentLink;
constexpr auto DocumentColorMethod = "textDocument/documentColor";
using DocumentColorParamsType = DocumentColorParams;
constexpr auto ColorPresentationMethod = "textDocument/colorPresentation";
using ColorPresentationParamsType = ColorPresentationParams;
constexpr auto DocumentFormattingMethod = "textDocument/formatting";
using DocumentFormattingParamsType = DocumentFormattingParams;
constexpr auto DocumentRangeFormattingMethod = "textDocument/rangeFormatting";
using DocumentRangeFormattingParamsType = DocumentRangeFormattingParams;
constexpr auto DocumentOnTypeFormattingMethod = "textDocument/onTypeFormatting";
using DocumentOnTypeFormattingParamsType = DocumentOnTypeFormattingParams;
constexpr auto RenameMethod = "textDocument/rename";
using RenameParamsType = RenameParams;
constexpr auto PrepareRenameMethod = "textDocument/prepareRename";
using PrepareRenameParamsType = PrepareRenameParams;
constexpr auto FoldingRangeMethod = "textDocument/foldingRange";
using FoldingRangeParamsType = FoldingRangeParams;
constexpr auto SelectionRangeMethod = "textDocument/selectionRange";
using SelectionRangeParamsType = SelectionRangeParams;
constexpr auto CallHierarchyPrepareMethod = "textDocument/prepareCallHierarchy";
using CallHierarchyPrepareParamsType = CallHierarchyPrepareParams;
constexpr auto CallHierarchyIncomingCallsMethod = "callHierarchy/incomingCalls";
using CallHierarchyIncomingCallsParamsType = CallHierarchyIncomingCallsParams;
constexpr auto CallHierarchyOutgoingCallsMethod = "callHierarchy/outgoingCalls";
using CallHierarchyOutgoingCallsParamsType = CallHierarchyOutgoingCallsParams;
constexpr auto SemanticTokensMethod = "textDocument/semanticTokens/full";
using SemanticTokensParamsType = SemanticTokensParams;
constexpr auto SemanticTokensDeltaMethod = "textDocument/semanticTokens/full/delta";
using SemanticTokensDeltaParamsType = SemanticTokensDeltaParams;
constexpr auto SemanticTokensRangeMethod = "textDocument/semanticTokens/range";
using SemanticTokensRangeParamsType = SemanticTokensRangeParams;
constexpr auto RequestingARefreshOfAllSemanticTokensMethod = "workspace/semanticTokens/refresh";
using RequestingARefreshOfAllSemanticTokensParamsType = std::nullptr_t;
constexpr auto LinkedEditingRangeMethod = "textDocument/linkedEditingRange";
using LinkedEditingRangeParamsType = LinkedEditingRangeParams;
constexpr auto MonikerMethod = "textDocument/moniker";
using MonikerParamsType = MonikerParams;
}

namespace Responses {
using InitializeResultType = InitializeResult;
using InitializeResponseType = LSPResponse<InitializeResultType>;
using ShutdownResultType = std::nullptr_t;
using ShutdownResponseType = LSPResponse<ShutdownResultType>;
using ShowMessageRequestResultType = std::variant<MessageActionItem, std::nullptr_t>;
using ShowMessageRequestResponseType = LSPResponse<ShowMessageRequestResultType>;
using ShowDocumentResultType = ShowDocumentResult;
using ShowDocumentResponseType = LSPResponse<ShowDocumentResultType>;
using WorkDoneProgressCreateResultType = std::nullptr_t;
using WorkDoneProgressCreateResponseType = LSPResponse<WorkDoneProgressCreateResultType>;
using RegistrationResultType = std::nullptr_t;
using RegistrationResponseType = LSPResponse<RegistrationResultType>;
using UnregistrationResultType = std::nullptr_t;
using UnregistrationResponseType = LSPResponse<UnregistrationResultType>;
using WorkspaceWorkspaceFoldersResultType = std::variant<QList<WorkspaceFolder>, std::nullptr_t>;
using WorkspaceWorkspaceFoldersResponseType = LSPResponse<WorkspaceWorkspaceFoldersResultType>;
using ConfigurationResultType = QList<QJsonValue>;
using ConfigurationResponseType = LSPResponse<ConfigurationResultType>;
using WorkspaceSymbolResultType = std::variant<QList<SymbolInformation>, std::nullptr_t>;
using WorkspaceSymbolPartialResultType = QList<SymbolInformation>;
using WorkspaceSymbolResponseType =
        LSPPartialResponse<WorkspaceSymbolResultType, WorkspaceSymbolPartialResultType>;
using ExecuteCommandResultType = std::variant<QJsonValue, std::nullptr_t>;
using ExecuteCommandResponseType = LSPResponse<ExecuteCommandResultType>;
using ApplyWorkspaceEditResultType = ApplyWorkspaceEditResponse;
using ApplyWorkspaceEditResponseType = LSPResponse<ApplyWorkspaceEditResultType>;
using CreateFilesResultType = std::variant<WorkspaceEdit, std::nullptr_t>;
using CreateFilesResponseType = LSPResponse<CreateFilesResultType>;
using RenameFilesResultType = std::variant<WorkspaceEdit, std::nullptr_t>;
using RenameFilesResponseType = LSPResponse<RenameFilesResultType>;
using DeleteFilesResultType = std::variant<WorkspaceEdit, std::nullptr_t>;
using DeleteFilesResponseType = LSPResponse<DeleteFilesResultType>;
using WillSaveTextDocumentResultType = std::variant<QList<TextEdit>, std::nullptr_t>;
using WillSaveTextDocumentResponseType = LSPResponse<WillSaveTextDocumentResultType>;
using CompletionResultType = std::variant<QList<CompletionItem>, CompletionList, std::nullptr_t>;
using CompletionPartialResultType = std::variant<CompletionList, QList<CompletionItem>>;
using CompletionResponseType =
        LSPPartialResponse<CompletionResultType, CompletionPartialResultType>;
using CompletionItemResolveResultType = CompletionItem;
using CompletionItemResolveResponseType = LSPResponse<CompletionItemResolveResultType>;
using HoverResultType = std::variant<Hover, std::nullptr_t>;
using HoverResponseType = LSPResponse<HoverResultType>;
using SignatureHelpResultType = std::variant<SignatureHelp, std::nullptr_t>;
using SignatureHelpResponseType = LSPResponse<SignatureHelpResultType>;
using DeclarationResultType =
        std::variant<Location, QList<Location>, QList<LocationLink>, std::nullptr_t>;
using DeclarationPartialResultType = std::variant<QList<Location>, QList<LocationLink>>;
using DeclarationResponseType =
        LSPPartialResponse<DeclarationResultType, DeclarationPartialResultType>;
using DefinitionResultType =
        std::variant<Location, QList<Location>, QList<LocationLink>, std::nullptr_t>;
using DefinitionPartialResultType = std::variant<QList<Location>, QList<LocationLink>>;
using DefinitionResponseType =
        LSPPartialResponse<DefinitionResultType, DefinitionPartialResultType>;
using TypeDefinitionResultType =
        std::variant<Location, QList<Location>, QList<LocationLink>, std::nullptr_t>;
using TypeDefinitionPartialResultType = std::variant<QList<Location>, QList<LocationLink>>;
using TypeDefinitionResponseType =
        LSPPartialResponse<TypeDefinitionResultType, TypeDefinitionPartialResultType>;
using ImplementationResultType =
        std::variant<Location, QList<Location>, QList<LocationLink>, std::nullptr_t>;
using ImplementationPartialResultType = std::variant<QList<Location>, QList<LocationLink>>;
using ImplementationResponseType =
        LSPPartialResponse<ImplementationResultType, ImplementationPartialResultType>;
using ReferenceResultType = std::variant<QList<Location>, std::nullptr_t>;
using ReferencePartialResultType = QList<Location>;
using ReferenceResponseType = LSPPartialResponse<ReferenceResultType, ReferencePartialResultType>;
using DocumentHighlightResultType = std::variant<QList<DocumentHighlight>, std::nullptr_t>;
using DocumentHighlightPartialResultType = QList<DocumentHighlight>;
using DocumentHighlightResponseType =
        LSPPartialResponse<DocumentHighlightResultType, DocumentHighlightPartialResultType>;
using DocumentSymbolResultType =
        std::variant<QList<DocumentSymbol>, QList<SymbolInformation>, std::nullptr_t>;
using DocumentSymbolPartialResultType =
        std::variant<QList<DocumentSymbol>, QList<SymbolInformation>>;
using DocumentSymbolResponseType =
        LSPPartialResponse<DocumentSymbolResultType, DocumentSymbolPartialResultType>;
using CodeActionResultType = std::variant<QList<std::variant<Command, CodeAction>>, std::nullptr_t>;
using CodeActionPartialResultType = QList<std::variant<Command, CodeAction>>;
using CodeActionResponseType =
        LSPPartialResponse<CodeActionResultType, CodeActionPartialResultType>;
using CodeActionResolveResultType = CodeAction;
using CodeActionResolveResponseType = LSPResponse<CodeActionResolveResultType>;
using CodeLensResultType = std::variant<QList<CodeLens>, std::nullptr_t>;
using CodeLensPartialResultType = QList<CodeLens>;
using CodeLensResponseType = LSPPartialResponse<CodeLensResultType, CodeLensPartialResultType>;
using CodeLensResolveResultType = CodeLens;
using CodeLensResolveResponseType = LSPResponse<CodeLensResolveResultType>;
using CodeLensRefreshResultType = std::nullptr_t;
using CodeLensRefreshResponseType = LSPResponse<CodeLensRefreshResultType>;
using DocumentLinkResultType = std::variant<QList<DocumentLink>, std::nullptr_t>;
using DocumentLinkPartialResultType = QList<DocumentLink>;
using DocumentLinkResponseType =
        LSPPartialResponse<DocumentLinkResultType, DocumentLinkPartialResultType>;
using DocumentLinkResolveResultType = DocumentLink;
using DocumentLinkResolveResponseType = LSPResponse<DocumentLinkResolveResultType>;
using DocumentColorResultType = QList<ColorInformation>;
using DocumentColorPartialResultType = QList<ColorInformation>;
using DocumentColorResponseType =
        LSPPartialResponse<DocumentColorResultType, DocumentColorPartialResultType>;
using ColorPresentationResultType = QList<ColorPresentation>;
using ColorPresentationPartialResultType = QList<ColorPresentation>;
using ColorPresentationResponseType =
        LSPPartialResponse<ColorPresentationResultType, ColorPresentationPartialResultType>;
using DocumentFormattingResultType = std::variant<QList<TextEdit>, std::nullptr_t>;
using DocumentFormattingResponseType = LSPResponse<DocumentFormattingResultType>;
using DocumentRangeFormattingResultType = std::variant<QList<TextEdit>, std::nullptr_t>;
using DocumentRangeFormattingResponseType = LSPResponse<DocumentRangeFormattingResultType>;
using DocumentOnTypeFormattingResultType = std::variant<QList<TextEdit>, std::nullptr_t>;
using DocumentOnTypeFormattingResponseType = LSPResponse<DocumentOnTypeFormattingResultType>;
using RenameResultType = std::variant<WorkspaceEdit, std::nullptr_t>;
using RenameResponseType = LSPResponse<RenameResultType>;
using PrepareRenameResultType =
        std::variant<Range, RangePlaceHolder, DefaultBehaviorStruct, std::nullptr_t>;
using PrepareRenameResponseType = LSPResponse<PrepareRenameResultType>;
using FoldingRangeResultType = std::variant<QList<FoldingRange>, std::nullptr_t>;
using FoldingRangePartialResultType = QList<FoldingRange>;
using FoldingRangeResponseType =
        LSPPartialResponse<FoldingRangeResultType, FoldingRangePartialResultType>;
using SelectionRangeResultType = std::variant<QList<SelectionRange>, std::nullptr_t>;
using SelectionRangePartialResultType = QList<SelectionRange>;
using SelectionRangeResponseType =
        LSPPartialResponse<SelectionRangeResultType, SelectionRangePartialResultType>;
using CallHierarchyPrepareResultType = std::variant<QList<CallHierarchyItem>, std::nullptr_t>;
using CallHierarchyPrepareResponseType = LSPResponse<CallHierarchyPrepareResultType>;
using CallHierarchyIncomingCallsResultType =
        std::variant<QList<CallHierarchyIncomingCall>, std::nullptr_t>;
using CallHierarchyIncomingCallsPartialResultType = QList<CallHierarchyIncomingCall>;
using CallHierarchyIncomingCallsResponseType =
        LSPPartialResponse<CallHierarchyIncomingCallsResultType,
                           CallHierarchyIncomingCallsPartialResultType>;
using CallHierarchyOutgoingCallsResultType =
        std::variant<QList<CallHierarchyOutgoingCall>, std::nullptr_t>;
using CallHierarchyOutgoingCallsPartialResultType = QList<CallHierarchyOutgoingCall>;
using CallHierarchyOutgoingCallsResponseType =
        LSPPartialResponse<CallHierarchyOutgoingCallsResultType,
                           CallHierarchyOutgoingCallsPartialResultType>;
using SemanticTokensResultType = std::variant<SemanticTokens, std::nullptr_t>;
using SemanticTokensPartialResultType = SemanticTokensPartialResult;
using SemanticTokensResponseType =
        LSPPartialResponse<SemanticTokensResultType, SemanticTokensPartialResultType>;
using SemanticTokensDeltaResultType =
        std::variant<SemanticTokens, SemanticTokensDelta, std::nullptr_t>;
using SemanticTokensDeltaPartialResultType = SemanticTokensDeltaPartialResult;
using SemanticTokensDeltaResponseType =
        LSPPartialResponse<SemanticTokensDeltaResultType, SemanticTokensDeltaPartialResultType>;
using SemanticTokensRangeResultType = std::variant<SemanticTokens, std::nullptr_t>;
using SemanticTokensRangePartialResultType = SemanticTokensPartialResult;
using SemanticTokensRangeResponseType =
        LSPPartialResponse<SemanticTokensRangeResultType, SemanticTokensRangePartialResultType>;
using RequestingARefreshOfAllSemanticTokensResultType = std::nullptr_t;
using RequestingARefreshOfAllSemanticTokensResponseType =
        LSPResponse<RequestingARefreshOfAllSemanticTokensResultType>;
using LinkedEditingRangeResultType = std::variant<LinkedEditingRanges, std::nullptr_t>;
using LinkedEditingRangeResponseType = LSPResponse<LinkedEditingRangeResultType>;
using MonikerResultType = std::variant<QList<Moniker>, std::nullptr_t>;
using MonikerPartialResultType = QList<Moniker>;
using MonikerResponseType = LSPPartialResponse<MonikerResultType, MonikerPartialResultType>;
}

namespace Notifications {
constexpr auto CancelMethod = "$/cancelRequest";
using CancelParamsType = CancelParams;
constexpr auto ProgressMethod = "$/progress";
constexpr auto InitializedMethod = "initialized";
using InitializedParamsType = InitializedParams;
constexpr auto ExitMethod = "exit";
using ExitParamsType = std::nullptr_t;
constexpr auto LogTraceMethod = "$/logTrace";
using LogTraceParamsType = LogTraceParams;
constexpr auto SetTraceMethod = "$/setTrace";
using SetTraceParamsType = SetTraceParams;
constexpr auto ShowMessageMethod = "window/showMessage";
using ShowMessageParamsType = ShowMessageParams;
constexpr auto LogMessageMethod = "window/logMessage";
using LogMessageParamsType = LogMessageParams;
constexpr auto WorkDoneProgressCancelMethod = "window/workDoneProgress/cancel";
using WorkDoneProgressCancelParamsType = WorkDoneProgressCancelParams;
constexpr auto TelemetryEventMethod = "telemetry/event";
using TelemetryEventParamsType = QJsonObject;
constexpr auto DidChangeWorkspaceFoldersMethod = "workspace/didChangeWorkspaceFolders";
using DidChangeWorkspaceFoldersParamsType = DidChangeWorkspaceFoldersParams;
constexpr auto DidChangeConfigurationMethod = "workspace/didChangeConfiguration";
using DidChangeConfigurationParamsType = DidChangeConfigurationParams;
constexpr auto DidChangeWatchedFilesMethod = "workspace/didChangeWatchedFiles";
using DidChangeWatchedFilesParamsType = DidChangeWatchedFilesParams;
constexpr auto CreateFilesMethod = "workspace/didCreateFiles";
using CreateFilesParamsType = CreateFilesParams;
constexpr auto RenameFilesMethod = "workspace/didRenameFiles";
using RenameFilesParamsType = RenameFilesParams;
constexpr auto DeleteFilesMethod = "workspace/didDeleteFiles";
using DeleteFilesParamsType = DeleteFilesParams;
constexpr auto DidOpenTextDocumentMethod = "textDocument/didOpen";
using DidOpenTextDocumentParamsType = DidOpenTextDocumentParams;
constexpr auto DidChangeTextDocumentMethod = "textDocument/didChange";
using DidChangeTextDocumentParamsType = DidChangeTextDocumentParams;
constexpr auto WillSaveTextDocumentMethod = "textDocument/willSave";
using WillSaveTextDocumentParamsType = WillSaveTextDocumentParams;
constexpr auto DidSaveTextDocumentMethod = "textDocument/didSave";
using DidSaveTextDocumentParamsType = DidSaveTextDocumentParams;
constexpr auto DidCloseTextDocumentMethod = "textDocument/didClose";
using DidCloseTextDocumentParamsType = DidCloseTextDocumentParams;
constexpr auto PublishDiagnosticsMethod = "textDocument/publishDiagnostics";
using PublishDiagnosticsParamsType = PublishDiagnosticsParams;
}

using RequestParams = std::variant<
        InitializeParams, std::nullptr_t, ShowMessageRequestParams, ShowDocumentParams,
        WorkDoneProgressCreateParams, RegistrationParams, UnregistrationParams, ConfigurationParams,
        WorkspaceSymbolParams, ExecuteCommandParams, ApplyWorkspaceEditParams, CreateFilesParams,
        RenameFilesParams, DeleteFilesParams, WillSaveTextDocumentParams, CompletionParams,
        CompletionItem, HoverParams, SignatureHelpParams, DeclarationParams, DefinitionParams,
        TypeDefinitionParams, ImplementationParams, ReferenceParams, DocumentHighlightParams,
        DocumentSymbolParams, CodeActionParams, CodeAction, CodeLensParams, CodeLens,
        DocumentLinkParams, DocumentLink, DocumentColorParams, ColorPresentationParams,
        DocumentFormattingParams, DocumentRangeFormattingParams, DocumentOnTypeFormattingParams,
        RenameParams, PrepareRenameParams, FoldingRangeParams, SelectionRangeParams,
        CallHierarchyPrepareParams, CallHierarchyIncomingCallsParams,
        CallHierarchyOutgoingCallsParams, SemanticTokensParams, SemanticTokensDeltaParams,
        SemanticTokensRangeParams, LinkedEditingRangeParams, MonikerParams, QJsonValue>;
using NotificationParams = std::variant<
        CancelParams, InitializedParams, std::nullptr_t, LogTraceParams, SetTraceParams,
        ShowMessageParams, LogMessageParams, WorkDoneProgressCancelParams, QJsonObject,
        DidChangeWorkspaceFoldersParams, DidChangeConfigurationParams, DidChangeWatchedFilesParams,
        CreateFilesParams, RenameFilesParams, DeleteFilesParams, DidOpenTextDocumentParams,
        DidChangeTextDocumentParams, WillSaveTextDocumentParams, DidSaveTextDocumentParams,
        DidCloseTextDocumentParams, PublishDiagnosticsParams, QJsonValue>;

} // namespace QLspSpecification

QT_END_NAMESPACE

#endif // QLANGUAGESERVERSPEC_P_H
