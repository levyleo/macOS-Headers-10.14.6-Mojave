//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSStreamDelegate-Protocol.h>
#import <SiriCore/NSURLSessionDelegate-Protocol.h>
#import <SiriCore/SiriCoreConnectionProvider-Protocol.h>

@class NSInputStream, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLSession, NSURLSessionStreamTask, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionType;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider>
{
    id <SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    BOOL _prefersWWAN;
    BOOL _connectByPOPEnabled;
    BOOL _enforceEV;
    BOOL _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    CDUnknownBlockType _completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer[10240];
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    BOOL _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    double _staleConnectionInterval;
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readData:(CDUnknownBlockType)arg1;
- (void)setStaleInterval:(double)arg1;
- (void)setEnforceExtendedValidation:(BOOL)arg1;
- (void)setConnectByPOPMethod:(BOOL)arg1;
- (void)setPrefersWWAN:(BOOL)arg1;
- (void)setProviderConnectionPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setRetransmitConnectionDropTime:(double)arg1;
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;
- (void)setScopeIsWiFiOnly;
- (BOOL)isCanceled;
- (BOOL)isReady;
- (BOOL)isEstablishing;
- (BOOL)isMultipath;
- (BOOL)shouldFallbackFromError:(id)arg1;
- (BOOL)isPeerNotNearbyError:(id)arg1;
- (BOOL)isPeerConnectionError:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (id)resolvedHost;
- (BOOL)providerStatsIndicatePoorLinkQuality;
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)analysisInfo;
- (id)connectionType;
- (BOOL)hasActiveConnection;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelOpenTimer;
- (void)_setupOpenTimer;
- (BOOL)supportsInitialPayload;
- (void)_cancelStaleConnectionTimer;
- (void)_setupStaleConnectionTimer;
- (void)_streamDidBecomeUnviable;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (BOOL)shouldFallbackQuickly;
- (id)headerDataWithForceReconnect:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
