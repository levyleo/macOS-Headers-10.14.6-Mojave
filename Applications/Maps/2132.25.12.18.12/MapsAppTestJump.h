//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MapsAppTest.h"

__attribute__((visibility("hidden")))
@interface MapsAppTestJump : MapsAppTest
{
    BOOL _savedDebugDrawContinuously;
    double _pitch;
    double _yaw;
    CDStruct_071ac149 _endPoint;
}

@property(nonatomic) BOOL savedDebugDrawContinuously; // @synthesize savedDebugDrawContinuously=_savedDebugDrawContinuously;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) CDStruct_071ac149 endPoint; // @synthesize endPoint=_endPoint;
- (void)finishedFps;
- (void)startTimingFps;
- (void)didFinishJumping;
- (void)jumpToCupertino;
- (void)jumpToBayArea;
- (BOOL)runTest;
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;

@end
