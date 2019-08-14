//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    unsigned long long _subscriptionsFetchCount;
    int _fetchingBin;
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int subscriptionsFetchCount:1;
        unsigned int fetchingBin:1;
    } _has;
}

@property(nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property(nonatomic) unsigned long long subscriptionsFetchCount; // @synthesize subscriptionsFetchCount=_subscriptionsFetchCount;
@property(nonatomic) unsigned long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFetchingBin;
@property(nonatomic) int fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property(nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property(nonatomic) BOOL hasSubscriptionsFetchCount;
@property(nonatomic) BOOL hasCutoffTime;

@end
