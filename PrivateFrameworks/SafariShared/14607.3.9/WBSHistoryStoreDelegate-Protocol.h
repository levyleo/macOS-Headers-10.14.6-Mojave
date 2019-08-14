//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>

@class NSArray, WBSHistoryDeletionPlan;
@protocol WBSHistoryStore;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (void)historyStoreWasCleared:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;

@optional
- (BOOL)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;
@end
