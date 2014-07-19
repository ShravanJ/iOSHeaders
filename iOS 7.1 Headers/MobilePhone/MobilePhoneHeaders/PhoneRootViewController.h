/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

#import "CNFRegWizardControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class CNFRegWizardController, InCallController, PHEmergencyDialerViewController, PhoneContentView, PhoneTabBarController, VideoConferenceController, _UIBackdropView;

@interface PhoneRootViewController : _ABAddressBookBeginExclusiveRead <CNFRegWizardControllerDelegate, UITabBarControllerDelegate>
{
    int _currentViewType;
    PhoneContentView *_contentView;
    PhoneTabBarController *_tabBarViewController;
    CNFRegWizardController *_faceTimeRegistrationViewController;
    InCallController *_inCallViewController;
    VideoConferenceController *_videoConferenceViewController;
    PHEmergencyDialerViewController *_emergencyDialerViewController;
    BOOL _faceTimeRegistrationViewIsShowing;
    BOOL _disableAutomaticAppearEvents;
    BOOL _inTransitionBetweenViewTypes;
    BOOL _returnToTabViewOnSuspendIfNeeded;
    _UIBackdropView *_backdropView;
}

- (void)_applicationSuspended:(id)fp8;
- (void)_createFaceTimeFirstRunViewIfNeeded;
- (void)_destroyFirstRunController;
- (void)_ensureProperPositionForContentView;
- (void)_getRotationContentSettings:(CDAnonymousStruct2 *)fp8;
- (void)_unloadChildViewControllers;
- (void)_unloadViewsForController:(id)fp8;
- (void)animateInUI;
- (CDAnonymousStruct1)applicationBadge;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)backdropView;
- (id)contentView;
- (int)currentViewType;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)disableAutomaticAppearEvents;
- (id)emergencyDialerViewController;
- (id)faceTimeRegistrationViewController;
- (void)firstRunControllerDidFinish:(id)fp8 finished:(BOOL)fp12;
- (void)hideContentViewAnimated:(BOOL)fp8 completionBlock:(id)fp(null);
- (void)hideVideoConferenceBackgroundViewAnimated:(BOOL)fp8;
- (id)inCallViewController;
- (BOOL)inTransitionBetweenViewTypes;
- (id)init;
- (void)initializeToEmergencyDialerViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)initializeToInCallViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)initializeToTabViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)initializeToVideoConferenceViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (BOOL)isContentViewLoaded;
- (void)loadView;
- (void)removeViewControllerFromHierarchyIfNecessary:(id)fp8;
- (void)resetCurrentViewType;
- (void)returnToTabViewForSuspendIfNeeded;
- (void)setContentViewHiddenPosition;
- (void)setContentViewNormalPosition;
- (void)setCurrentViewType:(int)fp8;
- (void)setDisableAutomaticAppearEvents:(BOOL)fp8;
- (void)setupContentViewFullSize;
- (void)setupContentViewSidebar;
- (void)setupCrossfadeBackToDialingAppWithDelay:(double)fp8;
- (BOOL)shouldAutorotate;
- (BOOL)shouldSwitchRootViewToViewType:(int)fp8;
- (void)showContentViewAnimated:(BOOL)fp8 completionBlock:(id)fp(null);
- (void)showFaceTimeFirstRunViewIfNeeded;
- (void)showVideoConferenceBackgroundViewAnimated:(BOOL)fp8;
- (void)tabBarController:(id)fp8 didSelectViewController:(id)fp12;
- (BOOL)tabBarController:(id)fp8 shouldSelectViewController:(id)fp12;
- (id)tabBarViewController;
- (void)transitionFromInCallViewToTabViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionFromInCallViewToVideoConferenceViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionFromTabViewToInCallViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionFromTabViewToVideoConferenceViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionFromVideoConferenceViewToInCallViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionFromVideoConferenceViewToTabViewAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)transitionToView:(int)fp8 animated:(BOOL)fp12 completionBlock:(id)fp(null);
- (void)updateChildViewControllersForCurrentOrientation;
- (void)updateFacetimeFirstRunViewKnockouts;
- (id)videoConferenceViewController;
- (id)viewControllerForRootViewType:(int)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;

@end
