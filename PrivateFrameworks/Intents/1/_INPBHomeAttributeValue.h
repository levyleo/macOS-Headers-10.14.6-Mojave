//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAttributeValue-Protocol.h>

@class NSString;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int booleanValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int valueType:1;
    } _has;
    BOOL _booleanValue;
    int _valueType;
    double _doubleValue;
    long long _integerValue;
    NSString *_stringValue;
}

@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) BOOL booleanValue; // @synthesize booleanValue=_booleanValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsValueType:(id)arg1;
- (id)valueTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasValueType;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasIntegerValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasBooleanValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
