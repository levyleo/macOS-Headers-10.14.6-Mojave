//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, UICollisionBehavior, UIDynamicItemBehavior;
@protocol UIDynamicItem;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationStickyBehavior : UIDynamicBehavior
{
    BOOL _isEnabled;
    double _cornerInset;
    UIDynamicItemBehavior *_itemBehavior;
    UICollisionBehavior *_collisionBehavior;
    id <UIDynamicItem> _item;
    NSMutableArray *_fieldBehaviors;
}

@property(retain, nonatomic) NSMutableArray *fieldBehaviors; // @synthesize fieldBehaviors=_fieldBehaviors;
@property(retain, nonatomic) id <UIDynamicItem> item; // @synthesize item=_item;
@property(retain, nonatomic) UICollisionBehavior *collisionBehavior; // @synthesize collisionBehavior=_collisionBehavior;
@property(retain, nonatomic) UIDynamicItemBehavior *itemBehavior; // @synthesize itemBehavior=_itemBehavior;
@property double cornerInset; // @synthesize cornerInset=_cornerInset;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (unsigned long long)currentCorner;
- (struct CGPoint)positionForCorner:(unsigned long long)arg1;
- (void)addLinearVelocity:(struct CGPoint)arg1;
- (void)updateFieldsInBounds:(struct CGRect)arg1;
- (void)willMoveToAnimator:(id)arg1;
- (id)initWithItem:(id)arg1 cornerInset:(double)arg2;

@end

