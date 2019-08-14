//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString, UITouch, UIView, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    UIView *_view;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
    BOOL _active;
}

@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
