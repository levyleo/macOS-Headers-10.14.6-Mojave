//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSSNewsAnalyticsEnvelopeTracker : NSObject
{
}

+ (id)_daysSinceSubmissionDateProperty;
+ (id)_contentTypeProperty;
+ (void)_registerContentTypes:(id)arg1 withEventName:(id)arg2;
+ (void)_registerEnvelopes:(id)arg1 withEventName:(id)arg2;
+ (void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3;
+ (void)registerEnvelopeContentTypesAsUploaded:(id)arg1;
+ (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1;
+ (void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1;
+ (void)registerEnvelopesAsReceivedByUploader:(id)arg1;
+ (void)registerEnvelopesAsSubmittedToUploader:(id)arg1;
+ (void)registerEnvelopesAsCreated:(id)arg1;
+ (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;

@end
