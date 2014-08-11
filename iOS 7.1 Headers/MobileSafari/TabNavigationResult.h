/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class LSApplicationProxy, NSURL;

@interface TabNavigationResult : _AITFireProbe
{
    int _type;
    NSURL *_URL;
    LSApplicationProxy *_externalApplication;
}

+ (id)resultWithRedirectToExternalURL:(id)fp8;
+ (id)resultOfType:(int)fp8 withURL:(id)fp12;
- (id)externalApplication;
- (id)URL;
- (int)type;
- (id)_initWithType:(int)fp8 URL:(id)fp12 externalApplication:(id)fp16;
- (void)dealloc;

@end
