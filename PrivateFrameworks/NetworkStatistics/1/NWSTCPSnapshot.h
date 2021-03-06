//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSData, NSString;

@interface NWSTCPSnapshot : NWSProtocolSnapshot
{
    NSString *_congestionAlgorithm;
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_tcp_descriptor _descriptor;
    unsigned int _provider;
}

- (void).cxx_destruct;
- (id)initWithCounts:(const struct nstat_counts *)arg1 TCPDescriptor:(struct nstat_tcp_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 provider:(unsigned int)arg5;
- (id)description;
- (id)traditionalDictionary;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapStartTime;
- (BOOL)countsIncludeHeaderOverhead;
@property(readonly) BOOL writeProbeFailed;
@property(readonly) BOOL readProbeFailed;
@property(readonly) BOOL connProbeFailed;
@property(readonly) BOOL probeActivated;
@property(readonly) NSString *congestionAlgorithm;
- (id)remoteAddress;
- (id)localAddress;
- (id)vuuid;
- (id)euuid;
- (id)uuid;
- (id)processName;
@property(readonly) NSString *TCPState;
- (BOOL)interfaceExpensive;
- (BOOL)interfaceAWDL;
- (BOOL)interfaceWired;
- (BOOL)interfaceWifi;
- (BOOL)interfaceCellularViaFallback;
- (BOOL)interfaceCellular;
- (BOOL)interfaceLoopback;
- (BOOL)interfaceUnknown;
- (double)flowDuration;
- (unsigned long long)flowStartContinuousTime;
- (id)flowStartTimestamp;
- (unsigned int)connstatusWriteProbeFailed;
- (unsigned int)connstatusReadProbeFailed;
- (unsigned int)connstatusConnProbeFailed;
- (unsigned int)connstatusProbeActivated;
- (int)epid;
- (unsigned long long)eupid;
- (int)processID;
- (unsigned long long)uniqueProcessID;
@property(readonly) unsigned int trafficManagementFlags;
- (unsigned int)trafficClass;
@property(readonly) unsigned int txCongestionWindow;
@property(readonly) unsigned int txWindow;
@property(readonly) unsigned int txUnacked;
- (unsigned int)receiveBufferUsed;
- (unsigned int)receiveBufferSize;
@property(readonly) unsigned int sendBufferUsed;
@property(readonly) unsigned int sendBufferSize;
- (unsigned int)interfaceIndex;
- (id)provider;
@property(readonly) double rttVariation;
@property(readonly) double rttAverage;
@property(readonly) double rttMinimum;
@property(readonly) unsigned int connectSuccesses;
@property(readonly) unsigned int connectAttempts;
@property(readonly) unsigned int txRetransmittedBytes;
@property(readonly) unsigned int rxOutOfOrderBytes;
@property(readonly) unsigned int rxDuplicateBytes;

@end

