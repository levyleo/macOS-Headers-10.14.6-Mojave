//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GLObject.h"

@interface GLArrow : GLObject
{
    double mLineWidth;
    BOOL mDrawTrait;
    BOOL mDrawArrow;
    struct _GPoint3D mStart;
    struct _GPoint3D mTraitStart;
    struct _GPoint3D mEnd;
    struct _GPoint3D mTraitEnd;
    struct _GPoint3D mAxis;
    double mAngle;
    double mArrowLength;
    double mArrowSize;
}

+ (id)arrowFrom:(double [3])arg1 to:(double [3])arg2 withArrow:(id)arg3 drawTrait:(BOOL)arg4;
- (struct _GPoint3D)traitEnd;
- (struct _GPoint3D)traitStart;
- (void)setLineWidth:(double)arg1;
- (struct _GRect3D)bounds3D;
- (void)glDraw;
- (void)render;
- (id)initWithStart:(double [3])arg1 end:(double [3])arg2 withArrow:(id)arg3 drawTrait:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
