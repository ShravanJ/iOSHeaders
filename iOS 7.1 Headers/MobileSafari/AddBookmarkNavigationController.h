/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BookmarkInfoViewControllerDelegate-Protocol.h"

@class BookmarkInfoViewController, NSObject<AddBookmarkNavigationControllerDelegate>, WebBookmarkCollection;

@interface AddBookmarkNavigationController : _AITFireProbe <BookmarkInfoViewControllerDelegate>
{
    BookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    NSObject<AddBookmarkNavigationControllerDelegate> *_bookmarkNavDelegate;
    BOOL _delegateNotifiedOfResult;
}

- (void)setBookmarkNavDelegate:(id)fp8;
- (id)bookmarkNavDelegate;
- (void)bookmarkInfoViewController:(id)fp8 didFinishWithResult:(BOOL)fp12;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)willHideOnSuspend;
- (BOOL)shouldResumePanel;
- (void)panelWillSuspend;
- (BOOL)shouldShowBrowserPanel;
- (void)addBookmarkWithTitle:(id)fp8 address:(id)fp12;
- (void)dealloc;
- (id)initWithCollection:(id)fp8;

@end

