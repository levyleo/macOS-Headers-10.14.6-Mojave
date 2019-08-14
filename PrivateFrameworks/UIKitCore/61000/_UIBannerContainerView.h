//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView
{
    NSMutableArray *_banners;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setBanner:(id)arg1 visible:(BOOL)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)updateConstraints;
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
