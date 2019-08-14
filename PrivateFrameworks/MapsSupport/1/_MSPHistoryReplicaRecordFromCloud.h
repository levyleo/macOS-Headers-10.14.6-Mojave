//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryReplicaRecord-Protocol.h>
#import <MapsSupport/MSPReplicaRecordFromCloud-Protocol.h>

@class MSPVectorTimestamp, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _MSPHistoryReplicaRecordFromCloud : NSObject <MSPHistoryReplicaRecord, MSPReplicaRecordFromCloud>
{
    BOOL _tombstoneRepresentedByCloudRecord;
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

+ (id)tombstone;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord; // @synthesize tombstoneRepresentedByCloudRecord=_tombstoneRepresentedByCloudRecord;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_initAsTombstone;
- (id)initWithCloudRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
