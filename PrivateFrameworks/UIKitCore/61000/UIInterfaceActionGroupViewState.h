//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>
{
    BOOL _isVerticalLayoutAxis;
    long long _resolvedPresentationStyle;
}

@property(readonly, nonatomic) long long resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) BOOL isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (BOOL)_stateEqualToGroupViewState:(id)arg1;
- (void)_collectStateFromGroupViewState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyWithResolvedPresentationStyle:(long long)arg1;
- (id)copyWithVerticalLayoutAxis:(BOOL)arg1;
- (id)init;

@end

