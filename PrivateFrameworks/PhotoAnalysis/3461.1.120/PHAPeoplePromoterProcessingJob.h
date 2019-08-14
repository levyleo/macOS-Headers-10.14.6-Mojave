//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

#import <PhotoAnalysis/PVPersonPromoterDelegate-Protocol.h>

@class NSObject, NSString, PHAVisionServiceFaceProcessingWorker, PVPersonPromoter;
@protocol OS_dispatch_queue;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate>
{
    BOOL _finished;
    float _completionScore;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    PVPersonPromoter *_personPromoter;
    PHAVisionServiceFaceProcessingWorker *_worker;
}

@property(nonatomic) __weak PHAVisionServiceFaceProcessingWorker *worker; // @synthesize worker=_worker;
@property(retain, nonatomic) PVPersonPromoter *personPromoter; // @synthesize personPromoter=_personPromoter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
- (void)setCompletionScore:(float)arg1;
- (float)completionScore;
- (void)setFinished:(BOOL)arg1;
- (BOOL)finished;
- (void).cxx_destruct;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
