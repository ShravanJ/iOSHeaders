/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BrowserPanel-Protocol.h"
#import "CloudTabViewControllerDelegate-Protocol.h"

@class CloudTabViewController;

@interface CloudTabNavigationController : _AITFireProbe <CloudTabViewControllerDelegate, BrowserPanel>
{
    CloudTabViewController *_cloudTabViewController;
    id <CloudTabNavigationControllerDelegate> _cloudTabNavigationControllerDelegate;
}

- (void)setCloudTabNavigationControllerDelegate:(id)fp8;
- (id)cloudTabNavigationControllerDelegate;
- (void)cloudTabViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)handlesAnimations;
- (int)pausesPages;
- (BOOL)ignoresPrivateBrowsingStyle;
- (int)panelType;
- (void)dealloc;
- (id)init;

@end

