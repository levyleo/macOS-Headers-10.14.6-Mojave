//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PFSinglePassVideoExportItemStatistics : NSObject
{
    float _frameRate;
    unsigned long long _lastOutputChunkTimestamp;
    NSMutableArray *_outputChunkMeasurements;
    unsigned long long _processedOutputTotalBytes;
    unsigned long long _processedVideoSampleBytes;
    unsigned long long _processedAdditionalSampleBytes;
    double _conversionDuration;
    double _lastProcessedInputFramePresentationTime;
    long long _processedOutputFrameCount;
    unsigned long long _targetOutputTotalBytes;
    double _targetPlaybackDuration;
}

+ (id)statisticsWithTargetPlaybackDuration:(CDStruct_1b6d18a9)arg1 frameRate:(float)arg2 targetOutputTotalBytes:(unsigned long long)arg3;
@property float frameRate; // @synthesize frameRate=_frameRate;
@property double targetPlaybackDuration; // @synthesize targetPlaybackDuration=_targetPlaybackDuration;
@property unsigned long long targetOutputTotalBytes; // @synthesize targetOutputTotalBytes=_targetOutputTotalBytes;
@property long long processedOutputFrameCount; // @synthesize processedOutputFrameCount=_processedOutputFrameCount;
@property double lastProcessedInputFramePresentationTime; // @synthesize lastProcessedInputFramePresentationTime=_lastProcessedInputFramePresentationTime;
@property double conversionDuration; // @synthesize conversionDuration=_conversionDuration;
@property unsigned long long processedAdditionalSampleBytes; // @synthesize processedAdditionalSampleBytes=_processedAdditionalSampleBytes;
@property unsigned long long processedVideoSampleBytes; // @synthesize processedVideoSampleBytes=_processedVideoSampleBytes;
@property unsigned long long processedOutputTotalBytes; // @synthesize processedOutputTotalBytes=_processedOutputTotalBytes;
@property(retain) NSMutableArray *outputChunkMeasurements; // @synthesize outputChunkMeasurements=_outputChunkMeasurements;
@property unsigned long long lastOutputChunkTimestamp; // @synthesize lastOutputChunkTimestamp=_lastOutputChunkTimestamp;
- (void).cxx_destruct;
- (id)summaryDescription;
- (id)outputChunkMeasurementsDescription;
@property(readonly) long long effectiveEncodingBitRate;
@property(readonly) long long targetEncodingBitRate;
@property(readonly) float processingFramesPerSecond;
@property(readonly) unsigned long long averageOutputChunkBytes;
@property(readonly) double averageOutputChunkTimeInterval;
@property(readonly) unsigned long long processedOutputBytesPerSecond;
- (void)enumerateOutputChunkMeasurementsWithHandler:(CDUnknownBlockType)arg1;
- (void)addMeasurementForBytesDelivered:(unsigned long long)arg1;
- (id)init;

@end

