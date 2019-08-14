//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NUAnimationQueue, NUCrossFadeTitleView, NUFadeViewAnimator, NUSlideViewAnimator;
@protocol NUTitleViewDelegate, NUTitleViewStyler, OS_dispatch_semaphore;

@interface NUTitleView : UIView
{
    id <NUTitleViewStyler> _styler;
    id <NUTitleViewDelegate> _delegate;
    NUCrossFadeTitleView *_titleView;
    NUCrossFadeTitleView *_incomingTitleView;
    NUSlideViewAnimator *_slideAnimator;
    NUFadeViewAnimator *_fadeAnimator;
    NUAnimationQueue *_animationQueue;
    NSObject<OS_dispatch_semaphore> *_lingerSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lingerSemaphore; // @synthesize lingerSemaphore=_lingerSemaphore;
@property(readonly, nonatomic) NUAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(readonly, nonatomic) NUFadeViewAnimator *fadeAnimator; // @synthesize fadeAnimator=_fadeAnimator;
@property(readonly, nonatomic) NUSlideViewAnimator *slideAnimator; // @synthesize slideAnimator=_slideAnimator;
@property(retain, nonatomic) NUCrossFadeTitleView *incomingTitleView; // @synthesize incomingTitleView=_incomingTitleView;
@property(retain, nonatomic) NUCrossFadeTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <NUTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <NUTitleViewStyler> styler; // @synthesize styler=_styler;
- (void).cxx_destruct;
- (id)createMaskingLayerForTranslation;
- (void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)titleViewHandleTapGuesture;
- (void)relayoutWithAnimation:(BOOL)arg1;
- (void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyler:(id)arg1;

@end
