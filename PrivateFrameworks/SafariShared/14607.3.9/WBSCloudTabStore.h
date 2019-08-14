//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudTabDeviceProvider-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WBSCloudTabDevice;
@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    BOOL _hasAttemptedToRemoveCurrentDeviceFromKVS;
    BOOL _isFetchingDataFromCloudKit;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    BOOL _syncAgentIsAvailable;
    id <WBSCloudTabStoreDelegate> _wbsDelegate;
}

+ (id)_debugErrorMessageForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1;
@property(readonly, nonatomic) BOOL syncAgentIsAvailable; // @synthesize syncAgentIsAvailable=_syncAgentIsAvailable;
@property(nonatomic) __weak id <WBSCloudTabStoreDelegate> wbsDelegate; // @synthesize wbsDelegate=_wbsDelegate;
- (void).cxx_destruct;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (id)_currentDeviceUUID;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_deviceIsStoredInCloudKit:(id)arg1;
- (id)_devicesByRemovingThisDeviceAndDevicesWithNoTabs:(id)arg1;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)arg1;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1;
- (void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4;
- (void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4;
- (unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2;
- (void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2;
- (BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3;
- (void)deleteAllDevicesFromCloudKit;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1;
- (void)pruneExpiredDevicesFromCloudKit;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property(readonly, nonatomic) BOOL currentDeviceIsRegisteredInCloudKit;
@property(readonly, nonatomic) BOOL atLeastOneOtherActiveDeviceIsRegisteredInCloudKit;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)handleCloseTabRequestsFromKVS;
- (BOOL)closeAllTabsOnDevice:(id)arg1;
- (BOOL)closeTabs:(id)arg1 onDevice:(id)arg2;
- (BOOL)closeTab:(id)arg1 onDevice:(id)arg2;
@property(readonly, nonatomic) BOOL atLeastOneOtherActiveDeviceIsRegistered;
- (void)pruneExpiredDevicesFromKVS;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
@property(readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property(readonly, copy, nonatomic) NSDate *dateOfLastCloudTabDevicesUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
