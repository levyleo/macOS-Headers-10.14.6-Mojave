//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRAnalyticsReferral, NSString;
@protocol FCHeadlineProviding;

@interface FRReportConcernObject : NSObject
{
    BOOL _isUserSubscribedToParentFeed;
    id <FCHeadlineProviding> _headline;
    unsigned long long _contentType;
    NSString *_contentID;
    long long _articleHostViewType;
    long long _feedType;
    long long _parentFeedType;
    NSString *_parentFeedID;
    long long _feedViewPresentationReason;
    NSString *_feedViewSearchText;
    long long _feedPickerSection;
    unsigned long long _reportType;
    NSString *_comments;
    NSString *_groupFeedId;
    long long _groupType;
    NSString *_backEndArticleVersion;
    NSString *_publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_previousArticleID;
    long long _previousArticleVersion;
    FRAnalyticsReferral *_referral;
}

@property(retain, nonatomic) FRAnalyticsReferral *referral; // @synthesize referral=_referral;
@property(nonatomic) long long previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(copy, nonatomic) NSString *previousArticleID; // @synthesize previousArticleID=_previousArticleID;
@property(copy, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(copy, nonatomic) NSString *publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(copy, nonatomic) NSString *backEndArticleVersion; // @synthesize backEndArticleVersion=_backEndArticleVersion;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(copy, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) long long feedPickerSection; // @synthesize feedPickerSection=_feedPickerSection;
@property(copy, nonatomic) NSString *feedViewSearchText; // @synthesize feedViewSearchText=_feedViewSearchText;
@property(nonatomic) long long feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
@property(nonatomic) BOOL isUserSubscribedToParentFeed; // @synthesize isUserSubscribedToParentFeed=_isUserSubscribedToParentFeed;
@property(copy, nonatomic) NSString *parentFeedID; // @synthesize parentFeedID=_parentFeedID;
@property(nonatomic) long long parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long articleHostViewType; // @synthesize articleHostViewType=_articleHostViewType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;

@end
