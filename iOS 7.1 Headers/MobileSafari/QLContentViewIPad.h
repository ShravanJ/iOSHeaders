/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "QLContentView-Protocol.h"

@class OpenInApplicationBarButtonItem, QLDocumentInfoView, UIBarButtonItem, UIToolbar;

@interface QLContentViewIPad : _AITFireProbe <QLContentView>
{
    QLDocumentInfoView *_documentInfoView;
    UIToolbar *_buttonBar;
    OpenInApplicationBarButtonItem *_defaultApplicationButtonItem;
    UIBarButtonItem *_otherApplicationsButtonItem;
}

- (void)updateWithQuickLookDocument:(id)fp8;
- (void)_updateOtherApplicationsButtonItem;
- (void)_updateDefaultApplicationButtonItem:(id)fp8 multipleApplications:(BOOL)fp12;
- (void)layoutSubviews;
- (void)showBanner;
- (void)hideBanner;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 quickLookBannerViewDelegate:(id)fp24;

@end

