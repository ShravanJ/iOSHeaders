/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BookmarkFavoritesViewControllerDelegate-Protocol.h"
#import "BookmarksTableViewControllerDelegate-Protocol.h"
#import "BrowserPanel-Protocol.h"
#import "CatalogCategoryViewController-Protocol.h"
#import "HistoryTableViewControllerDelegate-Protocol.h"
#import "ReadingListViewControllerDelegate-Protocol.h"
#import "SocialLinksViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, SocialLinksViewController, UIActionSheet, UIBarButtonItem, UIButton, UISegmentedControl, WebBookmarkCollection, _UINavigationControllerPalette;

@interface BookmarksNavigationController : _AITFireProbe <BookmarkFavoritesViewControllerDelegate, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, SocialLinksViewControllerDelegate, UIActionSheetDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, BrowserPanel, CatalogCategoryViewController>
{
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _haveBookmarksLock;
    NSTimer *_bookmarkLockTimer;
    NSTimer *_bookmarkSyncTimer;
    BOOL _isVisible;
    UIActionSheet *_clearHistoryAlertSheet;
    BOOL _allowsEditing;
    BOOL _isEditing;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    BOOL _showCollections;
    UISegmentedControl *_collectionSegmentedControl;
    BOOL _showOnlyFavorites;
    NSArray *_collectionsParentedInBookmarks;
    NSArray *_topLevelCollections;
    NSString *_currentCollection;
    NSMutableDictionary *_savedCollectionState;
    _UINavigationControllerPalette *_palette;
    UIBarButtonItem *_doneButtonItem;
    SocialLinksViewController *_socialLinksViewController;
    BOOL _doneButtonHidden;
    UIButton *navigationBarButton;
    id <BookmarksNavigationControllerDelegate> _bookmarksNavigationControllerDelegate;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _tableVisibleBoundsInsets;
    struct UIEdgeInsets _tableSeparatorInset;
}

- (BOOL)doneButtonHidden;
- (struct UIEdgeInsets)tableSeparatorInset;
- (struct UIEdgeInsets)tableVisibleBoundsInsets;
- (struct UIEdgeInsets)contentInset;
- (void)setBookmarksNavigationControllerDelegate:(id)fp8;
- (id)bookmarksNavigationControllerDelegate;
- (BOOL)allowsEditing;
- (id)navigationBarButton;
- (struct CGSize)preferredContentSize;
- (void)socialLinksViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (void)readingListViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (void)historyTableViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (struct UIEdgeInsets)contentInsetForBookmarksTableViewController:(id)fp8;
- (struct UIEdgeInsets)separatorInsetForBookmarksTableViewController:(id)fp8;
- (struct UIEdgeInsets)visibleBoundsInsetsForBookmarksTableViewController:(id)fp8;
- (void)bookmarksTableViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (struct UIEdgeInsets)contentInsetForFavoritesViewController:(id)fp8;
- (void)didTapOutsideBookmarkFavoritesViewController:(id)fp8;
- (void)bookmarkFavoritesViewController:(id)fp8 didSelectFolder:(id)fp12;
- (void)bookmarkFavoritesViewController:(id)fp8 didSelectNavigationDestination:(id)fp12;
- (void)dealloc;
- (void)setTableSeparatorInset:(struct UIEdgeInsets)fp8;
- (void)setTableVisibleBoundsInsets:(struct UIEdgeInsets)fp8;
- (void)setContentInset:(struct UIEdgeInsets)fp8;
- (void)setAllowsEditing:(BOOL)fp8;
- (void)_clearBookmarkSyncTimer;
- (void)_bookmarkSyncTimerDidFire:(id)fp8;
- (BOOL)shouldHideOnSuspend;
- (BOOL)shouldResumePanel;
- (void)panelWillSuspend;
- (BOOL)ignoresPrivateBrowsingStyle;
- (int)pausesPages;
- (int)panelType;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)setDoneButtonHidden:(BOOL)fp8;
- (void)_updateDoneButtonItemForViewController:(id)fp8;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)_restoreCurrentCollectionState;
- (void)_restorePanelState;
- (void)_savePanelState;
- (void)_loadSavedPanelState;
- (void)setCurrentCollection:(id)fp8;
- (id)newRootViewControllerForCollection:(id)fp8;
- (id)newBookmarksTableViewControllerWithFolder:(id)fp8 skipOffset:(unsigned int)fp12;
- (void)_selectedCollectionChanged:(id)fp8;
- (id)localizedTitleForCollection:(id)fp8;
- (struct CGSize)_segmentedControlItemOffsetForCollection:(id)fp8;
- (id)_segmentedControlItemForCollection:(id)fp8;
- (id)_socialLinksViewController;
- (void)_doneButtonPressed;
- (void)_setupCollectionSegmentedControl;
- (void)_setupCollections;
- (id)collectionsParentedInBookmarks;
- (BOOL)rebaseOnAncestorBookmark:(id)fp8 skipOffset:(unsigned int)fp12;
- (BOOL)rebaseOnDescendentBookmark:(id)fp8;
- (void)reloadBookmarksForFolder:(id)fp8;
- (void)_didPressNewFolderButton;
- (void)_didPressEditButton;
- (void)_didPressEditingDoneButton;
- (void)_setEditingFromToolbarButton:(BOOL)fp8;
- (void)updateToolbarItemsAnimated:(BOOL)fp8;
- (void)_updateToolbarItemsForViewController:(id)fp8 animated:(BOOL)fp12;
- (id)_toolbarItemsForViewControllerIncludingPrivateBrowsing:(id)fp8;
- (id)_toolbarItemsForViewController:(id)fp8;
- (void)_createToolbarItemsIfNecessary;
- (BOOL)_shouldShowPaletteForViewController:(id)fp8;
- (void)bookmarkSourceContentsChanged:(id)fp8;
- (void)_updateClearHistoryButton;
- (void)showLockedBookmarksDatabaseAlertForBookmarkAddition:(BOOL)fp8;
- (void)_clearBookmarkLockTimer;
- (void)_unlockBookmarksNow;
- (void)unlockBookmarksSoon;
- (BOOL)lockBookmarks;
- (BOOL)hasBookmarksLock;
- (void)removeAllHistoryItems;
- (id)_pathForBookmark:(id)fp8 startingFromAncestor:(id)fp12;
- (id)_lastExistingBookmarkWithUUIDs:(id)fp8;
- (void)_reloadSucceeded;
- (void)_reloadFailed;
- (void)reloadViewControllers;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)_hidePalette;
- (void)_showPalette;
- (void)viewWillLayoutSubviews;
- (void)setRootBookmark:(id)fp8 skipOffset:(unsigned int)fp12;
- (id)rootBookmark;
- (id)topmostStateRestoringViewController;
- (id)topReadingListViewController;
- (id)topmostBookmarksTableViewController;
- (id)topBookmarksTableViewController;
- (id)topHistoryTableViewController;
- (id)_initWithBookmarksDelegate:(id)fp8 topBookmark:(id)fp12 skipOffset:(unsigned int)fp16 showOnlyFavorites:(BOOL)fp20;
- (id)initWithBookmarksDelegate:(id)fp8 topBookmark:(id)fp12 skipOffset:(unsigned int)fp16;
- (id)initWithBookmarksDelegate:(id)fp8;
- (id)initShowingOnlyFavoritesWithBookmarksDelegate:(id)fp8;

@end

