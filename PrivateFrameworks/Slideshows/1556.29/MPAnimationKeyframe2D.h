//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe2D : MPAnimationKeyframe
{
    struct CGPoint _point;
}

+ (id)keyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
+ (id)keyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initKeyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)keyframe;

@end

