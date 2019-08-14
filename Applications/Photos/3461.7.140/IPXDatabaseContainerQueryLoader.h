//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, PFDispatchQueue, RDModelNotification;
@protocol IPXDatabaseContainerQueryLoaderDelegate, PFDispatchQueueClearing;

@interface IPXDatabaseContainerQueryLoader : NSObject
{
    NSMutableDictionary *_queuedContainerQueriesByUUID;
    NSMutableArray *_queuedContainerQueries;
    NSMutableArray *_loadingContainerQueries;
    NSArray *_orderedContainerUUIDs;
    RDModelNotification *_recordedCreateNotification;
    RDModelNotification *_recordedUpdateNotification;
    RDModelNotification *_recordedDeleteNotification;
    CDUnknownBlockType _versionsFetchHandler;
    BOOL _shouldRunVersionsFetchHandlerUponScheduling;
    PFDispatchQueue<PFDispatchQueueClearing> *_backgroundLoadingQueue;
    PFDispatchQueue *_backgroundIsolationQueue;
    double _backgroundLoadingStartTime;
    unsigned long long _backgroundLoadedQueryCount;
    unsigned long long _backgroundFetchBatchSize;
    BOOL _needToStartBackgroundFetch;
    BOOL _ascending;
    NSArray *_containerQueries;
    id <IPXDatabaseContainerQueryLoaderDelegate> _delegate;
}

@property BOOL ascending; // @synthesize ascending=_ascending;
@property(nonatomic) __weak id <IPXDatabaseContainerQueryLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *containerQueries; // @synthesize containerQueries=_containerQueries;
- (void).cxx_destruct;
- (void)processContainerDeleteNotification:(id)arg1;
- (void)processContainerUpdateNotification:(id)arg1 forKeyPaths:(id)arg2;
- (void)processContainerCreateNotification:(id)arg1;
- (void)runVersionsFetchHandlerIfNeeded;
- (void)scheduleVersionsFetchHandler:(CDUnknownBlockType)arg1;
- (void)prioritizeContainersWithUUIDs:(id)arg1 neighborCount:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isLoadingInProgress) BOOL loadingInProgress;
- (void)stop;
- (void)startIfNeeded;
- (void)_backgroundFetchDidFinish;
- (void)_runVersionsFetchHandler:(CDUnknownBlockType)arg1;
- (void)_handleNextContainerQueryBatch;
- (void)_processContainerQuery:(id)arg1;
- (void)_sendBackgroundFetchDidFinishIfNeeded;
- (id)init;
- (id)initWithContainerQueries:(id)arg1;

@end
