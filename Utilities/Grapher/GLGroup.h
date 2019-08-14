//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GLObject.h"

@class NSMutableArray;

@interface GLGroup : GLObject
{
    NSMutableArray *mObjects;
}

+ (id)group;
- (void)renderForLineProjection;
- (void)renderForProjection;
- (struct _GRect3D)bounds3D;
- (void)setLineWidth:(double)arg1;
- (void)setAttribute:(unsigned long long)arg1;
- (id)objects;
- (void)glDraw:(BOOL)arg1;
- (void)render;
- (void)renderLineColor;
- (void)renderColor;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
