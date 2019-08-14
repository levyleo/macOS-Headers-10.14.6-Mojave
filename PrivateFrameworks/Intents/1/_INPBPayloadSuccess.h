//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadSuccess-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@interface _INPBPayloadSuccess : PBCodable <_INPBPayloadSuccess, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_resolvedKeyPath;
    _INPBIntentSlotValue *_resolvedValue;
}

@property(retain, nonatomic) _INPBIntentSlotValue *resolvedValue; // @synthesize resolvedValue=_resolvedValue;
@property(copy, nonatomic) NSString *resolvedKeyPath; // @synthesize resolvedKeyPath=_resolvedKeyPath;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasResolvedValue;
@property(readonly, nonatomic) BOOL hasResolvedKeyPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
