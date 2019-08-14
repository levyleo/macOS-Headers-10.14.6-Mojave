//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VCAudioPowerLevelMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioPowerLevelMonitor : NSObject
{
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    BOOL isAudioPowerBelowThreshold;
    BOOL isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
    NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;
}

@property(nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate; // @synthesize delegate;
- (void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned int)arg2;
- (id)init;

@end
