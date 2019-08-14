//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol CSVoiceTriggerDelegate <NSObject>
- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1 deviceId:(NSString *)arg2;

@optional
- (void)voiceTriggerGotSuperVector:(NSData *)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
@end
