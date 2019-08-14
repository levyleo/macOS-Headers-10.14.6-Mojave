//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIView;

@interface UIDragPreviewTarget : NSObject <NSCopying>
{
    UIView *_container;
    struct CGPoint _center;
    struct CGAffineTransform _transform;
}

+ (id)new;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) UIView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint)arg2;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3;

@end
