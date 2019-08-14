//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class CAShapeLayer, IPXProgressArcLayer, NSDate, NSTimer;

@interface IPXRoundProgressView : UXView
{
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    long long _style;
    IPXProgressArcLayer *__progressArcLayer;
    double __contentsScale;
}

@property(nonatomic, setter=_setContentsScale:) double _contentsScale; // @synthesize _contentsScale=__contentsScale;
@property(retain, nonatomic, setter=_setProgressArcLayer:) IPXProgressArcLayer *_progressArcLayer; // @synthesize _progressArcLayer=__progressArcLayer;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)resetProgress;
- (void)setProgress:(double)arg1;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)setPieRadius:(double)arg1;
- (void)setPieCenter:(struct CGPoint)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_setupSubviews;
- (void)_updateSublayersContentsScale;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
