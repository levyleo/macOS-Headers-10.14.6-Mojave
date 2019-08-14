//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSCopying-Protocol.h>

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying>
{
    NSData *_eventData;
    int _eventType;
    struct {
        unsigned int eventType:1;
    } _has;
}

@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEventData;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (id)si_dictionaryRepresentation;

@end
