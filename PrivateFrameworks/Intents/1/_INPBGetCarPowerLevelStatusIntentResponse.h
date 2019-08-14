//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetCarPowerLevelStatusIntentResponse-Protocol.h>

@class NSString, _INPBDistance, _INPBDouble, _INPBInteger;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int charging:1;
    } _has;
    BOOL _charging;
    _INPBDouble *_chargePercentRemaining;
    _INPBDistance *_distanceRemaining;
    _INPBDouble *_fuelPercentRemaining;
    _INPBInteger *_minutesToFull;
}

@property(retain, nonatomic) _INPBInteger *minutesToFull; // @synthesize minutesToFull=_minutesToFull;
@property(retain, nonatomic) _INPBDouble *fuelPercentRemaining; // @synthesize fuelPercentRemaining=_fuelPercentRemaining;
@property(retain, nonatomic) _INPBDistance *distanceRemaining; // @synthesize distanceRemaining=_distanceRemaining;
@property(nonatomic) BOOL charging; // @synthesize charging=_charging;
@property(retain, nonatomic) _INPBDouble *chargePercentRemaining; // @synthesize chargePercentRemaining=_chargePercentRemaining;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasMinutesToFull;
@property(readonly, nonatomic) BOOL hasFuelPercentRemaining;
@property(readonly, nonatomic) BOOL hasDistanceRemaining;
@property(nonatomic) BOOL hasCharging;
@property(readonly, nonatomic) BOOL hasChargePercentRemaining;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
