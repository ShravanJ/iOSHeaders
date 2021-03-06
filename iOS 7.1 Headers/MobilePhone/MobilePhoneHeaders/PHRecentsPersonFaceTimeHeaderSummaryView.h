/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

#import "PHRecentsPersonHeaderSummaryView-Protocol.h"

@class UILabel;

@interface PHRecentsPersonFaceTimeHeaderSummaryView : _ABAddressBookBeginExclusiveRead <PHRecentsPersonHeaderSummaryView>
{
    UILabel *_topmostLabel;
    UILabel *_bottommostLabel;
    float _intrinsicContentHeight;
}

- (id)bottommostLabel;
- (id)initWithFrame:(struct CGRect)fp8 recentCall:(id)fp24 occurrenceDate:(id)fp28 type:(int)fp32 duration:(double)fp36 category:(int)fp44 dataUsage:(double)fp48;
- (float)intrinsicContentHeight;
- (struct CGSize)intrinsicContentSize;
- (void)setBottommostLabel:(id)fp8;
- (void)setIntrinsicContentHeight:(float)fp8;
- (void)setTopmostLabel:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (id)topmostLabel;

@end

