//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIBoundingPath.h>

__attribute__((visibility("hidden")))
@interface _UIRectangularBoundingPath : _UIBoundingPath
{
    struct CGRect _boundingRect;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
- (id)description;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (BOOL)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (BOOL)validateForCoordinateSpace;
- (BOOL)_validateBoundingRect:(struct CGRect)arg1 forCoordinateSpace:(id)arg2;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 boundingRect:(struct CGRect)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
