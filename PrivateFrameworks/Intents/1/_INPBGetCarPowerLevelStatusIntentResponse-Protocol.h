//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDistance, _INPBDouble, _INPBInteger;

@protocol _INPBGetCarPowerLevelStatusIntentResponse <NSObject>
@property(readonly, nonatomic) BOOL hasMinutesToFull;
@property(retain, nonatomic) _INPBInteger *minutesToFull;
@property(readonly, nonatomic) BOOL hasFuelPercentRemaining;
@property(retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property(readonly, nonatomic) BOOL hasDistanceRemaining;
@property(retain, nonatomic) _INPBDistance *distanceRemaining;
@property(nonatomic) BOOL hasCharging;
@property(nonatomic) BOOL charging;
@property(readonly, nonatomic) BOOL hasChargePercentRemaining;
@property(retain, nonatomic) _INPBDouble *chargePercentRemaining;
@end
