//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFSlowMotionRampConfiguration : NSObject
{
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
    unsigned long long _playbackNumIntermediateSteps;
    unsigned long long _exportNumIntermediateSteps;
}

@property(readonly, nonatomic) float exportRampCurveExponent; // @synthesize exportRampCurveExponent=_exportRampCurveExponent;
@property(readonly, nonatomic) float playbackRampCurveExponent; // @synthesize playbackRampCurveExponent=_playbackRampCurveExponent;
@property(readonly, nonatomic) unsigned long long exportNumIntermediateSteps; // @synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps;
@property(readonly, nonatomic) unsigned long long playbackNumIntermediateSteps; // @synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps;
@property(readonly, nonatomic) double volumeSuppressionOutroTime; // @synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime;
@property(readonly, nonatomic) double volumeSuppressionIntroTime; // @synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime;
@property(readonly, nonatomic) double outroTime; // @synthesize outroTime=_outroTime;
@property(readonly, nonatomic) double introTime; // @synthesize introTime=_introTime;
@property(readonly, nonatomic) double rampTime; // @synthesize rampTime=_rampTime;
- (void)computeRampToTargetRate:(float)arg1 forExport:(BOOL)arg2 outTimeSteps:(id *)arg3 outIntermediateRates:(id *)arg4;
- (id)init;
- (id)initForRampDown:(BOOL)arg1;

@end
