//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/ASDStream.h>

@class ASDAudioDevice, ASDDSPGraph, ASDStreamDSPConfiguration, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ASDDSPStream : ASDStream
{
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper>> _streamHelper;
    struct list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper>> _graphHelpers;
    struct unique_ptr<ca::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, 3>, std::__1::default_delete<ca::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, 3>>> _clientToGraphMap;
    NSObject<OS_dispatch_queue> *_dspQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isRunning;
    long long _maximumFramesPerIOCycle;
    NSUserDefaults *_defaults;
    NSArray *_underlyingStreams;
    long long _graphAudioValidationMode;
    long long _ioReferenceCount;
    BOOL _keepGraphInitialized;
    ASDStreamDSPConfiguration *_currentDSPConfiguration;
}

@property(nonatomic) BOOL keepGraphInitialized; // @synthesize keepGraphInitialized=_keepGraphInitialized;
@property(retain, nonatomic) ASDStreamDSPConfiguration *currentDSPConfiguration; // @synthesize currentDSPConfiguration=_currentDSPConfiguration;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (CDUnknownBlockType)writeMixBlock;
- (CDUnknownBlockType)processOutputBlock;
- (CDUnknownBlockType)readInputBlock;
- (id)clientDSPForClient:(unsigned int)arg1;
- (id)_hardwareDSP;
@property(readonly, nonatomic) ASDDSPGraph *hardwareDSP;
- (BOOL)removeClientDSPForClient:(unsigned int)arg1;
- (BOOL)addClientDSP:(id)arg1 forClient:(unsigned int)arg2;
- (BOOL)removeHardwareDSP;
- (BOOL)addHardwareDSP:(id)arg1;
- (void)_updateLatency;
@property(readonly, nonatomic) long long maximumFramesPerIOCycle;
- (void)_updateMaximumFramesPerIOCycle;
- (void)updateLatency;
- (void)_resumeProcessing;
- (void)resumeProcessing;
- (void)_suspendProcessing;
- (void)suspendProcessing;
- (BOOL)graphStructureIsValid:(id)arg1 clientID:(unsigned long long)arg2;
- (BOOL)removeClientDSPwithKey:(unsigned long long)arg1;
- (BOOL)addClientDSP:(id)arg1 withKey:(unsigned long long)arg2;
- (void)_allocateStreamingResourcesForGraphHelper:(struct ASDDSPGraphHelper *)arg1;
- (void)_deallocateStreamingResources;
- (BOOL)_allocateStreamingResources;
- (BOOL)changePhysicalFormat:(id)arg1;
- (void)stopStream;
- (void)startStream;
@property(nonatomic) long long graphAudioValidationMode;
@property(retain, nonatomic) NSArray *underlyingStreams;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;

@end
