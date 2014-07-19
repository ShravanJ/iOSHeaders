/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "PhoneBadgeable-Protocol.h"

@protocol PhoneTabViewController <NSObject, PhoneBadgeable>
+ (id)defaultPNGName;
+ (id)tabBarIconName;
+ (int)tabViewType;
- (void)handleURL:(id)fp8;
- (void)prepareForSnapshot;
- (BOOL)shouldSnapshot;
@end
