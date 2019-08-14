//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXTileAnimator-Protocol.h"

@class NSString;
@protocol IPXTilingViewTileAnimatorDelegate;

@interface IPXTilingViewTileAnimator : NSObject <PXTileAnimator>
{
    id <IPXTilingViewTileAnimatorDelegate> _delegate;
    unsigned long long _animationCount;
}

@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) __weak id <IPXTilingViewTileAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateTile:(void *)arg1 toGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)prepareTile:(void *)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
@property(readonly, nonatomic) BOOL isAnimating;
- (void)prepareTileForReuse:(id)arg1;
- (void)makeTileReusable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
