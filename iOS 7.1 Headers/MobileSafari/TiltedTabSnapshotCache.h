/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSArray, NSMutableDictionary;

@interface TiltedTabSnapshotCache : _AITFireProbe
{
    unsigned int _numberOfOutstandingRequests;
    NSMutableDictionary *_snapshots;
    BOOL _updating;
    id <TiltedTabSnapshotCacheDelegate> _delegate;
    NSArray *_identifiersToCache;
}

+ (void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)fp8;
- (BOOL)isUpdating;
- (id)identifiersToCache;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)precacheSavedSnapshots;
- (void)setUpdating:(BOOL)fp8;
- (void)_sendDidFinishUpdatingToDelegateIfNeeded;
- (BOOL)isFinishedUpdating;
- (void)_requestNextSnapshotIfNecessary;
- (void)_saveSnapshotForIdentifier:(id)fp8;
- (void)_requestSavedSnapshotForIdentifier:(id)fp8;
- (BOOL)hasValidSnapshotWithIdentifier:(id)fp8;
- (void)invalidateSnapshotWithIdentifier:(id)fp8;
- (id)snapshotWithIdentifier:(id)fp8;
- (void)setIdentifiersToCache:(id)fp8;
- (void)_didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

