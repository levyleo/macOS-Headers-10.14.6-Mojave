//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, PLCFNotificationOperatorComposition, PLKQueue, PLNSNotificationOperatorComposition, PLSQLiteConnection, PLStorageOperator, PLTimer, PLXPCResponderOperatorComposition;
@protocol OS_dispatch_queue;

@interface PLCoreStorage : NSObject
{
    BOOL _storageReady;
    BOOL _storageLocked;
    PLSQLiteConnection *_connection;
    NSString *_uuid;
    PLKQueue *_profileDefaultsKQueue;
    PLTimer *_dailyTaskTimer;
    PLTimer *_flushCachesTimer;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLCFNotificationOperatorComposition *_flushCachesCFNotification;
    PLCFNotificationOperatorComposition *_blockingFlushCachesCFNotification;
    PLCFNotificationOperatorComposition *_keybagFirstUnlockNotification;
    PLXPCResponderOperatorComposition *_safeFileResponder;
    PLXPCResponderOperatorComposition *_XPCFlushCacheResponder;
    PLXPCResponderOperatorComposition *_blPathResponder;
    PLXPCResponderOperatorComposition *_archivesResponder;
    PLXPCResponderOperatorComposition *_quarantineResponder;
    PLStorageOperator *_storageOperator;
    NSMutableSet *_safeCopyInProgress;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSMutableDictionary *_processIDCache;
}

+ (id)additionalTables;
+ (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long long)arg4;
+ (id)allOperatorTablesToTrimConditionsForTrimDate:(id)arg1;
+ (id)storageQueueNameForEntryKey:(id)arg1;
+ (id)storageQueueNameForClass:(Class)arg1;
@property(retain, nonatomic) NSMutableDictionary *processIDCache; // @synthesize processIDCache=_processIDCache;
@property(retain) NSObject<OS_dispatch_queue> *utilityQueue; // @synthesize utilityQueue=_utilityQueue;
@property(retain) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain) NSMutableSet *safeCopyInProgress; // @synthesize safeCopyInProgress=_safeCopyInProgress;
@property(retain) PLStorageOperator *storageOperator; // @synthesize storageOperator=_storageOperator;
@property(retain) PLXPCResponderOperatorComposition *quarantineResponder; // @synthesize quarantineResponder=_quarantineResponder;
@property(retain) PLXPCResponderOperatorComposition *archivesResponder; // @synthesize archivesResponder=_archivesResponder;
@property(retain) PLXPCResponderOperatorComposition *blPathResponder; // @synthesize blPathResponder=_blPathResponder;
@property(retain) PLXPCResponderOperatorComposition *XPCFlushCacheResponder; // @synthesize XPCFlushCacheResponder=_XPCFlushCacheResponder;
@property(retain) PLXPCResponderOperatorComposition *safeFileResponder; // @synthesize safeFileResponder=_safeFileResponder;
@property(retain) PLCFNotificationOperatorComposition *keybagFirstUnlockNotification; // @synthesize keybagFirstUnlockNotification=_keybagFirstUnlockNotification;
@property(retain) PLCFNotificationOperatorComposition *blockingFlushCachesCFNotification; // @synthesize blockingFlushCachesCFNotification=_blockingFlushCachesCFNotification;
@property(retain) PLCFNotificationOperatorComposition *flushCachesCFNotification; // @synthesize flushCachesCFNotification=_flushCachesCFNotification;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLTimer *flushCachesTimer; // @synthesize flushCachesTimer=_flushCachesTimer;
@property(retain) PLTimer *dailyTaskTimer; // @synthesize dailyTaskTimer=_dailyTaskTimer;
@property(retain) PLKQueue *profileDefaultsKQueue; // @synthesize profileDefaultsKQueue=_profileDefaultsKQueue;
@property(nonatomic) BOOL storageLocked; // @synthesize storageLocked=_storageLocked;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property BOOL storageReady; // @synthesize storageReady=_storageReady;
@property(retain) PLSQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)willSwitchUser;
- (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long long)arg4;
- (id)aggregateEntriesForKey:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg3;
- (void)enumerateProcessIDCacheWithBlock:(CDUnknownBlockType)arg1;
- (void)removeProcessIDCacheForPidNumber:(id)arg1;
- (void)removeProcessIDCacheForPid:(int)arg1;
- (void)cacheProcessIDEntry:(id)arg1;
- (id)processIDEntryForPid:(int)arg1;
- (id)lastEntriesForKey:(id)arg1 count:(long long)arg2 withFilters:(id)arg3;
- (id)lastEntryForKey:(id)arg1 withFilters:(id)arg2;
- (id)lastEntryForKey:(id)arg1 withIDLessThan:(long long)arg2;
- (id)lastEntryForKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(BOOL)arg3;
- (id)lastEntryForKey:(id)arg1 withSubEntryKey:(id)arg2;
- (id)lastEntryForKey:(id)arg1;
- (id)firstEntryForKey:(id)arg1;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 count:(long long)arg3 withFilters:(id)arg4;
- (id)entryForKey:(id)arg1 withID:(long long)arg2;
- (id)entriesForKey:(id)arg1 before:(BOOL)arg2 timeInterval:(double)arg3 count:(long long)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2 withCountOfEntriesBefore:(long long)arg3 withCountOfEntriesAfter:(long long)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2 withFilters:(id)arg3;
- (id)entriesForKey:(id)arg1 withQuery:(id)arg2;
- (id)entriesForKey:(id)arg1 withComparisons:(id)arg2;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)entriesForKey:(id)arg1;
- (void)processEntriesForKey:(id)arg1 withProperties:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (long long)countOfEntriesForKey:(id)arg1;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2 withFilters:(id)arg3;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 WithRowID:(long long)arg2;
- (void)deleteEntry:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)writeAggregateEntry:(id)arg1;
- (void)writeProportionateAggregateEntry:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)blockingUpdateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_updateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)blockingWriteEntry:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)writeEntry:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (long long)writeEntry:(id)arg1;
- (void)writeEntries:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)checkCacheSizeForFlush;
- (long long)generalEntryCacheSizeLimit;
- (void)dispatchSyncForEntryKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dispatchAsyncForEntryKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)flushCachesIfRequiredForEntryKey:(id)arg1;
- (void)blockingFlushQueues:(id)arg1;
- (void)blockingFlushCachesWithReason:(id)arg1;
- (void)flushCachesWithReason:(id)arg1;
- (void)removeStorageForEntryKey:(id)arg1;
- (void)setupStorageForOperatorClass:(Class)arg1;
- (void)setupStorageForOperatorName:(id)arg1;
- (void)setupStorageForOperator:(id)arg1;
- (void)setupStorageForEntryKey:(id)arg1;
- (void)setupCoveringIndexOnTable:(id)arg1 withColumns:(id)arg2;
- (void)setupArrayForTableName:(id)arg1 forColumnNamed:(id)arg2 withValueType:(short)arg3 withShouldIndexFKID:(BOOL)arg4;
- (void)setupTableName:(id)arg1 withEntryKeyConfig:(id)arg2 withKeyOrder:(id)arg3 isDynamic:(BOOL)arg4 withShouldIndexFKID:(BOOL)arg5;
- (short)verifySchemaVersionOfTable:(id)arg1 matchesExpectedVersion:(double)arg2;
- (void)handleSchemaMismatchForTable:(id)arg1 expectedVersion:(double)arg2 schemaMatch:(short)arg3;
- (void)cleanupQuarantine;
- (void)cleanupTmp;
- (void)dailyTasks;
- (void)removeOldPowerlogFiles;
- (void)initOperatorDependancies;
- (void)stopStorage;
- (void)addAggdModeKeys;
- (void)startStorage;
- (void)dealloc;
- (id)init;

@end
