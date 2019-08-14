//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface TCKDatabase : NSObject
{
    NSMutableArray *_tQueriedRecordTypes;
    NSMutableArray *_tQueriedRecordZonesNames;
    NSMutableArray *_tFetchedRecords;
    NSMutableArray *_tFetchedChangedRecordZoneNames;
    NSMutableArray *_tQueriedRecords;
    NSMutableArray *_tSavedRecords;
    NSMutableSet *_tSavedRecordIDs;
    NSMutableArray *_tSavedZones;
    NSMutableArray *_tDeletedZoneIDs;
    NSMutableArray *_tDeletedRecordIDs;
    NSMutableArray *_tSavedSubscriptions;
    CDUnknownBlockType _tQueryHandler;
    CDUnknownBlockType _tFetchRecordsHandler;
    CDUnknownBlockType _tModifyRecordsOperationHandler;
    CDUnknownBlockType _tModifyRecordsHandler;
    CDUnknownBlockType _tFetchZonesHandler;
    CDUnknownBlockType _tModifyZonesHandler;
    CDUnknownBlockType _tFetchZoneChangesHandler;
    CDUnknownBlockType _tFetchRecordZoneChangesOperationHandler;
    CDUnknownBlockType _tFetchDatabaseChangesHandler;
}

+ (id)tRecordsForQuery:(id)arg1 zoneID:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType tFetchDatabaseChangesHandler; // @synthesize tFetchDatabaseChangesHandler=_tFetchDatabaseChangesHandler;
@property(copy, nonatomic) CDUnknownBlockType tFetchRecordZoneChangesOperationHandler; // @synthesize tFetchRecordZoneChangesOperationHandler=_tFetchRecordZoneChangesOperationHandler;
@property(copy, nonatomic) CDUnknownBlockType tFetchZoneChangesHandler; // @synthesize tFetchZoneChangesHandler=_tFetchZoneChangesHandler;
@property(copy, nonatomic) CDUnknownBlockType tModifyZonesHandler; // @synthesize tModifyZonesHandler=_tModifyZonesHandler;
@property(copy, nonatomic) CDUnknownBlockType tFetchZonesHandler; // @synthesize tFetchZonesHandler=_tFetchZonesHandler;
@property(copy, nonatomic) CDUnknownBlockType tModifyRecordsHandler; // @synthesize tModifyRecordsHandler=_tModifyRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType tModifyRecordsOperationHandler; // @synthesize tModifyRecordsOperationHandler=_tModifyRecordsOperationHandler;
@property(copy, nonatomic) CDUnknownBlockType tFetchRecordsHandler; // @synthesize tFetchRecordsHandler=_tFetchRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType tQueryHandler; // @synthesize tQueryHandler=_tQueryHandler;
@property(retain, nonatomic) NSMutableArray *tSavedSubscriptions; // @synthesize tSavedSubscriptions=_tSavedSubscriptions;
@property(retain, nonatomic) NSMutableArray *tDeletedRecordIDs; // @synthesize tDeletedRecordIDs=_tDeletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *tDeletedZoneIDs; // @synthesize tDeletedZoneIDs=_tDeletedZoneIDs;
@property(retain, nonatomic) NSMutableArray *tSavedZones; // @synthesize tSavedZones=_tSavedZones;
@property(retain, nonatomic) NSMutableSet *tSavedRecordIDs; // @synthesize tSavedRecordIDs=_tSavedRecordIDs;
@property(retain, nonatomic) NSMutableArray *tSavedRecords; // @synthesize tSavedRecords=_tSavedRecords;
@property(retain, nonatomic) NSMutableArray *tQueriedRecords; // @synthesize tQueriedRecords=_tQueriedRecords;
@property(retain, nonatomic) NSMutableArray *tFetchedChangedRecordZoneNames; // @synthesize tFetchedChangedRecordZoneNames=_tFetchedChangedRecordZoneNames;
@property(retain, nonatomic) NSMutableArray *tFetchedRecords; // @synthesize tFetchedRecords=_tFetchedRecords;
@property(retain, nonatomic) NSMutableArray *tQueriedRecordZonesNames; // @synthesize tQueriedRecordZonesNames=_tQueriedRecordZonesNames;
@property(retain, nonatomic) NSMutableArray *tQueriedRecordTypes; // @synthesize tQueriedRecordTypes=_tQueriedRecordTypes;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
