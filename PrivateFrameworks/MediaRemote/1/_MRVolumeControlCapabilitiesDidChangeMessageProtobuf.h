//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRVolumeControlAvailabilityProtobuf;

@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable <NSCopying>
{
    _MRVolumeControlAvailabilityProtobuf *_capabilities;
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
}

@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property(retain, nonatomic) NSString *endpointUID; // @synthesize endpointUID=_endpointUID;
@property(retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *capabilities; // @synthesize capabilities=_capabilities;
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
@property(readonly, nonatomic) BOOL hasOutputDeviceUID;
@property(readonly, nonatomic) BOOL hasEndpointUID;
@property(readonly, nonatomic) BOOL hasCapabilities;

@end

