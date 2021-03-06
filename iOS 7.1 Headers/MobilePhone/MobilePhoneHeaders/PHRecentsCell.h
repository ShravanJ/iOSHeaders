/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class NSArray, NSDictionary, NSLayoutConstraint, PHCellContentView, PHRecentCall, UIDateLabel, UIImageView, UILabel, UIView;

@interface PHRecentsCell : _ABAddressBookBeginExclusiveRead
{
    UILabel *_callerNameLabel;
    UILabel *_callerLabelLabel;
    UILabel *_callerCountLabel;
    UIDateLabel *_callerDateLabel;
    UIImageView *_callTypeIconView;
    NSDictionary *_allViewsDictionary;
    long _buildConstraintsOnceToken;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_dateConstraint;
    UIView *_layoutView;
    PHCellContentView *_cellContentView;
    PHRecentCall *_call;
    NSArray *_calculatedConstraints;
}

+ (id)_sharedOutgoingCallImage;
+ (id)_sharedOutgoingFaceTimeImage;
+ (id)_sharedOutgoingSelectedCallImage;
+ (id)_sharedOutgoingSelectedFaceTimeImage;
+ (id)allMetrics;
+ (float)editingMarginWidth;
+ (float)height;
+ (float)marginWidth;
- (void)_buildConstraints;
- (void)_handleContentSizeDidChange:(id)fp8;
- (void)_updateConstraints;
- (void)_updateFonts;
- (id)allMetrics;
- (id)allViews;
- (id)calculatedConstraints;
- (id)call;
- (int)count;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (void)layoutSubviews;
- (void)setCalculatedConstraints:(id)fp8;
- (void)setCall:(id)fp8;

@end

