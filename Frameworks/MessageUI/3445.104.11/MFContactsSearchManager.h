//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteStore, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFContactsSearchManager : NSObject
{
    NSMutableDictionary *_taskContextsByTaskID;
    CNAutocompleteStore *_autocompleteStore;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    unsigned long long _searchTypes;
    NSArray *_explicitSearchAccountIDs;
    NSArray *_searchAccounts;
    int _contactSearchAccountChangedToken;
    BOOL _registeredForAddressBookChanges;
    NSMutableArray *_corecipientSearchTaskIDs;
    NSString *_sendingAddress;
    BOOL _includeUpcomingEventMembers;
    BOOL _simulatedResultsEnabled;
    NSString *_recentsBundleIdentifier;
    unsigned long long _implicitGroupCreationThreshold;
    unsigned long long _autocompleteSearchType;
    NSString *_sendingAccountIdentifier;
}

@property(readonly, nonatomic) NSArray *searchAccounts; // @synthesize searchAccounts=_searchAccounts;
@property(nonatomic, getter=isSimulatedResultsEnabled) BOOL simulatedResultsEnabled; // @synthesize simulatedResultsEnabled=_simulatedResultsEnabled;
@property(copy, nonatomic) NSString *sendingAccountIdentifier; // @synthesize sendingAccountIdentifier=_sendingAccountIdentifier;
@property(nonatomic) unsigned long long autocompleteSearchType; // @synthesize autocompleteSearchType=_autocompleteSearchType;
@property(nonatomic) BOOL includeUpcomingEventMembers; // @synthesize includeUpcomingEventMembers=_includeUpcomingEventMembers;
@property(nonatomic) unsigned long long implicitGroupCreationThreshold; // @synthesize implicitGroupCreationThreshold=_implicitGroupCreationThreshold;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(retain) NSArray *searchAccountIDs; // @synthesize searchAccountIDs=_explicitSearchAccountIDs;
@property(copy, nonatomic) NSString *recentsBundleIdentifier; // @synthesize recentsBundleIdentifier=_recentsBundleIdentifier;
- (void)dealloc;
- (void)cancelTaskWithID:(id)arg1;
- (void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3;
- (void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3;
- (void)removeRecipientResult:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_nextTaskID;
- (void)setSearchTypes:(unsigned long long)arg1;
- (id)init;
- (id)initWithAutocompleteSearchType:(unsigned long long)arg1;

@end
