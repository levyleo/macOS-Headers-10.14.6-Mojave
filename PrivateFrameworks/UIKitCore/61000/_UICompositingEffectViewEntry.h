//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;
}

@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canTransitionToEffect:(id)arg1;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end
