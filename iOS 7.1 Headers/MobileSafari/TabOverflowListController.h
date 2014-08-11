/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSArray, TabDocument;

@interface TabOverflowListController : _AITFireProbe
{
    NSArray *_tabDocuments;
    TabDocument *_selectedDocument;
    id <TabOverflowListControllerDelegate> _delegate;
}

- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (void)dealloc;
- (id)initWithTabDocuments:(id)fp8 selectedDocument:(id)fp12 delegate:(id)fp16;

@end
