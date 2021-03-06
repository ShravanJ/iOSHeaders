/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BrowserPanel-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class MFMailComposeViewController;

@interface BrowserMailComposePanel : _AITFireProbe <BrowserPanel, UINavigationControllerDelegate>
{
    MFMailComposeViewController *_mailController;
}

- (id)mailController;
- (BOOL)shouldHideOnSuspend;
- (BOOL)shouldShowButtonBar;
- (BOOL)ignoresPrivateBrowsingStyle;
- (int)pausesPages;
- (int)panelType;
- (void)applicationDidResume;
- (void)navigationController:(id)fp8 didShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)dealloc;
- (id)initWithURL:(id)fp8 mailComposeDelegate:(id)fp12;

@end

