//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCAVWaveformViewControllerDelegate-Protocol.h"
#import "RCCaptureSessionObserver-Protocol.h"
#import "RCControlsActionDelegate-Protocol.h"
#import "RCRecordingControlDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, RCAVState, RCAVWaveformViewController, RCLayoutMetrics, RCMainViewController, RCRecordingControl, RCShuttleBar, RCTouchInsetsButton, RCUIConfiguration, UIButton, UILabel, UIView;
@protocol RCRecordingViewControllerDelegate;

@interface RCLockScreenViewController : UIViewController <RCCaptureSessionObserver, RCAVWaveformViewControllerDelegate, RCControlsActionDelegate, RCRecordingControlDelegate>
{
    UIButton *_selectionEditingModeButton;
    BOOL _captureSessionTerminated;
    double _timeDisplayLabelTimeValue;
    RCAVState *_AVState;
    RCUIConfiguration *_UIConfiguration;
    id _contentSizeChangeObserver;
    NSLayoutConstraint *_waveformTopOffsetCn;
    RCLayoutMetrics *_layoutMetrics;
    UIView *_containerView;
    RCRecordingControl *_recordingControl;
    RCTouchInsetsButton *_phoneDoneButton;
    RCAVWaveformViewController *_waveformViewController;
    RCAVWaveformViewController *_overviewWaveformViewController;
    UILabel *_timeDisplayLabel;
    RCShuttleBar *_shuttleBar;
    UILabel *_recordingNameLabel;
    UILabel *_recordingDateLabel;
    UILabel *_recordingDurationLabel;
    long long _recordingViewState;
    RCMainViewController *_mainViewController;
    id <RCRecordingViewControllerDelegate> _recordingViewControllerDelegate;
}

@property(nonatomic) __weak id <RCRecordingViewControllerDelegate> recordingViewControllerDelegate; // @synthesize recordingViewControllerDelegate=_recordingViewControllerDelegate;
@property(retain, nonatomic) RCMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) long long recordingViewState; // @synthesize recordingViewState=_recordingViewState;
@property(retain, nonatomic) UILabel *recordingDurationLabel; // @synthesize recordingDurationLabel=_recordingDurationLabel;
@property(retain, nonatomic) UILabel *recordingDateLabel; // @synthesize recordingDateLabel=_recordingDateLabel;
@property(retain, nonatomic) UILabel *recordingNameLabel; // @synthesize recordingNameLabel=_recordingNameLabel;
@property(readonly, nonatomic) RCShuttleBar *shuttleBar; // @synthesize shuttleBar=_shuttleBar;
@property(retain, nonatomic) UILabel *timeDisplayLabel; // @synthesize timeDisplayLabel=_timeDisplayLabel;
@property(retain, nonatomic) RCAVWaveformViewController *overviewWaveformViewController; // @synthesize overviewWaveformViewController=_overviewWaveformViewController;
@property(retain, nonatomic) RCAVWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(retain, nonatomic) RCTouchInsetsButton *phoneDoneButton; // @synthesize phoneDoneButton=_phoneDoneButton;
@property(retain, nonatomic) RCRecordingControl *recordingControl; // @synthesize recordingControl=_recordingControl;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) RCLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) NSLayoutConstraint *waveformTopOffsetCn; // @synthesize waveformTopOffsetCn=_waveformTopOffsetCn;
@property(readonly, nonatomic) __weak id contentSizeChangeObserver; // @synthesize contentSizeChangeObserver=_contentSizeChangeObserver;
@property(retain, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(retain, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
- (void).cxx_destruct;
- (void)pauseRecording;
- (void)setRecordingControlState:(long long)arg1;
- (void)controlActivated:(id)arg1;
- (void)performControlsAction:(long long)arg1 position:(double)arg2 source:(id)arg3;
- (void)_updateInterfaceForCaptureSession:(id)arg1;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_setTimeDisplayTextWithTimeValue:(double)arg1;
- (void)_requestUnlockWithDone:(BOOL)arg1;
- (void)_requestUnlock;
- (void)_reloadRecordingAttributes;
- (void)_pauseCaptureSession;
- (void)_beginOrResumeCaptureSession;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (void)updateCaptureSession:(id)arg1;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 captureTime:(double)arg3 usingDisplayLinkSmoothing:(BOOL)arg4;
- (void)setRecordingViewState:(long long)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)rc_screenUpdatesDisabledDidChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)layoutSubviews;
- (void)setViewFrame:(struct CGRect)arg1;
- (void)setWaveformTopOffsetCn:(id)arg1;
- (void)_updateContentSizeAttributes;
- (void)dealloc;
- (id)initWithMainViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

