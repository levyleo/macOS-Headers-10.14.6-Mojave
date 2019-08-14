//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@protocol FRFeedCollectionViewLayoutBlueprintAnimatedContextType;

@interface FRFeedViewLayout : UICollectionViewLayout
{
    double _headerHeight;
    id <FRFeedCollectionViewLayoutBlueprintAnimatedContextType> _animatedContext;
    CDUnknownBlockType _adjustLayoutAttributes;
}

@property(copy, nonatomic) CDUnknownBlockType adjustLayoutAttributes; // @synthesize adjustLayoutAttributes=_adjustLayoutAttributes;
@property(retain, nonatomic) id <FRFeedCollectionViewLayoutBlueprintAnimatedContextType> animatedContext; // @synthesize animatedContext=_animatedContext;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)applyUpdateWithAnimatedContext:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (id)currentBlueprint;

@end
