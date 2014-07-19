/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class AVController, NSArray, NSDictionary;

@interface AudioDeviceController : _ABAddressBookBeginExclusiveRead
{
    id _delegate;
    AVController *_avController;
    NSDictionary *_pickedRoute;
    NSArray *_pickableRoutes;
}

- (void)_mediaServerDied;
- (void)_pickRoute:(id)fp8;
- (id)_pickableRoutes;
- (void)_pickableRoutesChanged;
- (id)_pickedRoute;
- (void)_registerForAVControllerNotifications;
- (BOOL)_routeIsAirPlayMirroring:(id)fp8;
- (BOOL)_routeIsAirTunes:(id)fp8;
- (BOOL)_routeIsBlueToothLEA:(id)fp8;
- (BOOL)_routeIsDefault:(id)fp8;
- (BOOL)_routeIsHandset:(id)fp8;
- (BOOL)_routeIsReceiver:(id)fp8;
- (BOOL)_routeIsSpeaker:(id)fp8;
- (BOOL)audioCategoryIsTTY;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)callAudioRouteChangedEventHandler:(id)fp8;
- (void)clearCachedRoutes;
- (void)dealloc;
- (BOOL)handsetRouteAvailable;
- (id)init;
- (void)invalidateAVController;
- (BOOL)isAirPlayMirroring;
- (int)numberOfAudioRoutes;
- (BOOL)pickDefaultRoute;
- (BOOL)pickHandsetRoute;
- (void)pickRouteAtIndex:(unsigned int)fp8;
- (BOOL)pickRouteWithUID:(id)fp8;
- (BOOL)pickSpeakerRoute;
- (BOOL)receiverRouteIsPicked;
- (void)restorePickedRoute;
- (id)routeNameAtIndex:(unsigned int)fp8 isPicked:(char *)fp12;
- (id)routeTypeAtIndex:(unsigned int)fp8;
- (void)setAVController:(id)fp8;
- (void)setDelegate:(id)fp8;
- (BOOL)speakerRouteAvailable;
- (BOOL)speakerRouteIsPicked;

@end

