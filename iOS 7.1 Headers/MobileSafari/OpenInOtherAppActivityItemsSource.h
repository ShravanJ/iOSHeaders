/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "UIActivityItemsSource-Protocol.h"

@class NSURL;

@interface OpenInOtherAppActivityItemsSource : _AITFireProbe <UIActivityItemsSource>
{
    NSURL *_fileURL;
}

- (id)activityViewController:(id)fp8 itemsForActivityType:(id)fp12;
- (id)activityViewControllerPlaceholderItems:(id)fp8;
- (void)dealloc;
- (id)initWithFilePath:(id)fp8;

@end
