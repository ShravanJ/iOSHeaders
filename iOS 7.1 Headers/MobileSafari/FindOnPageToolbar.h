/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSTimer, UIActivityIndicatorView, UIBarButtonItem, UILabel, UISearchBar, UIToolbar;

@interface FindOnPageToolbar : _AITFireProbe <UISearchBarDelegate>
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    UILabel *_currentMatchLabel;
    UIBarButtonItem *_currentMatchBarButtonItem;
    UIBarButtonItem *_matchLabelLeftSpacer;
    UISearchBar *_inputBar;
    UIBarButtonItem *_inputFieldBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    id <FindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UIActivityIndicatorView *_indicatorView;
    NSArray *_keyCommands;
    BOOL _ownedByAddressView;
    BOOL _useActivityView;
}

+ (id)toolbarWithItems:(id)fp8;
+ (id)sharedToolbar;
- (BOOL)useActivityView;
- (void)setOwnedByAddressView:(BOOL)fp8;
- (BOOL)ownedByAddressView;
- (void)_showPreviousResult;
- (void)_showNextResult;
- (id)keyCommands;
- (struct UIOffset)_inputBarButtonBackgroundOffset;
- (float)_widthForInputBarButton;
- (void)_showActivityIndicatorIfNeeded;
- (void)setUseActivityView:(BOOL)fp8;
- (void)dealloc;
- (id)inputField;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)_transitionToFindOnPageMode;
- (void)searchBar:(id)fp8 textDidChange:(id)fp12;
- (void)_doUpdateSearchText;
- (void)_done;
- (void)_nextTapped:(id)fp8;
- (void)_previousTapped:(id)fp8;
- (void)didEndSplitTransition;
- (void)updateUI;

@end

