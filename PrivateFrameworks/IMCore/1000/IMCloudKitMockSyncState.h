//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface IMCloudKitMockSyncState : NSObject
{
    BOOL _IMCloudKitSyncingEnabled;
    BOOL _IMCloudKitIsSyncing;
    BOOL _IMCloudKitSyncPaused;
    BOOL _IMCloudKitIsEligibleForTruthZone;
    BOOL _IMCloudKitIsInExitState;
    BOOL _IMCloudKitIsRemovedFromBackup;
    BOOL _IMCloudKitStartingPeriodicSync;
    BOOL _IMCloudKitStartingInitialSync;
    BOOL _IMCloudKitStartingDisableDevices;
    NSDate *_IMCloudKitSyncDate;
    long long _IMCloudKitStartingEnabledSettingChange;
    unsigned long long _IMCloudKitSyncControllerSyncState;
    long long _IMCloudKitSyncControllerSyncType;
    long long _IMCloudKitSyncControllerSyncRecordType;
    NSArray *_IMCloudKitSyncErrors;
}

@property(retain) NSArray *IMCloudKitSyncErrors; // @synthesize IMCloudKitSyncErrors=_IMCloudKitSyncErrors;
@property long long IMCloudKitSyncControllerSyncRecordType; // @synthesize IMCloudKitSyncControllerSyncRecordType=_IMCloudKitSyncControllerSyncRecordType;
@property long long IMCloudKitSyncControllerSyncType; // @synthesize IMCloudKitSyncControllerSyncType=_IMCloudKitSyncControllerSyncType;
@property unsigned long long IMCloudKitSyncControllerSyncState; // @synthesize IMCloudKitSyncControllerSyncState=_IMCloudKitSyncControllerSyncState;
@property BOOL IMCloudKitStartingDisableDevices; // @synthesize IMCloudKitStartingDisableDevices=_IMCloudKitStartingDisableDevices;
@property long long IMCloudKitStartingEnabledSettingChange; // @synthesize IMCloudKitStartingEnabledSettingChange=_IMCloudKitStartingEnabledSettingChange;
@property BOOL IMCloudKitStartingInitialSync; // @synthesize IMCloudKitStartingInitialSync=_IMCloudKitStartingInitialSync;
@property BOOL IMCloudKitStartingPeriodicSync; // @synthesize IMCloudKitStartingPeriodicSync=_IMCloudKitStartingPeriodicSync;
@property(retain) NSDate *IMCloudKitSyncDate; // @synthesize IMCloudKitSyncDate=_IMCloudKitSyncDate;
@property BOOL IMCloudKitIsRemovedFromBackup; // @synthesize IMCloudKitIsRemovedFromBackup=_IMCloudKitIsRemovedFromBackup;
@property BOOL IMCloudKitIsInExitState; // @synthesize IMCloudKitIsInExitState=_IMCloudKitIsInExitState;
@property BOOL IMCloudKitIsEligibleForTruthZone; // @synthesize IMCloudKitIsEligibleForTruthZone=_IMCloudKitIsEligibleForTruthZone;
@property BOOL IMCloudKitSyncPaused; // @synthesize IMCloudKitSyncPaused=_IMCloudKitSyncPaused;
@property BOOL IMCloudKitIsSyncing; // @synthesize IMCloudKitIsSyncing=_IMCloudKitIsSyncing;
@property BOOL IMCloudKitSyncingEnabled; // @synthesize IMCloudKitSyncingEnabled=_IMCloudKitSyncingEnabled;
- (void).cxx_destruct;
- (id)convertToDictionary;

@end

