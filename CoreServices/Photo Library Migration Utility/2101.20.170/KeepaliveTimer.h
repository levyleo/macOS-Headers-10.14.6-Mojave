//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString;

@interface KeepaliveTimer : NSObject
{
    double mStart;
    double mLastTouch;
    double mThreshold;
    NSString *mKey;
    NSString *mComment;
    BOOL mFinished;
    BOOL mInScope;
}

+ (void)timerFired:(id)arg1;
+ (id)keepaliveTimerWithKey:(id)arg1 comment:(id)arg2 keepaliveThreshold:(double)arg3;
+ (id)currentTimer;
+ (void)initialize;
- (id)end;
- (id)begin;
- (BOOL)isInScope;
- (void)finish;
- (void)touch;
- (BOOL)thresholdExpired:(double)arg1;
- (void)overrideStartTime:(double)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 comment:(id)arg2 keepaliveThreshold:(double)arg3;

@end
