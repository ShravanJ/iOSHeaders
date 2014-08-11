/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class UIView<BackgroundDrawing>;

@interface EllipsedTextFadeView : _AITFireProbe
{
    float _fadeAdjustment;
    UIView<BackgroundDrawing> *_backgroundView;
}

- (void)setBackgroundView:(id)fp8;
- (id)backgroundView;
- (void)setFadeAdjustment:(float)fp8;
- (float)fadeAdjustment;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)drawRect:(struct CGRect)fp8;

@end

