/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class NSNumber, NSObject<PHAudioPlayerDataSource>, NSTimer, PHVoicemailAudioController;

@interface PHAudioPlayer : _ABAddressBookBeginExclusiveRead
{
    PHVoicemailAudioController *_audioController;
    NSNumber *_seekToTime;
    BOOL _isPlaying;
    BOOL _isPlayable;
    BOOL _progressiveDurationAvailable;
    NSObject<PHAudioPlayerDataSource> *_dataSource;
    float _elapsedTime;
    float _playableTime;
    float _totalTime;
    id <PHAudioPlayerDelegate> _audioPlayerDelegate;
    float _progressBarWidth;
    NSTimer *_delayedPlaybackTimer;
    NSTimer *_progressUpdateTimer;
    unsigned int _currentFileSize;
    unsigned int _expectedFileSize;
}

+ (id)sharedAudioPlayer;
- (void)_avControllerDied:(id)fp8;
- (void)_avControllerPlaybackDidEnd:(id)fp8;
- (void)_avControllerPlaybackInterrupted:(id)fp8;
- (void)_avControllerPlaybackRateChanged:(id)fp8;
- (void)_avControllerPlaybackStateDidChangeItem:(id)fp8;
- (void)_avControllerTimeJumped:(id)fp8;
- (BOOL)_createVoicemailAVItemIfNecessary:(id *)fp8;
- (BOOL)_fileExists:(id)fp8;
- (void)_forceUpdateProgressiveDataLengths;
- (void)_handlePlayableDurationChanged:(id)fp8;
- (void)_proximityStateChanged:(id)fp8;
- (void)_setupProgressUpdateTimer;
- (void)_start;
- (void)_stopPlayingWithError:(id)fp8;
- (void)_updateDurations;
- (BOOL)_updateElapsedTime;
- (void)_updateProgress;
- (id)audioController;
- (id)audioPlayerDelegate;
- (unsigned int)currentFileSize;
- (id)dataSource;
- (void)dealloc;
- (id)delayedPlaybackTimer;
- (float)elapsedTime;
- (unsigned int)expectedFileSize;
- (id)init;
- (BOOL)isPlayable;
- (BOOL)isPlaying;
- (float)playableTime;
- (float)progressBarWidth;
- (id)progressUpdateTimer;
- (BOOL)progressiveDurationAvailable;
- (void)seekToTime:(float)fp8;
- (void)setAudioPlayerDelegate:(id)fp8;
- (void)setCurrentFileSize:(unsigned int)fp8;
- (void)setDataSource:(id)fp8;
- (void)setDelayedPlaybackTimer:(id)fp8;
- (void)setElapsedTime:(float)fp8;
- (void)setExpectedFileSize:(unsigned int)fp8;
- (void)setIsPlayable:(BOOL)fp8;
- (void)setIsPlaying:(BOOL)fp8;
- (void)setPlayableTime:(float)fp8;
- (void)setProgressBarWidth:(float)fp8;
- (void)setProgressUpdateTimer:(id)fp8;
- (void)setProgressiveDurationAvailable:(BOOL)fp8;
- (void)setTotalTime:(float)fp8;
- (void)start;
- (void)stop;
- (float)totalTime;

@end

