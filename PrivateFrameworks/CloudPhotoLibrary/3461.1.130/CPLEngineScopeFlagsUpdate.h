//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject
{
    long long _flags;
    long long _updatedFlagsMask;
}

+ (id)descriptionForFlags:(long long)arg1;
+ (id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long *)arg2;
+ (id)flagsDescriptionMapping;
@property(readonly, nonatomic) long long updatedFlagsMask; // @synthesize updatedFlagsMask=_updatedFlagsMask;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSArray *arrayDescription;
- (id)description;
- (long long)updatedFlagsFromFlags:(long long)arg1;
- (void)setValue:(BOOL)arg1 forFlag:(long long)arg2;
- (BOOL)valueForFlag:(long long)arg1;
- (id)initWithFlags:(long long)arg1;
- (id)init;

@end
