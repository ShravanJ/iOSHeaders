/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "BrowserPanel-Protocol.h"

@class SheetController;

@interface SheetControllerPanel : _AITFireProbe <BrowserPanel>
{
    SheetController *_sheetController;
}

- (id)sheetController;
- (BOOL)ignoresPrivateBrowsingStyle;
- (int)pausesPages;
- (int)panelType;
- (void)dealloc;
- (id)initWithSheetController:(id)fp8;

@end

