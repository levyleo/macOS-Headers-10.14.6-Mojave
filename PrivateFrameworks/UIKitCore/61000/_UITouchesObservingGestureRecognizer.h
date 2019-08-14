//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer
{
    NSSet *_touches;
}

+ (BOOL)_shouldDefaultToTouches;
@property(copy, nonatomic) NSSet *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (BOOL)_wantsPartialTouchSequences;
- (BOOL)_affectedByGesture:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)_updateTouchesFromEvent:(id)arg1;
- (BOOL)_allTouchesAreEndedOrCancelled:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
