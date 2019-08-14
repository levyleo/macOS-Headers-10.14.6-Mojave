//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GraphKit/NSCoding-Protocol.h>
#import <GraphKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GRGradientColor : NSObject <NSCoding, NSCopying>
{
    struct CGColorSpace *colorSpace;
    int type;
    unsigned long long colorCount;
    NSMutableArray *colors;
    double **rgbColorComponents;
    struct CGFunction *colorFunction;
}

+ (id)gradientOfType:(int)arg1 withColors:(id)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1;
- (void)set;
- (id)inverseGradient;
- (void)fillRect:(struct CGRect)arg1;
- (void)fillBezierPath:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)fillBezierPath:(id)arg1;
- (BOOL)isOpaque;
- (int)gradientType;
- (void)setGradientType:(int)arg1;
- (struct CGFunction *)colorFunction;
- (id)colors;
- (unsigned long long)colorCount;
- (void)addColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithColorArray:(id)arg1;
- (id)initWithColors:(id)arg1;
- (id)init;
- (void)_updateColorFunction;

@end
