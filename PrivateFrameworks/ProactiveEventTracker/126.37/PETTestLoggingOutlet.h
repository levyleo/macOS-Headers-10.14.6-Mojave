//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveEventTracker/PETLoggingOutlet-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet>
{
    NSString *_lastLoggedKey;
    unsigned long long _lastLoggedScalarValue;
    double _lastLoggedDistributionValue;
    NSString *_previousLoggedKey;
    unsigned long long _previousLoggedScalarValue;
    double _previousLoggedDistributionValue;
    NSMutableArray *_allLoggedKeys;
    NSMutableArray *_allLoggedValues;
    NSMutableDictionary *_keyValues;
}

@property(readonly, nonatomic) NSMutableDictionary *keyValues; // @synthesize keyValues=_keyValues;
@property(readonly, nonatomic) NSMutableArray *allLoggedValues; // @synthesize allLoggedValues=_allLoggedValues;
@property(readonly, nonatomic) NSMutableArray *allLoggedKeys; // @synthesize allLoggedKeys=_allLoggedKeys;
@property(readonly, nonatomic) double previousLoggedDistributionValue; // @synthesize previousLoggedDistributionValue=_previousLoggedDistributionValue;
@property(readonly, nonatomic) unsigned long long previousLoggedScalarValue; // @synthesize previousLoggedScalarValue=_previousLoggedScalarValue;
@property(readonly, nonatomic) NSString *previousLoggedKey; // @synthesize previousLoggedKey=_previousLoggedKey;
@property(readonly, nonatomic) double lastLoggedDistributionValue; // @synthesize lastLoggedDistributionValue=_lastLoggedDistributionValue;
@property(readonly, nonatomic) unsigned long long lastLoggedScalarValue; // @synthesize lastLoggedScalarValue=_lastLoggedScalarValue;
@property(readonly, nonatomic) NSString *lastLoggedKey; // @synthesize lastLoggedKey=_lastLoggedKey;
- (void).cxx_destruct;
- (id)getValueForKey:(id)arg1;
- (void)reset;
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
