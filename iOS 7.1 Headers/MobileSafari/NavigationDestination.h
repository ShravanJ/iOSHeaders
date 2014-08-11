/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class CloudTab, NSURL, WBSAutomaticReadingListItem, WebBookmark;

@interface NavigationDestination : _AITFireProbe
{
    unsigned int _type;
    WebBookmark *_bookmark;
    CloudTab *_cloudTab;
    NSURL *_URL;
    WBSAutomaticReadingListItem *_automaticReadingListItem;
}

+ (id)navigationDestinationWithAutomaticReadingListItem:(id)fp8;
+ (id)navigationDestinationWithHistoryURL:(id)fp8;
+ (id)navigationDestinationWithCloudTab:(id)fp8;
+ (id)navigationDestinationWithBookmark:(id)fp8;
- (void)setAutomaticReadingListItem:(id)fp8;
- (id)automaticReadingListItem;
- (void)setURL:(id)fp8;
- (void)setCloudTab:(id)fp8;
- (id)cloudTab;
- (void)setBookmark:(id)fp8;
- (id)bookmark;
- (unsigned int)type;
- (id)URL;
- (void)dealloc;
- (id)description;
- (id)_initWithType:(unsigned int)fp8;

@end
