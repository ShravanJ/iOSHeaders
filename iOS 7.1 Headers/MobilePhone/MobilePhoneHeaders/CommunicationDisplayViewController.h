/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@interface CommunicationDisplayViewController : _ABAddressBookBeginExclusiveRead
{
}

+ (BOOL)lockWasInterrupted;
+ (BOOL)shouldRelock;
+ (BOOL)springBoardIsLocked;
+ (BOOL)starkUnlocked;
- (BOOL)_lockWasInterrupted;
- (void)_postOkToRelock;
- (BOOL)_shouldRelock;
- (BOOL)_springboardIsLocked;
- (BOOL)isShowingLock;

@end

