/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class WebBookmark;

@interface FolderPickerItem : _AITFireProbe
{
    WebBookmark *_bookmark;
    unsigned int _depth;
}

- (unsigned int)depth;
- (id)bookmark;
- (id)title;
- (void)dealloc;
- (id)_initWithBookmark:(id)fp8 depth:(unsigned int)fp12;

@end

