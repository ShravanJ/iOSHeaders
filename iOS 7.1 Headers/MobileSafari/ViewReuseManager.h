/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSMutableArray, NSMutableSet;

@interface ViewReuseManager : _AITFireProbe
{
    NSMutableArray *_trackedViews;
    NSMutableSet *_reusableViews;
    NSMutableSet *_viewsPendingRecycling;
    int _firstPreviouslyVisibleRepresentedObjectIndex;
    BOOL _alwaysSendPrepareForReuse;
    Class _reusableViewClass;
    id <ViewReuseManagerDelegate> _delegate;
}

- (id)trackedViews;
- (void)setAlwaysSendPrepareForReuse:(BOOL)fp8;
- (BOOL)alwaysSendPrepareForReuse;
- (id)delegate;
- (Class)reusableViewClass;
- (void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned int)fp8;
- (void)_recycleView:(id)fp8;
- (void)_recycleViewsInCollection:(id)fp8;
- (void)_didReceiveMemoryWarning:(id)fp8;
- (void)updateTrackedViewsForRepresentedObjectsInRange:(struct _NSRange)fp8;
- (void)recycleView:(id)fp8;
- (id)makeView;
- (void)removeViewFromTrackedViews:(id)fp8;
- (void)insertView:(id)fp8 inTrackedViewsAtIndex:(int)fp12;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (id)initWithReusableViewClass:(Class)fp8;
- (id)init;

@end
