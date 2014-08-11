/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBSURLCompletionMatchData <NSObject>
- (BOOL)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (BOOL)containsBookmark;
- (id)originalURLString;
- (float)topSitesScoreAtTime:(double)fp8;
- (BOOL)matchesAutocompleteTrigger:(id)fp8;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned int)fp8;
- (id)userVisibleURLStringAtIndex:(unsigned int)fp8;
- (void)enumerateUserVisibleURLsUsingBlock:(id)fp(null);
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned int)fp8;
- (id)pageTitleAtIndex:(unsigned int)fp8;
- (void)enumeratePageTitlesUsingBlock:(id)fp(null);
- (id)matchDataByMergingWithMatchData:(id)fp8;
@end
