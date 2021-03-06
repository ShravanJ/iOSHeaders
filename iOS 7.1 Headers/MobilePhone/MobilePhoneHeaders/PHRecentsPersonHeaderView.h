/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class NSArray, PHRecentCall;

@interface PHRecentsPersonHeaderView : _ABAddressBookBeginExclusiveRead
{
    PHRecentCall *_recentCall;
    NSArray *_dateLabels;
    NSArray *_summaries;
    float _intrinsicContentHeight;
}

+ (id)headerViewWithFrame:(struct CGRect)fp8 recentCall:(id)fp24;
- (void)_buildView;
- (id)_initWithFrame:(struct CGRect)fp8 recentCall:(id)fp24;
- (id)dateLabels;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)fp8;
- (float)intrinsicContentHeight;
- (struct CGSize)intrinsicContentSize;
- (id)newSummaryViewForRecentCall:(id)fp8 occurrenceDate:(id)fp12 type:(int)fp16 duration:(double)fp20 category:(int)fp28 dataUsage:(double)fp32;
- (id)recentCall;
- (void)setDateLabels:(id)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)setIntrinsicContentHeight:(float)fp8;
- (void)setSummaries:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (id)summaries;

@end

