//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController
{
    long long _blurStyle;
    UIVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
- (void).cxx_destruct;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2;
- (void)_configureSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)presentationStyle;

@end

