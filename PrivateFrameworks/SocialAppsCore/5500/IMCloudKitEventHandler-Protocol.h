//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialAppsCore/NSObject-Protocol.h>

@class IMCloudKitEventNotificationManager, IMCloudKitSyncProgress, IMCloudKitSyncState, IMCloudKitSyncStatistics, NSError, NSString;

@protocol IMCloudKitEventHandler <NSObject>

@optional
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(NSString *)arg4 error:(NSError *)arg5;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncProgressDidUpdate:(IMCloudKitSyncProgress *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didFetchSyncStatistics:(IMCloudKitSyncStatistics *)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncStateDidChange:(IMCloudKitSyncState *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didChangeEnabled:(BOOL)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didDisableAllDevices:(BOOL)arg2 error:(NSError *)arg3;
@end
