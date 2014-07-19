/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioServicesAddSystemSoundCompletion.h"

#import "CNFRegWizardControllerDelegate-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class BKSProcessAssertion, CKMessagesController, CNFRegWizardController, NSArray, NSString, NSURL, TLAlert, UIWindow;

@interface SMSApplication : _AudioServicesAddSystemSoundCompletion <CNFRegWizardControllerDelegate, IMSystemMonitorListener, UIApplicationDelegate>
{
    BOOL _waitToSendFinishLaunching;
    BOOL _isLocked;
    BOOL _isSuspended;
    BOOL _hasEmail;
    UIWindow *_window;
    CKMessagesController *_messagesController;
    int _delaySuspendCount;
    unsigned int _backgroundTask;
    CNFRegWizardController *_madridRegistrationController;
    NSString *_defaultPng;
    int _suspendTimeStatusBarStyle;
    NSArray *_suspendUnreadMessages;
    NSURL *_deferredLoadURL;
    BKSProcessAssertion *_backgroundAssertion;
    TLAlert *_alert;
}

- (void)setMessagesController:(id)fp8;
- (id)messagesController;
- (void)setDeferredLoadURL:(id)fp8;
- (id)deferredLoadURL;
- (void)_handleDaemonDisconnected:(id)fp8;
- (void)_handleDaemonConnected:(id)fp8;
- (void)_handleAccountsChanged:(id)fp8;
- (BOOL)_shouldShowMadridRegistrationView;
- (void)firstRunControllerDidFinish:(id)fp8 finished:(BOOL)fp12;
- (void)_updateMadridRegistrationViewAnimated:(BOOL)fp8;
- (void)_destroyMadridRegistrationView;
- (void)_createMadridRegistrationViewIfNecessary;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)_handleTypingIndicatorChanged:(id)fp8;
- (void)_handleUnreadCountChanged:(id)fp8;
- (void)_updateDefaultPNGSuspended;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (BOOL)_isShowingNewComposition;
- (void)applicationDidEndResumeAnimation;
- (void)_scheduleDeferredSetup;
- (void)significantTimeChange;
- (BOOL)applicationSuspend:(struct __GSEvent *)fp8 settings:(id)fp12;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)applicationDidBecomeActive:(id)fp8;
- (void)applicationDidResumeFromUnderLock;
- (void)_prepareForResume:(BOOL)fp8;
- (void)_prepareForSuspend;
- (BOOL)openURL:(id)fp8;
- (void)reportAppLaunchFinished;
- (void)setWaitToSendFinishLaunching:(BOOL)fp8;
- (void)applicationOpenURL:(id)fp8;
- (BOOL)isLocked;
- (BOOL)isHandlingURL;
- (void)_storeState;
- (BOOL)_restoreState:(out id *)fp(null);
- (BOOL)_restoreState;
- (void)handleURL:(id)fp8;
- (void)_activateSiriForConversation:(id)fp8;
- (void)_loadURLMessageGUID:(id)fp8;
- (void)_receivedMessage:(id)fp8;
- (void)_resetIdleTimer;
- (void)_playMessageReceivedForMessage:(id)fp8;
- (void)stopPlayingLastAlertTone;
- (void)dealloc;
- (BOOL)application:(id)fp8 didFinishLaunchingWithOptions:(id)fp12;
- (id)init;
- (id)defaultPng;
- (void)setDefaultPng:(id)fp8;
- (void)_clearFailureBadge;
- (void)_mediaDidFinishSaving;
- (void)_mediaDidStartSaving;
- (void)didChangeOrientation:(id)fp8;
- (void)startScrollConversationsTest:(id)fp8;
- (void)startRotationTest:(id)fp8;
- (void)startScrollTranscriptTest:(id)fp8;
- (void)startShowNewComposeTest:(id)fp8;
- (void)startShowMessagesTest:(id)fp8;
- (void)showNextMessage;
- (void)didShowTranscriptList;
- (void)didShowNewCompose;
- (void)didShowAMessage;
- (void)scrollTranscript;
- (void)showKeyboard;
- (void)showTranscriptListNotAnimated;
- (void)showTranscriptList;
- (void)failedTest:(id)fp8;
- (void)finishedTest:(id)fp8 extraResults:(id)fp12;
- (BOOL)runTest:(id)fp8 options:(id)fp12;

@end
