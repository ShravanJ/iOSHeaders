/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class WebBookmark;

@interface BookmarksBarLabelButton : _AITFireProbe
{
    BOOL _usesLightControls;
    WebBookmark *_bookmark;
}

+ (id)labelButton;
- (BOOL)usesLightControls;
- (id)bookmark;
- (void)dealloc;
- (void)setUsesLightControls:(BOOL)fp8;
- (void)layoutSubviews;
- (void)setBookmark:(id)fp8;

@end
