//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CBColorSample : NSObject
{
    double _lux;
    double _CCT;
    unsigned long long _mode;
    CDStruct_34734122 _xy;
    CDStruct_6f955ef8 _XYZ;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) double CCT; // @synthesize CCT=_CCT;
@property(readonly, nonatomic) CDStruct_6f955ef8 XYZ; // @synthesize XYZ=_XYZ;
@property(readonly, nonatomic) CDStruct_34734122 xy; // @synthesize xy=_xy;
@property(readonly, nonatomic) double lux; // @synthesize lux=_lux;
- (id)description;
- (id)copyDataInDictionary;
- (void)fillInTristimulus;
- (void)fillInChromaticity;
- (void)setXYZ:(CDStruct_6f955ef8)arg1;
- (void)setXy:(CDStruct_34734122)arg1;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithChromaticity:(CDStruct_34734122)arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (id)initWithTristimulus:(CDStruct_6f955ef8)arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (id)init;

@end
