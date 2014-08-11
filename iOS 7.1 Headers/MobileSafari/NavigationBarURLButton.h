/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class UIImage, UIImageView;

@interface NavigationBarURLButton : _AITFireProbe
{
    UIImageView *_overlayImageView;
    UIImageView *_tintImageView;
    UIImage *_darkBackgroundImage;
    UIImage *_lightBackgroundImage;
    BOOL _showsDarkBackground;
    float _backgroundAlphaFactor;
}

- (BOOL)showsDarkBackground;
- (float)backgroundAlphaFactor;
- (void)setBackgroundAlphaFactor:(float)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (void)_updateBackgroundImageAnimated:(BOOL)fp8;
- (void)setShowsDarkBackground:(BOOL)fp8;
- (BOOL)pointMostlyInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

