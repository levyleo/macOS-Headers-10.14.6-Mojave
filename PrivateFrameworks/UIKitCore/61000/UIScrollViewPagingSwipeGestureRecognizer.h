//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint _startLocation;
    struct CGPoint _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

+ (BOOL)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_processNewLocation:(struct CGPoint)arg1;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (void)enoughTimeElapsed:(id)arg1;
- (void)clearTimer;

@end
