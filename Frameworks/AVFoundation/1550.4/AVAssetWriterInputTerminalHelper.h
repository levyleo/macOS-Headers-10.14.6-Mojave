//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>
{
    long long _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}

- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (long long)appendCaptionGroup:(id)arg1 error:(id *)arg2;
- (long long)appendCaption:(id)arg1 error:(id *)arg2;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1;
- (BOOL)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)isReadyForMoreMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (long long)status;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
