//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDynamicItem-Protocol.h>

@class NSArray, NSMapTable, NSString, UIBezierPath;

@interface UIDynamicItemGroup : NSObject <UIDynamicItem>
{
    NSMapTable *_itemsToOffsets;
    struct CGPoint _center;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

