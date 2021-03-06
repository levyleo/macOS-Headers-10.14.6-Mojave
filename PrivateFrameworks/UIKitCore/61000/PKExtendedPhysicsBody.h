//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhysicsKit/PKPhysicsBody.h>

__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    long long _associations;
    double _areaFactor;
}

+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithEllipseInRect:(struct CGRect)arg1;
- (BOOL)dissociate;
- (void)associate;
- (id)description;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
@property(nonatomic) double normalizedDensity;
- (id)init;

@end

