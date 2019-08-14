//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, HMDHome, NSArray, NSDictionary, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>
{
    HMDHome *_home;
    NSDictionary *_userPresenceMap;
    HMDDevice *_lastUpdateByDevice;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDDevice *lastUpdateByDevice; // @synthesize lastUpdateByDevice=_lastUpdateByDevice;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (BOOL)areUsersNotAtHome:(id)arg1;
- (BOOL)areUsersAtHome:(id)arg1;
- (BOOL)isUserNotAtHome:(id)arg1;
- (BOOL)isUserAtHome:(id)arg1;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;
@property(readonly, nonatomic) NSArray *authorizedUsers;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
