//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVBMACAddress, AVBMSRPTalkerAttribute, AVBVirtualEntity, AVBVirtualStreamConnection, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface AVBVirtualStream : NSObject
{
    NSObject<OS_dispatch_semaphore> *_talkerSync;
    BOOL _connected;
    BOOL _streamingWait;
    BOOL _listenerReady;
    unsigned short _acmpFlags;
    unsigned short _vlanID;
    unsigned short _uniqueID;
    unsigned long long _streamID;
    AVBMACAddress *_destinationMAC;
    NSMutableArray *_listeners;
    AVBVirtualStreamConnection *_talker;
    AVBMSRPTalkerAttribute *_receivedTalkerAttribute;
    AVBVirtualEntity *_virtualEntity;
}

@property(nonatomic) AVBVirtualEntity *virtualEntity; // @synthesize virtualEntity=_virtualEntity;
@property(readonly, nonatomic) unsigned short uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) AVBMSRPTalkerAttribute *receivedTalkerAttribute; // @synthesize receivedTalkerAttribute=_receivedTalkerAttribute;
@property(nonatomic) BOOL listenerReady; // @synthesize listenerReady=_listenerReady;
@property(nonatomic) BOOL streamingWait; // @synthesize streamingWait=_streamingWait;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(retain) AVBVirtualStreamConnection *talker; // @synthesize talker=_talker;
@property(retain) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) unsigned short vlanID; // @synthesize vlanID=_vlanID;
@property(nonatomic) unsigned short acmpFlags; // @synthesize acmpFlags=_acmpFlags;
@property(copy) AVBMACAddress *destinationMAC; // @synthesize destinationMAC=_destinationMAC;
@property(nonatomic) unsigned long long streamID; // @synthesize streamID=_streamID;
- (void)dealloc;
- (id)debugInfoDictionary;
- (void)stopStream;
- (void)startStream;
- (BOOL)setStreamFormat:(id)arg1;
@property(nonatomic) NSObject<OS_dispatch_semaphore> *talkerSync; // @dynamic talkerSync;
- (BOOL)deregisterMSRPListener;
- (BOOL)registerMSRPListener;
- (BOOL)deregisterMSRPTalker;
- (BOOL)registerMSRPTalker;
- (void)calculateBandwidth;
@property(readonly, nonatomic) unsigned long long maximumBandwidth;
@property(readonly, nonatomic) unsigned int accumulatedLatency;
@property(readonly, nonatomic) unsigned short maximumIntervalFrames;
@property(readonly, nonatomic) unsigned short maximumFrameSize;
- (id)initWithUniqueID:(unsigned short)arg1;

@end
