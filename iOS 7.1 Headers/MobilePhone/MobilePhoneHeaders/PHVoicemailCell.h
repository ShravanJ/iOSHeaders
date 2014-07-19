/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

#import "MPDetailSliderDelegate-Protocol.h"
#import "PHAudioPlayerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, PHCellContentView, PHVoicemailSlider, UIActionSheet, UIButton, UIDateLabel, UIGestureRecognizer, UIImageView, UILabel, UIView, VMVoicemail;

@interface PHVoicemailCell : _ABAddressBookBeginExclusiveRead <PHAudioPlayerDelegate, MPDetailSliderDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *_unreadIndicatorView;
    UILabel *_nameLabel;
    UILabel *_labelLabel;
    UILabel *_durationLabel;
    UIDateLabel *_dateLabel;
    UILabel *_longDateLabel;
    UIButton *_playPauseButton;
    PHVoicemailSlider *_sliderView;
    UIButton *_speakerButton;
    UIButton *_callBackButton;
    UIButton *_deleteButton;
    UIButton *_infoButton;
    long _createConstraintsOnceToken;
    NSMutableArray *_calculatedConstraints;
    NSMutableArray *_playbackConstraints;
    NSLayoutConstraint *_nameLabelYConstraint;
    NSLayoutConstraint *_labelLabelYConstraint;
    NSLayoutConstraint *_infoButtonXConstraint;
    NSLayoutConstraint *_infoButtonYConstraint;
    NSLayoutConstraint *_unreadIndicatorYConstraint;
    NSLayoutConstraint *_playPauseAndControlsYConstraint;
    NSLayoutConstraint *_buttonsYConstraint;
    BOOL _animatingUpdateToUnreadIndicator;
    BOOL _shouldReupdateUnreadIndicator;
    BOOL _playWhenAvailable;
    BOOL _trackingTouchInCloseVoicemailArea;
    UIGestureRecognizer *_closeVoicemailGestureRecognizer;
    PHCellContentView *_cellContentView;
    UIView *_layoutView;
    BOOL _showingDeleteConfirmation;
    BOOL _showingPlayController;
    VMVoicemail *_voicemail;
    id <PHVoicemailCellConfigurationDelegate> _configurationDelegate;
    id <PHVoicemailCellDelegate> _delegate;
    UIActionSheet *_audioSelectionActionSheet;
    NSArray *_audioSelectionActionSheetRoutes;
}

+ (float)contentViewHeightCollapsed;
+ (id)disabledPlayImage;
+ (id)grayColor;
+ (float)height;
+ (float)heightShowingPlayControllerWithVoicemail:(id)fp8;
+ (id)pauseImage;
+ (id)playImage;
- (void)_addPlayControls;
- (id)_automationID;
- (void)_closeVoicemailFromGestureRecognizerTap:(id)fp8;
- (void)_deregisterForVoicemailNotifications;
- (void)_handleAudioControllerChanged:(id)fp8;
- (void)_handleContentSizeDidChange:(id)fp8;
- (void)_handlePhoneAppAddressBookChanged:(id)fp8;
- (void)_handleVoicemailDataAvailableChanged:(id)fp8;
- (void)_handleVoicemailFlagsChanged:(id)fp8;
- (id)_nameLabel;
- (BOOL)_pointIsInsideCloseVoicemailRect:(struct CGPoint)fp8;
- (void)_recalculateConstraints;
- (void)_registerForVoicemailNotifications;
- (void)_removePlayControls;
- (void)_updateConstraints;
- (void)_updateDurationLabel;
- (void)_updateFonts;
- (void)_updatePlayPauseButton;
- (void)_updatePlaybackTimer;
- (void)_updateProx;
- (void)_updateSpeakerButton;
- (void)_updateUI;
- (void)_updateUnreadIndicatorAnimated:(BOOL)fp8;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (struct CGPoint)anchorPointForUpdateInWindow:(id)fp8;
- (int)audioButtonMode;
- (id)audioSelectionActionSheet;
- (id)audioSelectionActionSheetRoutes;
- (void)callButtonTapped:(id)fp8 withEvent:(id)fp12;
- (id)configurationDelegate;
- (void)customAccessoryButtonTapped:(id)fp8 withEvent:(id)fp12;
- (id)date;
- (id)dateLabelAccessabilityString;
- (void)dealloc;
- (id)delegate;
- (void)detailSlider:(id)fp8 didChangeValue:(float)fp12;
- (void)detailSliderTrackingDidBegin:(id)fp8;
- (void)detailSliderTrackingDidCancel:(id)fp8;
- (void)detailSliderTrackingDidEnd:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (id)labelString;
- (void)layoutSubviews;
- (id)nameString;
- (void)playPauseButtonTapped:(id)fp8 withEvent:(id)fp12;
- (unsigned int)playingStatus;
- (void)prepareForReuse;
- (void)setAudioSelectionActionSheet:(id)fp8;
- (void)setAudioSelectionActionSheetRoutes:(id)fp8;
- (void)setConfigurationDelegate:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setNameLabel:(id)fp8;
- (void)setShowingPlayController:(BOOL)fp8;
- (void)setShowingPlayController:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setVoicemail:(id)fp8;
- (BOOL)showingPlayController;
- (void)speakerButtonTapped:(id)fp8 withEvent:(id)fp12;
- (void)startPlaying;
- (void)startedPlayingWithDataSource:(id)fp8;
- (void)stoppedPlayingWithDataSource:(id)fp8 withError:(id)fp12;
- (id)tableViewSeparatorColor;
- (void)trashButtonTapped:(id)fp8 withEvent:(id)fp12;
- (BOOL)unread;
- (void)updateWithElapsedTime:(double)fp8 playableTime:(double)fp16 totalTime:(double)fp24 isPlaying:(BOOL)fp32 isPlayable:(BOOL)fp36 dataSource:(id)fp40;
- (id)voicemail;

@end
