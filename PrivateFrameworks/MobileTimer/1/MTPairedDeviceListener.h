//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAgentNotificationListener-Protocol.h>
#import <MobileTimer/MTSyncStatusProvider-Protocol.h>

@class NRDevice, NSString;
@protocol MTSyncService;

@interface MTPairedDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTSyncStatusProvider>
{
    BOOL _pairedDeviceActive;
    unsigned int _pairedDeviceVersion;
    long long _mode;
    id <MTSyncService> _service;
    NRDevice *_pairedDevice;
}

@property(nonatomic) BOOL pairedDeviceActive; // @synthesize pairedDeviceActive=_pairedDeviceActive;
@property(nonatomic) unsigned int pairedDeviceVersion; // @synthesize pairedDeviceVersion=_pairedDeviceVersion;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) id <MTSyncService> service; // @synthesize service=_service;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)deviceDidChangeVersionDarwinNotification;
- (void)deviceDidUnpairOrBecomeInactiveNotification:(id)arg1;
- (void)deviceDidPairOrBecomeActiveNotification:(id)arg1;
- (BOOL)activePairedDeviceExists;
- (BOOL)syncReady;
- (void)_updateActiveDeviceInfo;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (void)_registerForLocalNotifications;
- (id)initWithMode:(long long)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

