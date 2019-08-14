//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

@class NSCloudKitMirroringRequestOptions, NSUUID;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest
{
    NSUUID *_requestIdentifier;
    NSCloudKitMirroringRequestOptions *_options;
    CDUnknownBlockType _requestCompletionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(readonly, copy, nonatomic) NSCloudKitMirroringRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (BOOL)validateForUseWithStore:(id)arg1 error:(id *)arg2;
- (id)description;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
