/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "CompletionItem-Protocol.h"

@class NSString, WBSURLCompletionMatch;

@interface URLCompletionItem : _AITFireProbe <CompletionItem>
{
    BOOL _topHit;
    NSString *_title;
    NSString *_address;
    WBSURLCompletionMatch *_match;
}

- (BOOL)isTopHit;
- (id)match;
- (void)auditAcceptedCompletionWithRank:(unsigned int)fp8;
- (float)completionTableViewCellCustomHeight;
- (id)completionTableViewCell;
- (id)completionTableViewCellReuseIdentifier;
- (void)acceptCompletionWithSearchAction:(id)fp(null) goToURLAction:(void)fp8 findOnPageAction:(id)fp(null);
- (void)configureCompletionTableViewCell:(id)fp8;
- (id)title;
- (id)address;
- (id)description;
- (void)dealloc;
- (id)initWithMatch:(id)fp8;
- (id)initWithMatch:(id)fp8 topHit:(BOOL)fp12;

@end
