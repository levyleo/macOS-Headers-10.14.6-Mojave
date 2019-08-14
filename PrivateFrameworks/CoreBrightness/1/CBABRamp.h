//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBDisplayModule;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBABRamp : NSObject
{
    CBDisplayModule *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fadeTimer;
    NSObject<OS_os_log> *_logHandle;
    float _maxLinearBrightness;
    float _minLinearBrightness;
}

- (float)getVersion;
- (void)setPerceptualBrightnessWithFade:(float)arg1 length:(float)arg2 current:(float)arg3;
- (void)transitionToBrightness:(float)arg1 force:(BOOL)arg2 periodOverride:(BOOL)arg3 period:(float)arg4;
- (void)stopTransition;
- (void)dealloc;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;

@end
