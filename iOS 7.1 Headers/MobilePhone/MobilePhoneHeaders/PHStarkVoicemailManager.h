/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@interface PHStarkVoicemailManager : _ABAddressBookBeginExclusiveRead
{
}

+ (BOOL)isVisualVoicemailAvailable;
+ (id)sharedVoicemailManager;
- (void)_phoneApplicationAddressBookChangedNotification:(id)fp8;
- (id)badgeString;
- (void)dealloc;
- (id)init;
- (void)onlineStateChangedNotification:(id)fp8;
- (id)trashedVoicemails;
- (void)voicemailFlagsChangedNotification:(id)fp8;
- (void)voicemailStoreContentsRemovedNotification:(id)fp8;
- (id)voicemailWithID:(long long)fp8;
- (id)voicemails;
- (void)voicemailsAddedNotification:(id)fp8;

@end
