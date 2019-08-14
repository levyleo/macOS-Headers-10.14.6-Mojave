//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDecimalNumberValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBDecimalNumberValue : PBCodable <_INPBDecimalNumberValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int exponent:1;
        unsigned int isNegative:1;
        unsigned int mantissa:1;
    } _has;
    BOOL _isNegative;
    int _exponent;
    unsigned long long _mantissa;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) unsigned long long mantissa; // @synthesize mantissa=_mantissa;
@property(nonatomic) BOOL isNegative; // @synthesize isNegative=_isNegative;
@property(nonatomic) int exponent; // @synthesize exponent=_exponent;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(nonatomic) BOOL hasMantissa;
@property(nonatomic) BOOL hasIsNegative;
@property(nonatomic) BOOL hasExponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
