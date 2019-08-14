//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/AuthenticationHintsDelegate-Protocol.h>
#import <Sharing/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, NSXPCListener;
@protocol AuthenticationHintsDelegate, OS_dispatch_queue, OS_os_transaction;

@interface SFAuthenticationHintsProvider : NSObject <NSXPCListenerDelegate, AuthenticationHintsDelegate>
{
    NSXPCConnection *_userConnection;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCListener *_listener;
    NSObject<OS_os_transaction> *_transaction;
    id <AuthenticationHintsDelegate> _hintsDelegate;
    NSMutableDictionary *_userXPCConnections;
}

+ (id)sharedInstance;
+ (void)start;
@property(retain) NSMutableDictionary *userXPCConnections; // @synthesize userXPCConnections=_userXPCConnections;
@property(retain) id <AuthenticationHintsDelegate> hintsDelegate; // @synthesize hintsDelegate=_hintsDelegate;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain) NSXPCConnection *userConnection; // @synthesize userConnection=_userConnection;
- (void).cxx_destruct;
- (void)notifyUserNameNotAvailable:(id)arg1;
- (void)invalidateAllUserConnections;
- (void)updateXPCConnectionForUserName:(id)arg1;
- (unsigned int)uidForUserName:(id)arg1;
- (id)hintsProviderProxy;
- (BOOL)connectionHasEntitlement;
- (void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)event:(long long)arg1 eventHints:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deactivateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)activate:(id)arg1 userName:(id)arg2 sessionUnlocked:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)activate:(id)arg1 userName:(id)arg2 mode:(long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListener;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
