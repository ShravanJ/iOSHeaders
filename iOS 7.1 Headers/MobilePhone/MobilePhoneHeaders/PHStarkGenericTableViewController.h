/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PHStarkGenericViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class PHStarkNoContentBannerView, UITableView, _UIFilteredDataSource;

@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _tableViewReloadIsRequiredOnViewWillAppear;
    UITableView *_mainTableView;
    _UIFilteredDataSource *_mainTableViewDataSource;
    PHStarkNoContentBannerView *_noContentBannerView;
}

- (BOOL)_viewControllerWasSelected;
- (void)applicationBadgeChangedNotification:(id)fp8;
- (id)badgeString;
- (void)dealloc;
- (float)defaultRowHeight;
- (int)filterType;
- (void)hardwareControlEventNotification:(id)fp8;
- (id)init;
- (void)limitedUIChanged:(id)fp8;
- (void)loadView;
- (id)mainTableView;
- (id)mainTableViewDataSource;
- (id)noContentBannerView;
- (void)programmaticallySelectRowAtIndexPath:(id)fp8;
- (void)setMainTableView:(id)fp8;
- (void)setMainTableViewDataSource:(id)fp8;
- (void)setNoContentBannerShown:(BOOL)fp8;
- (void)setNoContentBannerView:(id)fp8;
- (void)setTableViewReloadIsRequiredOnViewWillAppear:(BOOL)fp8;
- (void)starkInCallViewControllerAppearedNotification:(id)fp8;
- (id)subtitleForNoContentBanner;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (BOOL)tableViewReloadIsRequiredOnViewWillAppear;
- (id)titleForNoContentBanner;
- (void)updateBadgeString;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;

@end

