//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol UISpringLoadedInteractionContext <NSObject>
@property(retain, nonatomic) id targetItem;
@property(retain, nonatomic) UIView *targetView;
@property(readonly, nonatomic) long long state;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end
