/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioServicesAddSystemSoundCompletion.h"

#import "CKTranscriptComposeDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"

@class CKConversation, CKConversationListController, CKTranscriptController, MFMailComposeViewController, NSMutableArray, NSObject<OS_dispatch_group>, UINavigationController, UISplitViewController, UIView, UIViewController;

@interface CKMessagesController : _AudioServicesAddSystemSoundCompletion <UISplitViewControllerDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>
{
    UIViewController *_rightController;
    UINavigationController *_blankNavController;
    UINavigationController *_primaryNavigationController;
    CKConversationListController *_conversationListController;
    CKTranscriptController *_transcriptController;
    UIView *_transcriptDimmingView;
    UISplitViewController *_messagesSplitViewController;
    MFMailComposeViewController *_mailComposeController;
    UIViewController *_mainController;
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    BOOL _ignoreConversationsBecomingStale;
    BOOL _transcriptDimmed;
    NSObject<OS_dispatch_group> *_modalPresentationGroup;
    id _alertViewHandler;
}

- (void)setAlertViewHandler:(id)fp(null);
- (id)alertViewHandler;
- (BOOL)isTranscriptDimmed;
- (id)currentConversation;
- (void)setPrimaryNavigationController:(id)fp8;
- (id)primaryNavigationController;
- (void)setTranscriptController:(id)fp8;
- (void)setConversationListController:(id)fp8;
- (id)conversationListController;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (void)showMailComposeSheetForAddress:(id)fp8;
- (void)setAutosaveIdentifier:(id)fp8;
- (id)autosaveIdentifier;
- (void)autosaveMailComposition;
- (void)showMailComposeSheetForAutosavedMessage;
- (void)_showMailComposeSheet;
- (void)showForwardedMessageParts:(id)fp8;
- (void)showNewMessageCompositionForMessageParts:(id)fp8;
- (void)_conversationLeft:(id)fp8;
- (void)_handleConversationBecameStale:(id)fp8;
- (void)splitViewController:(id)fp8 willShowViewController:(id)fp12 invalidatingBarButtonItem:(id)fp16;
- (void)splitViewController:(id)fp8 willHideViewController:(id)fp12 withBarButtonItem:(id)fp16 forPopoverController:(id)fp20;
- (void)setTranscriptDimmed:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)isShowingDirtyModalView;
- (BOOL)isShowingTranscriptWithUnsentText;
- (BOOL)showUnreadConversationsWithLastConversation:(id)fp8 ignoringMessages:(id)fp12;
- (BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)fp8;
- (void)showConversationList:(BOOL)fp8;
- (BOOL)resumeToConversation:(id)fp8;
- (void)showConversationAndMessageForSearchURL:(id)fp8;
- (void)showConversationAndMessageForChatGUID:(id)fp8 messageGUID:(id)fp12 animate:(BOOL)fp16;
- (void)showConversation:(id)fp8 animate:(BOOL)fp12;
- (void)showConversation:(id)fp8 animate:(BOOL)fp12 forceToTranscript:(BOOL)fp16;
- (id)transcriptController;
- (BOOL)isShowingTranscriptController;
- (BOOL)isShowingConversationListController;
- (void)_updateAlertSuppressionContext;
- (void)__updateAlertSuppressionContext;
- (id)alertSuppressionContexts;
- (BOOL)_isShowingModalTranscript;
- (BOOL)_isShowingFullscreenController;
- (void)_showTranscriptController:(BOOL)fp8;
- (void)_showTranscriptController:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)currentCompositionHasContent;
- (BOOL)isComposingMessage;
- (BOOL)isShowingBlankTranscript;
- (void)transcriptController:(id)fp8 didSelectNewConversation:(id)fp12;
- (BOOL)supportsAttachments;
- (void)transcriptController:(id)fp8 didSendMessageInConversation:(id)fp12;
- (void)transcriptController:(id)fp8 willSendComposition:(id)fp12 inConversation:(id)fp16;
- (void)didCancelComposition:(id)fp8;
- (void)resetNewMessageCompositionRecipients;
- (void)cancelNewMessageComposition;
- (void)hideNewMessageCompositionPanel;
- (void)showNewMessageCompositionPanelAnimated:(BOOL)fp8;
- (void)showNewMessageCompositionPanelWithRecipients:(id)fp8 composition:(id)fp12 animated:(BOOL)fp16;
- (void)_showNewMessageCompositionPanelWithRecipients:(id)fp8 composition:(id)fp12 animated:(BOOL)fp16;
- (void)_popToConversationListAndPerformBlockAnimated:(BOOL)fp8 block:(id)fp(null);
- (void)_presentNewMessageCompositionPanel:(id)fp8 animated:(BOOL)fp12;
- (void)showMessagesForAddress:(id)fp8 animate:(BOOL)fp12;
- (void)setDefaultPNGConfiguration;
- (void)_addConversationToCache:(id)fp8;
- (void)_clearConversationCache;
- (void)_pruneConversationCache;
- (void)_prepareToDumpCachedConversation:(id)fp8;
- (BOOL)_canDumpConversationFromCache:(id)fp8;
- (void)setCurrentConversation:(id)fp8;
- (void)_confirmReadReceiptSettings;
- (void)_updateTranscriptDimmingView;
- (void)navigationController:(id)fp8 didShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)rotatingHeaderView;
- (BOOL)becomeFirstResponder;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotate;
- (void)viewDidUnload;
- (void)loadView;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)fp8 animating:(BOOL)fp12;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)performResumeDeferredSetup;
- (void)dealloc;
- (id)init;

@end
