//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUMetadataCacheDataProviderDelegate-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate>
{
    NSArray *_providers;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(readonly, copy, nonatomic) NSArray *providers; // @synthesize providers=_providers;
- (void).cxx_destruct;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(BOOL)arg2;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;
- (id)metadataForDestinationID:(id)arg1;
- (id)init;
- (id)initWithDataProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

