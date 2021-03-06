/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "UIScrollViewDelegate-Protocol.h"

@class ContinuousReadingPreviewView, UIScrollView;

@interface ContinuousReadingViewController : _AITFireProbe <UIScrollViewDelegate>
{
    BOOL _suppressScrollingActions;
    ContinuousReadingPreviewView *_previewView;
    float _previewLandingOffset;
    id <ContinuousReadingViewControllerDelegate> _delegate;
    UIScrollView *_outerScrollView;
}

- (void)_setOuterScrollView:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setPreviewLandingOffset:(float)fp8;
- (float)previewLandingOffset;
- (id)previewView;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewDidScroll:(id)fp8;
- (void)_commitToLoadItemForPreviewIfNeeded;
- (id)_outerScrollView;
- (void)setContinuousScrollEnabled:(BOOL)fp8;
- (BOOL)isContinuousScrollEnabled;
- (BOOL)isUserInteractingWithContainer;
- (void)setPreviewView:(id)fp8;
- (id)view;
- (void)updateContentSize;
- (void)dealloc;

@end

