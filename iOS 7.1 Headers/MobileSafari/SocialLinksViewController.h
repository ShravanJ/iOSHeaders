/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BookmarksPanelStateRestoring-Protocol.h"
#import "CatalogCategoryViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, UITableViewController, _UIContentUnavailableView;

@interface SocialLinksViewController : _AITFireProbe <BookmarksPanelStateRestoring, CatalogCategoryViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableViewController *_tableViewController;
    NSMutableArray *_cachedItems;
    _UIContentUnavailableView *_explanationView;
    BOOL _finishedFirstRequest;
    id <SocialLinksViewControllerDelegate> _delegate;
}

+ (BOOL)hasAnyAccount;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)safari_tableViewForScrollPositionSaving;
- (void)_requestCompleted:(id)fp8;
- (void)_accountsChanged:(id)fp8;
- (void)_itemsChanged:(id)fp8;
- (void)_updatePopoverSize;
- (void)_updateExplanationViewVisibility;
- (void)_clearExplanationView;
- (void)_showExplanationView;
- (id)collectionType;
- (void)restoreScrollPosition:(float)fp8;
- (float)currentScrollPosition;
- (BOOL)restoreStateWithDictionary:(id)fp8;
- (id)currentStateDictionary;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)refreshStateChanged:(id)fp8;
- (void)loadView;
- (id)bookmarksNavigationController;
- (void)dealloc;
- (id)init;

@end

