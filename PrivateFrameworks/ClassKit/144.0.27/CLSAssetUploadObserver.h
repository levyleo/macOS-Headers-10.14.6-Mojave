//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/NSFilePresenter-Protocol.h>

@class CLSAsset, NSError, NSMetadataQuery, NSOperationQueue, NSSet, NSString, NSURL;

@interface CLSAssetUploadObserver : NSObject <NSFilePresenter>
{
    NSOperationQueue *_presentedItemOperationQueue;
    BOOL _uploaded;
    CLSAsset *_asset;
    double _uploadProgress;
    NSError *_uploadError;
    CDUnknownBlockType _onUploadProgress;
    CDUnknownBlockType _onUploadComplete;
    NSMetadataQuery *_query;
    CDUnknownBlockType _preCompleteHook;
    NSURL *_presentedItemURL;
    NSSet *_observedPresentedItemUbiquityAttributes;
}

@property(retain, nonatomic) NSSet *observedPresentedItemUbiquityAttributes; // @synthesize observedPresentedItemUbiquityAttributes=_observedPresentedItemUbiquityAttributes;
@property(copy, nonatomic) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(copy, nonatomic) CDUnknownBlockType preCompleteHook; // @synthesize preCompleteHook=_preCompleteHook;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;
@property(copy, nonatomic) CDUnknownBlockType onUploadProgress; // @synthesize onUploadProgress=_onUploadProgress;
@property(retain) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic, getter=isUploaded) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(retain, nonatomic) CLSAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_notifyOfChange;
- (void)_notifyOfCompletion;
- (void)_processItems:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)queryGatharedData:(id)arg1;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
