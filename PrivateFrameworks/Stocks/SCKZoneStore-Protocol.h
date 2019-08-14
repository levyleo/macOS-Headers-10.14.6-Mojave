//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CKServerChangeToken, NSArray, NSDate, SCKZoneDiff;

@protocol SCKZoneStore
@property(copy, nonatomic) NSArray *pendingCommands;
@property(copy, nonatomic) NSArray *serverRecords;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
@end
