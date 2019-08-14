//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging>
{
    HMDAccountRegistry *_accountRegistry;
    long long _qualityOfService;
}

+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)arg1 secure:(BOOL)arg2 accountRegistry:(id)arg3;
+ (unsigned long long)restriction;
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void).cxx_destruct;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (BOOL)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (void)start;
@property(readonly, nonatomic, getter=isSecure) BOOL secure;
- (id)initWithAccountRegistry:(id)arg1;
- (BOOL)canSendMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
