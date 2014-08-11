/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "WBSURLCompletionMatchData-Protocol.h"

@class HistoryItem;

@interface URLCompletionMatchHistoryItemData : _AITFireProbe <WBSURLCompletionMatchData>
{
    HistoryItem *_historyItem;
}

- (id)historyItem;
- (float)topSitesScoreAtTime:(double)fp8;
- (BOOL)matchesAutocompleteTrigger:(id)fp8;
- (void)enumerateUserVisibleURLsUsingBlock:(id)fp(null);
- (void)enumeratePageTitlesUsingBlock:(id)fp(null);
- (id)matchDataByMergingWithMatchData:(id)fp8;
- (BOOL)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (BOOL)containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned int)fp8;
- (id)userVisibleURLStringAtIndex:(unsigned int)fp8;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned int)fp8;
- (id)pageTitleAtIndex:(unsigned int)fp8;
- (id)originalURLString;
- (id)_userVisibleURLString;
- (void)dealloc;
- (id)initWithHistoryItem:(id)fp8;

@end

