/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class TPRingView;

@interface SixSquareButton : _ABAddressBookBeginExclusiveRead
{
    struct UIEdgeInsets _contentInsets;
    TPRingView *_ringView;
}

- (void)dealloc;
- (struct CGRect)imageRectForContentRect:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)ringView;
- (void)setContentRect:(struct CGRect)fp8;
- (void)setEnabled:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (void)setRingView:(id)fp8;
- (void)setSelected:(BOOL)fp8;
- (void)setupButton;
- (struct CGRect)titleRectForContentRect:(struct CGRect)fp8;

@end

