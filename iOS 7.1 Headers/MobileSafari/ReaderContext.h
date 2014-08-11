/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSTimer, WebView;

@interface ReaderContext : _AITFireProbe
{
    int _retainCount;
    struct ReaderController *_readerController;
    struct ReaderJSController *_readerJSController;
    WebView *_webView;
    NSTimer *_clearUnusedReaderResourcesTimer;
    id <ReaderControllerDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (struct ReaderController *)readerController;
- (id)webView;
- (void)createArticleFinder;
- (BOOL)shouldCreateArticleFinder;
- (id)webView:(id)fp8 connectionPropertiesForResource:(id)fp12 dataSource:(id)fp16;
- (void)webView:(id)fp8 didFinishLoadForFrame:(id)fp12;
- (void)webView:(id)fp8 didClearWindowObject:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 decidePolicyForNewWindowAction:(id)fp12 request:(id)fp16 newFrameName:(id)fp20 decisionListener:(id)fp24;
- (void)webView:(id)fp8 decidePolicyForNavigationAction:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (BOOL)networkIsReachable;
- (int)readerOperationMode;
- (void)_clearUnusedReaderResources;
- (void)cancelClearUnusedReaderResourcesTimer;
- (void)clearUnusedReaderResourcesSoon;
- (void)loadNewArticle;
- (void)loadReaderDocument;
- (id)readerURL;
- (void)_clearReaderViewAndController;
- (struct ReaderJSController *)_readerJSController;
- (void)dealloc;
- (void)initReaderJSController:(id)fp8;
- (id)mailingAndPrintingFrame;
- (BOOL)isReaderAvailable;
- (void)stopLoadingNextPage;
- (BOOL)isLoadingNextPage;
- (BOOL)hasMultiplePages;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)createWebViewIfNeededWithPreferences:(id)fp8;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithWebView:(id)fp8;

@end
