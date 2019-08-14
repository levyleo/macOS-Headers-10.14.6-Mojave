//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRApplicationActivity, NSArray, NSMutableArray, _MRDeviceInfoMessageProtobuf, _MRNowPlayingClientProtobuf, _MROriginProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _canBeNowPlayingApp;
    double _canBeNowPlayingAppTimestamp;
    BOOL _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    CDUnknownBlockType _playbackQueueCallback;
    CDUnknownBlockType _playbackQueueTransactionCallback;
    CDUnknownBlockType _capabilitiesCallback;
    CDUnknownBlockType _commandCallback;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    NSMutableArray *_nowPlayingClients;
    unsigned int _hardwareRemoteBehavior;
    _MRNowPlayingClientProtobuf *_activeNowPlayingClient;
    _MROriginProtobuf *_origin;
}

@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)restoreNowPlayingClientState;
- (void)_unregisterMediaServerNotifications;
- (void)_registerMediaServerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)removeClient:(id)arg1;
- (id)nowPlayingClientForPlayerPath:(id)arg1;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
@property(retain, nonatomic) MRApplicationActivity *activity;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *activeNowPlayingClient; // @synthesize activeNowPlayingClient=_activeNowPlayingClient;
@property(nonatomic) BOOL canBeNowPlayingApp;
@property(nonatomic) unsigned int inputMode;
@property(nonatomic) unsigned int routeDiscoveryMode;
@property(nonatomic) BOOL isOverrideApp;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType commandCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueTransactionCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueCallback;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
@property(nonatomic) unsigned int volumeCapabilities;
- (void)dealloc;
- (id)initWithOrigin:(id)arg1;

@end
