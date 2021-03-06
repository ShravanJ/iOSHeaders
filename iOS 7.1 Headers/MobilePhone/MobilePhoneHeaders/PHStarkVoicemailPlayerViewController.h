/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PHStarkGenericViewController.h"

#import "PHAudioPlayerDelegate-Protocol.h"

@class PHAudioPlayer, PHAudioPlayerVoicemailDataSource, PHStarkProgressView, UIButton, UILabel, VMVoicemail;

@interface PHStarkVoicemailPlayerViewController : PHStarkGenericViewController <PHAudioPlayerDelegate>
{
    BOOL _firstAppearanceEvent;
    BOOL _isPlaying;
    VMVoicemail *_representedVoicemail;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    PHStarkProgressView *_progressView;
    UIButton *_callBackButton;
    UIButton *_rewindButton;
    UIButton *_playPauseButton;
    PHAudioPlayer *_audioPlayerController;
    PHAudioPlayerVoicemailDataSource *_voicemailDataSource;
}

+ (id)detailStringForVoicemail:(id)fp8;
- (id)audioPlayerController;
- (id)callBackButton;
- (void)callBackButtonTapped:(id)fp8;
- (void)dealloc;
- (id)detailLabel;
- (BOOL)firstAppearanceEvent;
- (void)hardwareControlEventNotification:(id)fp8;
- (id)init;
- (BOOL)isPlaying;
- (void)loadView;
- (id)nameLabel;
- (id)playPauseButton;
- (void)playPauseButtonTapped:(id)fp8;
- (id)progressView;
- (id)representedVoicemail;
- (id)rewindButton;
- (void)rewindButtonTapped:(id)fp8;
- (void)setAudioPlayerController:(id)fp8;
- (void)setCallBackButton:(id)fp8;
- (void)setDetailLabel:(id)fp8;
- (void)setFirstAppearanceEvent:(BOOL)fp8;
- (void)setIsPlaying:(BOOL)fp8;
- (void)setNameLabel:(id)fp8;
- (void)setPlayPauseButton:(id)fp8;
- (void)setProgressView:(id)fp8;
- (void)setRepresentedVoicemail:(id)fp8;
- (void)setRewindButton:(id)fp8;
- (void)setVoicemailDataSource:(id)fp8;
- (void)startedPlayingWithDataSource:(id)fp8;
- (void)stoppedPlayingWithDataSource:(id)fp8 withError:(id)fp12;
- (void)updateWithElapsedTime:(double)fp8 playableTime:(double)fp16 totalTime:(double)fp24 isPlaying:(BOOL)fp32 isPlayable:(BOOL)fp36 dataSource:(id)fp40;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (id)voicemailDataSource;

@end

