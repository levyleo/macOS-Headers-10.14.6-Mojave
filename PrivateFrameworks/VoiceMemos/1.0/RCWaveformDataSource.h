//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCWaveformGeneratorSegmentOutputObserver-Protocol.h>

@class NSHashTable, NSString, NSURL, RCMutableWaveform, RCWaveform, RCWaveformGenerator;
@protocol OS_dispatch_queue;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver>
{
    RCMutableWaveform *_accumulatorWaveform;
    RCMutableWaveform *_liveRecordingMergingWaveform;
    BOOL _hasSavedGeneratedWaveform;
    BOOL _hasStartedLoading;
    double _durationPerWaveformSlice;
    NSObject<OS_dispatch_queue> *_queue;
    RCWaveformGenerator *_waveformGenerator;
    NSURL *_generatedWaveformOutputURL;
    NSHashTable *_weakObservers;
}

@property(readonly, nonatomic) BOOL hasStartedLoading; // @synthesize hasStartedLoading=_hasStartedLoading;
@property(readonly, nonatomic) NSHashTable *weakObservers; // @synthesize weakObservers=_weakObservers;
@property(readonly, nonatomic) NSURL *generatedWaveformOutputURL; // @synthesize generatedWaveformOutputURL=_generatedWaveformOutputURL;
@property(readonly, nonatomic) RCWaveformGenerator *waveformGenerator; // @synthesize waveformGenerator=_waveformGenerator;
@property BOOL hasSavedGeneratedWaveform; // @synthesize hasSavedGeneratedWaveform=_hasSavedGeneratedWaveform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double durationPerWaveformSlice; // @synthesize durationPerWaveformSlice=_durationPerWaveformSlice;
@property(readonly, nonatomic) RCWaveform *liveRecordingMergingWaveform; // @synthesize liveRecordingMergingWaveform=_liveRecordingMergingWaveform;
@property(readonly, nonatomic) RCWaveform *accumulatorWaveform; // @synthesize accumulatorWaveform=_accumulatorWaveform;
- (void).cxx_destruct;
- (void)_performObserversBlock:(CDUnknownBlockType)arg1;
- (void)_performOnObserversBlock:(CDUnknownBlockType)arg1;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)updateAccumulatorWaveformSegmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)mergeGeneratedWaveformIfNecessary;
- (BOOL)shouldMergeLiveWaveform;
- (void)saveGeneratedWaveformIfNecessary;
- (id)saveableWaveform;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;
@property(readonly, nonatomic) double averagePowerLevelsRate;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (id)waveformSegmentsInTimeRange:(CDStruct_73a5d3ca)arg1;
@property(readonly, nonatomic) CDStruct_73a5d3ca timeRangeToHighlight;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) float loadingProgress;
@property(readonly, nonatomic) BOOL canceled;
@property(readonly, nonatomic) BOOL finished;
- (BOOL)setPaused:(BOOL)arg1;
- (BOOL)waitUntilFinished;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)beginLoading;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
