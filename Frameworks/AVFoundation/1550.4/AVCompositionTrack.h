//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack
{
    AVCompositionTrackInternal *_priv;
}

- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, copy, nonatomic) NSArray *segments;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end
