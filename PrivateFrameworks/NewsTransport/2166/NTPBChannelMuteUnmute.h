//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying>
{
    long long _previousArticlePublisherArticleVersion;
    NSString *_articleId;
    NSData *_articleSessionId;
    NSString *_articleSessionIdDeprecated;
    NSData *_articleViewingSessionId;
    NSString *_articleViewingSessionIdDeprecated;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_channelMuteUnmuteFeedId;
    NSString *_creativeId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSString *_feedViewExposureIdDeprecated;
    int _feedViewPresentationReason;
    int _groupType;
    NSData *_groupViewExposureId;
    int _muteUnmuteLocation;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sourceChannelId;
    int _userAction;
    BOOL _isSearchResultArticle;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int feedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int groupType:1;
        unsigned int muteUnmuteLocation:1;
        unsigned int userAction:1;
        unsigned int isSearchResultArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(nonatomic) BOOL isSearchResultArticle; // @synthesize isSearchResultArticle=_isSearchResultArticle;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *feedViewExposureIdDeprecated; // @synthesize feedViewExposureIdDeprecated=_feedViewExposureIdDeprecated;
@property(retain, nonatomic) NSString *channelMuteUnmuteFeedId; // @synthesize channelMuteUnmuteFeedId=_channelMuteUnmuteFeedId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleViewingSessionIdDeprecated; // @synthesize articleViewingSessionIdDeprecated=_articleViewingSessionIdDeprecated;
@property(retain, nonatomic) NSString *articleSessionIdDeprecated; // @synthesize articleSessionIdDeprecated=_articleSessionIdDeprecated;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
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
@property(readonly, nonatomic) BOOL hasGroupViewExposureId;
@property(nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property(readonly, nonatomic) BOOL hasPreviousArticleId;
@property(nonatomic) BOOL hasIsSearchResultArticle;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (id)feedViewPresentationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedViewPresentationReason;
@property(nonatomic) int feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
@property(readonly, nonatomic) BOOL hasCreativeId;
@property(readonly, nonatomic) BOOL hasCampaignType;
@property(readonly, nonatomic) BOOL hasCampaignId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleSessionId;
@property(nonatomic) BOOL hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) BOOL hasFeedViewExposureIdDeprecated;
@property(readonly, nonatomic) BOOL hasChannelMuteUnmuteFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionIdDeprecated;
@property(readonly, nonatomic) BOOL hasArticleSessionIdDeprecated;
@property(readonly, nonatomic) BOOL hasReferencedArticleId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasMuteUnmuteLocation;
@property(nonatomic) int muteUnmuteLocation; // @synthesize muteUnmuteLocation=_muteUnmuteLocation;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end
