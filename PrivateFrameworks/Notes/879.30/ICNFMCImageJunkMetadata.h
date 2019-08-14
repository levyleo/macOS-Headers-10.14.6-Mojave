//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNFMCImageJunkMetadata : NSObject
{
    unsigned long long _pixelCount;
    unsigned long long _byteCount;
    BOOL _isAnimated;
    long long _type;
    double _density;
    unsigned long long _frameCount;
    struct CGSize _size;
}

+ (id)lsmMarkerForImageDensityCategory:(long long)arg1;
+ (id)lsmMarkerForImageSizeCategory:(long long)arg1;
+ (id)stringForImageType:(long long)arg1;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) BOOL isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) long long densityCategory;
@property(readonly, nonatomic) long long sizeCategory;
@property(nonatomic) unsigned long long pixelCount;
@property(nonatomic) unsigned long long byteCount;
- (void)computeDensity;
- (id)init;
- (id)initWithImage:(id)arg1 name:(id)arg2 type:(long long)arg3;

@end
