//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsAnalyticsUpload/NSCopying-Protocol.h>

@class NSDate, NSString;

@protocol NDAnalyticsEnvelopeStoreEntry <NSCopying>
@property(readonly, nonatomic) int envelopeContentType;
@property(readonly, copy, nonatomic) NSDate *envelopeSubmissionDate;
@property(readonly, copy, nonatomic) NSString *envelopeIdentifier;
@end
