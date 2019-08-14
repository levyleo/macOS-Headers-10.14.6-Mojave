//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>
{
    NSMutableArray *_aggregates;
    NSMutableArray *_histories;
}

+ (Class)historiesType;
+ (Class)aggregatesType;
@property(retain, nonatomic) NSMutableArray *histories; // @synthesize histories=_histories;
@property(retain, nonatomic) NSMutableArray *aggregates; // @synthesize aggregates=_aggregates;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)historiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)historiesCount;
- (void)addHistories:(id)arg1;
- (void)clearHistories;
- (id)aggregatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregatesCount;
- (void)addAggregates:(id)arg1;
- (void)clearAggregates;
- (void)dealloc;

@end
