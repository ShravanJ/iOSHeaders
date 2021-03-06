/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSDate, NSError, NSTimer, NSURL;

@interface PageLoad : _AITFireProbe
{
    int _status;
    NSTimer *_timer;
    NSDate *_startRenderDate;
    NSDate *_endRenderDate;
    NSDate *_startRenderFrameCountDate;
    NSDate *_endRenderFrameCountDate;
    long _startRenderFrameCount;
    long _endRenderFrameCount;
    NSURL *_URL;
    NSURL *_redirectURL;
    NSDate *_startDate;
    NSDate *_startLoadDate;
    NSDate *_endLoadDate;
    NSDate *_firstVisualLayoutDate;
    NSError *_error;
    CDAnonymousStruct2 _heapBefore;
    CDAnonymousStruct2 _heapAfter;
    NSDate *_redirectDate;
}

- (void)setRedirectDate:(id)fp8;
- (id)redirectDate;
- (void)setHeapAfter:(CDAnonymousStruct2)fp8;
- (CDAnonymousStruct2)heapAfter;
- (void)setHeapBefore:(CDAnonymousStruct2)fp8;
- (CDAnonymousStruct2)heapBefore;
- (void)setFirstVisualLayoutDate:(id)fp8;
- (id)firstVisualLayoutDate;
- (void)setEndLoadDate:(id)fp8;
- (id)endLoadDate;
- (void)setStartLoadDate:(id)fp8;
- (id)startLoadDate;
- (void)setStartDate:(id)fp8;
- (id)startDate;
- (void)setError:(id)fp8;
- (id)error;
- (void)setRedirectURL:(id)fp8;
- (id)redirectURL;
- (void)setURL:(id)fp8;
- (id)URL;
- (double)framesPerSecond;
- (double)renderDuration;
- (void)finishRenderTime:(id)fp8;
- (void)startRenderTime:(id)fp8;
- (void)finishRenderFps:(id)fp8;
- (void)startRenderFps:(id)fp8;
- (void)setTimer:(id)fp8;
- (id)timer;
- (id)statusString;
- (int)status;
- (void)setStatus:(int)fp8;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)fp8;

@end

