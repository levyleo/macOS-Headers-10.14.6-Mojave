//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPQuery, FCCKPRecordZoneIdentifier, FCCKPRequestedFields, NSData;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying>
{
    NSData *_continuationMarker;
    unsigned int _limit;
    FCCKPQuery *_query;
    FCCKPRequestedFields *_requestedFields;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int limit:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) FCCKPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) FCCKPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) FCCKPQuery *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequestedFields;
@property(readonly, nonatomic) BOOL hasZoneIdentifier;
@property(nonatomic) BOOL hasLimit;
@property(readonly, nonatomic) BOOL hasContinuationMarker;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end
