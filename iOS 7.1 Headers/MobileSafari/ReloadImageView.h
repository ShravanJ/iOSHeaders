/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class UIImage;

@interface ReloadImageView : _AITFireProbe
{
    UIImage *_reloadImage;
    UIImage *_stopImage;
    BOOL _stopShown;
    BOOL _stopDrawn;
    id _delegate;
}

- (void)setUsesPrivateBrowsingStyle:(BOOL)fp8;
- (void)setCoalescedDisplayIfNeeded;
- (void)setDelegate:(id)fp8;
- (struct CGSize)defaultSize;
- (void)setStopShown:(BOOL)fp8 forceUpdate:(BOOL)fp12;
- (void)updateImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

