//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCWaveformRenderer;

@protocol RCWaveformRendererDelegate <NSObject>
@property(nonatomic) double currentTime;
- (double)duration;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCWaveformRenderer *)arg1;
- (void)waveformRendererContentDidFinishLoading:(RCWaveformRenderer *)arg1;
- (void)waveformRenderer:(RCWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
@end
