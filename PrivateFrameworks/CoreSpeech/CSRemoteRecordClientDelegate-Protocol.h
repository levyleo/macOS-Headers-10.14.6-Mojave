//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSData, NSError;

@protocol CSRemoteRecordClientDelegate <NSObject>
- (void)remoteRecordConnectionDisconnected;
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;
- (void)remoteRecordLPCMBufferAvailable:(NSData *)arg1;
- (void)remoteRecordDidStopRecordingWithError:(NSError *)arg1;
- (void)remoteRecordDidStartRecordingWithError:(NSError *)arg1;
@end

