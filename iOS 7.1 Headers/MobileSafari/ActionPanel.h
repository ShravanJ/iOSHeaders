/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BrowserPanel-Protocol.h"

@interface ActionPanel : _AITFireProbe <BrowserPanel>
{
    BOOL _inCancel;
    BOOL _inCompletionHandler;
}

- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)_shouldSendBrowserPanelNotification;
- (void)willHideOnSuspend;
- (BOOL)shouldResumePanel;
- (void)panelWillSuspend;
- (BOOL)shouldHideOnSuspend;
- (BOOL)ignoresPrivateBrowsingStyle;
- (int)pausesPages;
- (int)panelType;
- (void)_preparePrint:(id)fp8;
- (void)_prepareMail:(id)fp8;
- (void)_preparePostToSocialNetwork:(id)fp8;
- (void)_prepareActivity:(id)fp8;
- (void)_executeActivity;
- (void)_cancel;
- (void)cancelActionPanel;
- (void)_activityDidComplete:(id)fp8 withSuccess:(BOOL)fp12;
- (int)preferredStatusBarStyle;
- (id)init;

@end

