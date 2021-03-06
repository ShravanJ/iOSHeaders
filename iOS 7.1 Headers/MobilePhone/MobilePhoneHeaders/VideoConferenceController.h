/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CommunicationDisplayViewController.h"

#import "PhoneBaseViewController-Protocol.h"

@class AudioDeviceController, CNFCallViewController;

@interface VideoConferenceController : CommunicationDisplayViewController <PhoneBaseViewController>
{
    CNFCallViewController *_faceTimeCallViewController;
    AudioDeviceController *_audioDeviceController;
}

+ (id)defaultPNGName;
+ (int)statusBarStyle;
+ (int)viewType;
- (void)_applicationReactivated:(id)fp8;
- (void)_didFinishLocking;
- (void)_ensureFaceTimeCallViewControllerExists;
- (void)_handleInvitation:(id)fp8;
- (id)_lockScreenImageView;
- (void)_restoreInCallUIAndAudioRoute;
- (void)_updateInterfaceSizeAndOrientation;
- (void)animateOutOfCallWaitingAlert;
- (void)animateToCallWaitingAlert;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)cleanUpForIncomingCall;
- (void)cleanUpVideoConference;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)faceTimeCallViewController;
- (void)faceTimeEnded;
- (void)faceTimeEndedWhileSuspending;
- (void)fadeInAnimated:(BOOL)fp8 completionBlock:(id)fp(null);
- (void)fadeOutAnimated:(BOOL)fp8 completionBlock:(id)fp(null);
- (void)handleURL:(id)fp8;
- (id)init;
- (BOOL)isCallWaitingViewVisible;
- (BOOL)isShowingFaceTimeUI;
- (BOOL)isShowingLock;
- (void)loadView;
- (void)prepareForSnapshot;
- (void)prepareForTransitionInFromViewType:(int)fp8 animated:(BOOL)fp12;
- (void)prepareToHandleURL:(id)fp8;
- (void)resetToFullScreenPreview;
- (void)restoreInCallUIAndAudioRoute;
- (void)setIsSendingVideo:(BOOL)fp8;
- (BOOL)shouldDisableEdgeClip;
- (BOOL)shouldHideStatusBar;
- (BOOL)shouldSnapshot;
- (void)slideBarsInAnimated:(BOOL)fp8;
- (void)startPreview;
- (void)stopPreview;
- (void)transitionFromLockScreenAnimated:(BOOL)fp8;
- (void)transitionInFromViewType:(int)fp8 animated:(BOOL)fp12 completionBlock:(id)fp(null);
- (void)transitionToLockScreenAnimated:(BOOL)fp8;
- (void)unloadViewForced:(BOOL)fp8;
- (void)updateViewControllerForOrientation:(int)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;

@end

