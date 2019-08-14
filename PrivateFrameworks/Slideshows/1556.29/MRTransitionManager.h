//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRTransitionManager : NSObject
{
    NSMutableDictionary *mTransitionSets;
    NSMutableDictionary *mTransitionPools;
}

+ (id)sharedManager;
+ (void)initialize;
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1;
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1;
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)arg1;
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)arg1;
- (BOOL)noContentsMotionForTransitionID:(id)arg1;
- (BOOL)canHandleKenBurnsForTransitionID:(id)arg1;
- (id)resourcePathForTransitionID:(id)arg1 andResource:(id)arg2;
- (id)descriptionForTransitionID:(id)arg1;
- (void)recycleTransition:(id)arg1;
- (id)transitionWithTransitionID:(id)arg1;
- (void)releaseResources;
- (void)cleanup;
- (void)dealloc;
- (id)initWithPaths:(id)arg1;

@end
