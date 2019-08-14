//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo, NSURL;

@interface VettingHandler : NSObject
{
    CKAccountOverrideInfo *_accountInfoOverride;
    NSURL *_url;
}

@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
- (void).cxx_destruct;
- (void)completeVettingWithCompletionHandler:(CDUnknownBlockType)arg1 willIssueCompletionOperationHandler:(CDUnknownBlockType)arg2;
- (void)fetchVettingRecordWithVettingToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCloudKitURL:(id)arg1;

@end
