/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@interface PHStarkGenericViewController : _ABAddressBookBeginExclusiveRead
{
    BOOL _viewIsInAppearedState;
    BOOL _respondsToEventsWhileInCall;
}

- (void)hardwareControlEventNotification:(id)fp8;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (BOOL)respondsToEventsWhileInCall;
- (void)setRespondsToEventsWhileInCall:(BOOL)fp8;
- (BOOL)shouldRespondToHardwareControlEvent;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidLoad;
- (BOOL)viewIsInAppearedState;

@end

