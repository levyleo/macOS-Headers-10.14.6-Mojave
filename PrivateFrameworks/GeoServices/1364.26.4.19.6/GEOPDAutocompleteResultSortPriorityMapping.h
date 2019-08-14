//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _resultSubtype;
    int _resultType;
    int _sortPriority;
    struct {
        unsigned int resultSubtype:1;
        unsigned int resultType:1;
        unsigned int sortPriority:1;
    } _has;
}

@property(nonatomic) int sortPriority; // @synthesize sortPriority=_sortPriority;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsResultSubtype:(id)arg1;
- (id)resultSubtypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResultSubtype;
@property(nonatomic) int resultSubtype; // @synthesize resultSubtype=_resultSubtype;
- (int)StringAsResultType:(id)arg1;
- (id)resultTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL hasSortPriority;

@end
