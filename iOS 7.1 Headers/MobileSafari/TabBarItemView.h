/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "FluidProgressViewDelegate-Protocol.h"

@class FluidProgressView, NSString, TabBar, UIButton, UILabel, UIView;

@interface TabBarItemView : _AITFireProbe <FluidProgressViewDelegate>
{
    UIView *_leftBorder;
    UIView *_rightBorder;
    UIView *_topBorder;
    UILabel *_titleLabel;
    NSString *_titleText;
    TabBar *_tabBar;
    BOOL _active;
    BOOL _reordering;
    BOOL _showsLeftEdge;
    BOOL _showsRightEdge;
    BOOL _centersTitleInWindow;
    BOOL _showsMoreTabsButton;
    BOOL _hidesTitleText;
    UIButton *_closeButton;
    FluidProgressView *_progressView;
    UIButton *_moreTabsButton;
    struct CGRect _customProgressViewLayoutBounds;
}

+ (float)extraWidthForMoreTabsButton;
- (struct CGRect)customProgressViewLayoutBounds;
- (BOOL)hidesTitleText;
- (BOOL)showsMoreTabsButton;
- (id)moreTabsButton;
- (BOOL)centersTitleInWindow;
- (BOOL)showsRightEdge;
- (BOOL)showsLeftEdge;
- (BOOL)isReordering;
- (BOOL)isActive;
- (id)progressView;
- (id)closeButton;
- (void)dealloc;
- (void)fluidProgressViewDidShowProgress:(id)fp8;
- (void)fluidProgressViewWillShowProgress:(id)fp8;
- (void)setProgressView:(id)fp8;
- (void)setReordering:(BOOL)fp8;
- (void)setActive:(BOOL)fp8;
- (void)setShowsMoreTabsButton:(BOOL)fp8;
- (void)setCentersTitleInWindow:(BOOL)fp8;
- (void)setShowsRightEdge:(BOOL)fp8;
- (void)setShowsLeftEdge:(BOOL)fp8;
- (void)setTitleText:(id)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)initWithTabBar:(id)fp8;
- (void)setCustomProgressViewLayoutBounds:(struct CGRect)fp8;
- (void)_layoutProgressBar;
- (void)_layoutMoreTabsButton;
- (void)_layoutCloseButton;
- (void)_layoutEdges;
- (void)updateTitleTruncation;
- (void)setHidesTitleText:(BOOL)fp8;
- (void)_layoutTitleLabel;
- (struct CGRect)_titleBoundingBox;
- (struct CGRect)_contentRect;
- (id)_truncatedTitleWithFont:(id)fp8 desiredWidth:(float)fp12 truncatedSize:(struct CGSize *)fp16;

@end

