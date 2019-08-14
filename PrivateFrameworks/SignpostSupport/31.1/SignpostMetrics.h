//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface SignpostMetrics : NSObject
{
    NSData *_binarySnapshot;
    NSNumber *_cpuTimeNsec;
    NSNumber *_dirtyMemoryKB;
    NSNumber *_dirtyMemoryLifetimePeakKB;
    NSNumber *_storageDirtiedKB;
    NSNumber *_cpuInstructionsKI;
}

+ (id)newMetricsForSignpostEvent:(id)arg1;
+ (id)_deltaDescription:(id)arg1;
+ (id)_newMetricsFromData:(id)arg1;
@property(readonly, nonatomic) NSNumber *cpuInstructionsKI; // @synthesize cpuInstructionsKI=_cpuInstructionsKI;
@property(readonly, nonatomic) NSNumber *storageDirtiedKB; // @synthesize storageDirtiedKB=_storageDirtiedKB;
@property(readonly, nonatomic) NSNumber *dirtyMemoryLifetimePeakKB; // @synthesize dirtyMemoryLifetimePeakKB=_dirtyMemoryLifetimePeakKB;
@property(readonly, nonatomic) NSNumber *dirtyMemoryKB; // @synthesize dirtyMemoryKB=_dirtyMemoryKB;
@property(readonly, nonatomic) NSNumber *cpuTimeNsec; // @synthesize cpuTimeNsec=_cpuTimeNsec;
@property(readonly, nonatomic) NSData *binarySnapshot; // @synthesize binarySnapshot=_binarySnapshot;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithSnapshotDict:(id)arg1 data:(id)arg2;

@end
