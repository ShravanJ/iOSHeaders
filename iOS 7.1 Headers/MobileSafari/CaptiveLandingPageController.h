/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSURL;

@interface CaptiveLandingPageController : _AITFireProbe
{
    NSURL *_captiveLandingPageURL;
    unsigned long long _URLGeneration;
}

+ (id)sharedCaptiveLandingPageController;
- (id)captiveLandingPageURL;
- (void)clearCaptiveLandingPageURL;
- (id)popCaptiveLandingPageURL;
- (void)dealloc;
- (id)init;

@end

