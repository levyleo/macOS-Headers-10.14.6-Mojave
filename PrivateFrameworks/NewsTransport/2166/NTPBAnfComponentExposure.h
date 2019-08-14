//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBAnfComponentExposure : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _publisherArticleVersionInt64;
    NSString *_anfComponentId;
    NSString *_anfComponentRole;
    NSString *_anfComponentType;
    NSString *_articleId;
    NSString *_articleVersion;
    NSData *_articleViewingSessionId;
    NSMutableArray *_fractionalCohortMemberships;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_metadata;
    NSString *_sourceChannelId;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int publisherArticleVersionInt64:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSString *articleVersion; // @synthesize articleVersion=_articleVersion;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *anfComponentRole; // @synthesize anfComponentRole=_anfComponentRole;
@property(retain, nonatomic) NSString *anfComponentId; // @synthesize anfComponentId=_anfComponentId;
@property(retain, nonatomic) NSString *anfComponentType; // @synthesize anfComponentType=_anfComponentType;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(nonatomic) BOOL hasBackendArticleVersionInt64;
@property(nonatomic) BOOL hasPublisherArticleVersionInt64;
@property(readonly, nonatomic) BOOL hasArticleVersion;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(readonly, nonatomic) BOOL hasAnfComponentRole;
@property(readonly, nonatomic) BOOL hasAnfComponentId;
@property(readonly, nonatomic) BOOL hasAnfComponentType;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleId;

@end
