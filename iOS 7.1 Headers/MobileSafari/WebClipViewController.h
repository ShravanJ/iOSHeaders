/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BookmarkTextEntryTableViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSObject<WebClipViewControllerDelegate>, UIImageView, UITableViewCell, UIWebClip;

@interface WebClipViewController : _AITFireProbe <UITextFieldDelegate, BookmarkTextEntryTableViewControllerDelegate>
{
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
    UIImageView *_iconImageView;
    BOOL _suspendAfterDismiss;
    BOOL _delegateNotifiedOfResult;
    UIWebClip *_webClip;
    NSObject<WebClipViewControllerDelegate> *_delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setWebClip:(id)fp8;
- (id)webClip;
- (void)bookmarkTextEntryTableViewController:(id)fp8 dismissedWithText:(id)fp12;
- (void)dealloc;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopoverView;
- (BOOL)shouldShowButtonBar;
- (void)_textFieldChanged;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)_canAddWebClip;
- (void)_add;
- (void)_cancel;
- (void)_updateCells;
- (id)_titleCell;
- (void)_updateIconViewFrame;
- (struct CGPoint)_centerForIconView;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)updateUIAnimated:(BOOL)fp8;
- (void)loadView;
- (id)init;

@end

