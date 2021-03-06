/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class EmptyCollectionLabel, UIImageView;

@interface EmptyCollectionExplanationView : _AITFireProbe
{
    UIImageView *_imageView;
    EmptyCollectionLabel *_explanationLabel;
    EmptyCollectionLabel *_instructionsLabel;
    int _interfaceOrientation;
}

- (void)setInterfaceOrientation:(int)fp8;
- (int)interfaceOrientation;
- (void)layoutSubviews;
- (float)_paddingBetweenImageAndText;
- (void)fadeOutAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)fadeInAnimated:(BOOL)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 image:(id)fp24 explanationText:(id)fp28 instructionsText:(id)fp32 replacingString:(id)fp36 withImage:(id)fp40;

@end

