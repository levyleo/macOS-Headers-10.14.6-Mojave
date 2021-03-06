//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FamilyCircle/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol FAServiceProtocol <NSObject>
- (void)launchiCloudFamilySettings;
- (void)updateFamilyMemberFlagWithDSID:(NSNumber *)arg1 flag:(NSString *)arg2 enabled:(BOOL)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)didReceiveFamilyEventPushNotificationWithPayload:(NSDictionary *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)clearFamilyCircleCacheWithReplyBlock:(void (^)(NSError *))arg1;
- (void)registerPushToken:(NSData *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)dispatchFamilyPushNotificationWithPayload:(NSDictionary *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)fetchFamilyMemberPhotoWithDSID:(NSNumber *)arg1 hashedDSID:(NSString *)arg2 size:(long long)arg3 localFallback:(BOOL)arg4 options:(NSDictionary *)arg5 replyBlock:(void (^)(NSData *, long long, NSError *))arg6;
- (void)removeFamilyMemberWithDSID:(NSNumber *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(BOOL, NSNumber *, NSError *))arg3;
- (void)addFamilyMemberWithAppleID:(NSString *)arg1 password:(NSString *)arg2 isUnder13:(BOOL)arg3 options:(NSDictionary *)arg4 replyBlock:(void (^)(BOOL, NSString *, NSError *))arg5;
- (void)fetchFamilyCircleWithExpectedDSIDs:(NSArray *)arg1 signedInAccountShouldBeApprover:(BOOL)arg2 forceServerFetch:(BOOL)arg3 doNotFetchFromServer:(BOOL)arg4 options:(NSDictionary *)arg5 replyBlock:(void (^)(NSDictionary *, FAFamilyCircle *, NSError *))arg6;
@end

