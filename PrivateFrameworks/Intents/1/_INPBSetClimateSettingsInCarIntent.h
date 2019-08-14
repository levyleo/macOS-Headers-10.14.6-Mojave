//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetClimateSettingsInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <_INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int airCirculationMode:1;
        unsigned int climateZone:1;
        unsigned int enableAirConditioner:1;
        unsigned int enableAutoMode:1;
        unsigned int enableClimateControl:1;
        unsigned int enableFan:1;
        unsigned int relativeFanSpeedSetting:1;
        unsigned int relativeTemperatureSetting:1;
    } _has;
    BOOL _enableAirConditioner;
    BOOL _enableAutoMode;
    BOOL _enableClimateControl;
    BOOL _enableFan;
    int _airCirculationMode;
    int _climateZone;
    int _relativeFanSpeedSetting;
    int _relativeTemperatureSetting;
    _INPBDataString *_carName;
    _INPBInteger *_fanSpeedIndex;
    _INPBDouble *_fanSpeedPercentage;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTemperature *_temperature;
}

@property(retain, nonatomic) _INPBTemperature *temperature; // @synthesize temperature=_temperature;
@property(nonatomic) int relativeTemperatureSetting; // @synthesize relativeTemperatureSetting=_relativeTemperatureSetting;
@property(nonatomic) int relativeFanSpeedSetting; // @synthesize relativeFanSpeedSetting=_relativeFanSpeedSetting;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *fanSpeedPercentage; // @synthesize fanSpeedPercentage=_fanSpeedPercentage;
@property(retain, nonatomic) _INPBInteger *fanSpeedIndex; // @synthesize fanSpeedIndex=_fanSpeedIndex;
@property(nonatomic) BOOL enableFan; // @synthesize enableFan=_enableFan;
@property(nonatomic) BOOL enableClimateControl; // @synthesize enableClimateControl=_enableClimateControl;
@property(nonatomic) BOOL enableAutoMode; // @synthesize enableAutoMode=_enableAutoMode;
@property(nonatomic) BOOL enableAirConditioner; // @synthesize enableAirConditioner=_enableAirConditioner;
@property(nonatomic) int climateZone; // @synthesize climateZone=_climateZone;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
@property(nonatomic) int airCirculationMode; // @synthesize airCirculationMode=_airCirculationMode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTemperature;
- (int)StringAsRelativeTemperatureSetting:(id)arg1;
- (id)relativeTemperatureSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasRelativeTemperatureSetting;
- (int)StringAsRelativeFanSpeedSetting:(id)arg1;
- (id)relativeFanSpeedSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasRelativeFanSpeedSetting;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasFanSpeedPercentage;
@property(readonly, nonatomic) BOOL hasFanSpeedIndex;
@property(nonatomic) BOOL hasEnableFan;
@property(nonatomic) BOOL hasEnableClimateControl;
@property(nonatomic) BOOL hasEnableAutoMode;
@property(nonatomic) BOOL hasEnableAirConditioner;
- (int)StringAsClimateZone:(id)arg1;
- (id)climateZoneAsString:(int)arg1;
@property(nonatomic) BOOL hasClimateZone;
@property(readonly, nonatomic) BOOL hasCarName;
- (int)StringAsAirCirculationMode:(id)arg1;
- (id)airCirculationModeAsString:(int)arg1;
@property(nonatomic) BOOL hasAirCirculationMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
