//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PMLSessionDescriptor, _PASRng;

@interface PMLPlanSimulator : NSObject
{
    NSArray *_stores;
    PMLSessionDescriptor *_sessionDescriptor;
    _PASRng *_rng;
}

+ (id)simulatorWithDbPaths:(id)arg1 sessionDescriptor:(id)arg2 sessionsInBatch:(unsigned long long)arg3 maxSessionsLimit:(unsigned long long)arg4 seed:(unsigned long long)arg5;
- (void).cxx_destruct;
- (id)runParallelPlansWithPlanId:(id)arg1 tracker:(id)arg2 noiseScaleFactors:(CDStruct_cd4a7bf5)arg3 noiseMinimumMagnitude:(float)arg4 weights:(id)arg5 serverIteration:(unsigned long long)arg6 useIntercept:(BOOL)arg7 noiseMechanism:(long long)arg8 usingRandomlySelected:(unsigned long long)arg9;
- (id)_randomStores:(unsigned long long)arg1;
- (id)_randomStore;
- (id)initWithStores:(id)arg1 sessionDescriptor:(id)arg2 seed:(unsigned long long)arg3;
- (id)init;

@end

