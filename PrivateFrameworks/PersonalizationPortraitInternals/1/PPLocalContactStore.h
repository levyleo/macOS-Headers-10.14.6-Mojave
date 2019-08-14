//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, PPContactScorer, _PASLock;
@protocol SGSuggestionsServiceContactsProtocol;

@interface PPLocalContactStore : NSObject
{
    CNContactStore *_store;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsContactService;
    PPContactScorer *_contactScorer;
    _PASLock *_diskCacheLock;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (id)_allCNNameRecordsFromDiskCache:(id)arg1;
- (BOOL)_writeCNNameRecords:(id)arg1 history:(id)arg2 diskCache:(id)arg3 fullLoadFromSource:(BOOL)arg4;
- (id)_nameRecordKeysToFetch;
- (void)registerContactsChangeHistoryForClient:(id)arg1;
- (BOOL)clearChangeHistoryForClient:(id)arg1 history:(id)arg2;
- (id)contactsChangeHistoryForClient:(id)arg1 error:(id *)arg2;
- (id)_changeHistoryIdentifierForClient:(id)arg1;
- (void)_namesRecordsForAllFoundInAppsContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cnNameRecordsForAllContactsFromSource;
- (id)_cnNameRecordsForAllContacts;
- (id)_allNameRecordsFromAllSources;
- (id)_nameRecordFromCNContactChange:(id)arg1;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id *)arg2;
- (id)contactNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end
