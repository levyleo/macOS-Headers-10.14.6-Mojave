//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLTimer;

@interface PLPowerAssertionAgent : PLAgent
{
    BOOL _assertionBufferFullNotificationActive;
    BOOL _firstBufferDrain;
    PLCFNotificationOperatorComposition *_assertionNotification;
    PLCFNotificationOperatorComposition *_assertionBufferFullNotification;
    PLTimer *_assertionBufferFullNotificationRearmTimer;
    NSMutableArray *_assertionBufferNotificationTracking;
    PLEntryNotificationOperatorComposition *_batteryLevelNotificiations;
    PLEntryNotificationOperatorComposition *_wakeNotification;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLTimer *_runQueryTimer;
    PLTimer *_assertionSnapShotTimer;
    long long _aggregateMaxPIDCount;
    long long _aggregteZeroDeltaCount;
    NSMutableDictionary *_assertionAggregatedLastSamplePLDataStructure;
    NSMutableDictionary *_assertionAggregatedLastSample;
    NSDictionary *_startEndActionsToEnum;
    NSDictionary *_assertTypeToEnum;
    NSSet *_logAssertNameForActions;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventForwardDefinitionAssertion;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property(readonly) NSSet *logAssertNameForActions; // @synthesize logAssertNameForActions=_logAssertNameForActions;
@property(readonly) NSDictionary *assertTypeToEnum; // @synthesize assertTypeToEnum=_assertTypeToEnum;
@property(readonly) NSDictionary *startEndActionsToEnum; // @synthesize startEndActionsToEnum=_startEndActionsToEnum;
@property(retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample; // @synthesize assertionAggregatedLastSample=_assertionAggregatedLastSample;
@property(retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure; // @synthesize assertionAggregatedLastSamplePLDataStructure=_assertionAggregatedLastSamplePLDataStructure;
@property long long aggregteZeroDeltaCount; // @synthesize aggregteZeroDeltaCount=_aggregteZeroDeltaCount;
@property long long aggregateMaxPIDCount; // @synthesize aggregateMaxPIDCount=_aggregateMaxPIDCount;
@property BOOL firstBufferDrain; // @synthesize firstBufferDrain=_firstBufferDrain;
@property(retain) PLTimer *assertionSnapShotTimer; // @synthesize assertionSnapShotTimer=_assertionSnapShotTimer;
@property(retain) PLTimer *runQueryTimer; // @synthesize runQueryTimer=_runQueryTimer;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLEntryNotificationOperatorComposition *canSleepNotification; // @synthesize canSleepNotification=_canSleepNotification;
@property(retain) PLEntryNotificationOperatorComposition *wakeNotification; // @synthesize wakeNotification=_wakeNotification;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations; // @synthesize batteryLevelNotificiations=_batteryLevelNotificiations;
@property(retain) NSMutableArray *assertionBufferNotificationTracking; // @synthesize assertionBufferNotificationTracking=_assertionBufferNotificationTracking;
@property(nonatomic) BOOL assertionBufferFullNotificationActive; // @synthesize assertionBufferFullNotificationActive=_assertionBufferFullNotificationActive;
@property(retain) PLTimer *assertionBufferFullNotificationRearmTimer; // @synthesize assertionBufferFullNotificationRearmTimer=_assertionBufferFullNotificationRearmTimer;
@property(retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification; // @synthesize assertionBufferFullNotification=_assertionBufferFullNotification;
@property(retain) PLCFNotificationOperatorComposition *assertionNotification; // @synthesize assertionNotification=_assertionNotification;
- (void).cxx_destruct;
- (id)bundleIDForAssertionProcessPID:(int)arg1;
- (void)logAggregatedAssertionActivity;
- (void)logEventPointAggregateResetWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)logEventForwardAssertionWithReason:(id)arg1 asSnapshot:(BOOL)arg2;
- (void)logInterval:(id)arg1;
- (void)logSnapshot:(id)arg1;
- (void)logEventForwardAssertion;
- (void)log;
- (id)sanitizeAssertionNameForEntry:(id)arg1;
@property(nonatomic) BOOL assertionSnapshotTimerActive;
- (void)setAssertionBufferFullNotificationActive:(BOOL)arg1 withReason:(id)arg2;
- (void)checkAssertionBufferFullNotificationRate;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg1 withPidCount:(int)arg2;
- (id)assertTypeToEnumMapping;
- (id)startEndActionsToEnumMapping;
- (void)logSnapshotAtMidnight:(id)arg1;
- (void)initOperatorDependancies;
- (id)init;

@end
