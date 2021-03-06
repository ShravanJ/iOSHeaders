/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "WBSFluidProgressControllerDelegate-Protocol.h"

@class UIView;

@interface FluidProgressView : _AITFireProbe <WBSFluidProgressControllerDelegate>
{
    UIView *_progressBar;
    BOOL _progressAnimationSuppressed;
    float _progress;
    id <FluidProgressViewDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setProgress:(float)fp8;
- (float)progress;
- (void)setProgressAnimationSuppressed:(BOOL)fp8;
- (BOOL)progressAnimationSuppressed;
- (void)fluidProgressController:(id)fp8 setProgressToCurrentPosition:(id)fp12;
- (void)fluidProgressControllerFinishProgressBar:(id)fp8 animateFillFade:(BOOL)fp12;
- (void)fluidProgressController:(id)fp8 updateFluidProgressBar:(id)fp12;
- (void)_animateUsingDefaultTiming:(BOOL)fp8 stepAnimationTime:(float)fp12 options:(unsigned int)fp16 animations:(id)fp(null) completion:(void)fp20;
- (void)fluidProgressController:(id)fp8 startFluidProgressBar:(id)fp12 animateFillFade:(BOOL)fp16;
- (void)_finishProgressBarWithDuration:(double)fp8;
- (struct CGRect)_progressBarBoundsForValue:(double)fp8;
- (BOOL)isShowingProgress;
- (void)setProgressAnimationSuppressed:(BOOL)fp8 duringFluidProgressState:(id)fp12;
- (void)setProgressBarFillColor:(id)fp8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

