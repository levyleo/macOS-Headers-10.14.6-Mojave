//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl
{
    long long _style;
    BOOL _invertAutomaticStyle;
    UIVibrancyEffect *_effect;
}

@property(nonatomic) UIVibrancyEffect *effect; // @synthesize effect=_effect;
- (void)appendDescriptionTo:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (BOOL)invertAutomaticStyle;
- (long long)style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2;

@end
