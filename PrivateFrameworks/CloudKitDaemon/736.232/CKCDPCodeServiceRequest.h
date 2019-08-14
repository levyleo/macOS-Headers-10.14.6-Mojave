//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestRequestContext, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequest : PBRequest <NSCopying>
{
    CKCDPCodeServiceRequestAccountConfig *_accountConfig;
    NSMutableArray *_clientConfigs;
    NSString *_functionName;
    CKCDPCodeServiceRequestRequestContext *_requestContext;
    int _serializationFormat;
    NSData *_serializedParameters;
    NSString *_serviceName;
    struct {
        unsigned int serializationFormat:1;
    } _has;
}

+ (Class)clientConfigType;
@property(retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig; // @synthesize accountConfig=_accountConfig;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequestContext;
@property(readonly, nonatomic) BOOL hasAccountConfig;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientConfigsCount;
- (void)addClientConfig:(id)arg1;
- (void)clearClientConfigs;
- (int)StringAsSerializationFormat:(id)arg1;
- (id)serializationFormatAsString:(int)arg1;
@property(nonatomic) BOOL hasSerializationFormat;
@property(nonatomic) int serializationFormat; // @synthesize serializationFormat=_serializationFormat;
@property(readonly, nonatomic) BOOL hasSerializedParameters;
@property(readonly, nonatomic) BOOL hasFunctionName;
@property(readonly, nonatomic) BOOL hasServiceName;

@end
