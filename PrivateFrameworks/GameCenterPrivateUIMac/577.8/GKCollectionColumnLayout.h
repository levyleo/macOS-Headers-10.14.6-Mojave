//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout
{
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    NSDictionary *_decorationAttributes;
}

@property(retain, nonatomic) NSDictionary *decorationAttributes; // @synthesize decorationAttributes=_decorationAttributes;
@property(retain, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)applyDefaults;
- (void)dealloc;

@end
