/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class UIImageView, UILabel;

@interface QLDocumentInfoView : _AITFireProbe
{
    UILabel *_documentNameLabel;
    UILabel *_documentSizeLabel;
    UIImageView *_iconImageView;
}

- (void)setIconImageView:(id)fp8;
- (id)iconImageView;
- (void)setDocumentSizeLabel:(id)fp8;
- (id)documentSizeLabel;
- (void)setDocumentNameLabel:(id)fp8;
- (id)documentNameLabel;
- (void)updateWithQuickLookDocument:(id)fp8;
- (id)_iconImageForDocumentProxy:(id)fp8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

