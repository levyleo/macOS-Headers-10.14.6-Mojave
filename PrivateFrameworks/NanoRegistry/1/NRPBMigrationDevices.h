//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NRPBMigrationDevices : PBCodable <NSCopying>
{
    NSMutableArray *_devices;
    NSData *_phoneUDIDHash;
}

+ (Class)devicesType;
@property(retain, nonatomic) NSData *phoneUDIDHash; // @synthesize phoneUDIDHash=_phoneUDIDHash;
@property(retain, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
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
@property(readonly, nonatomic) BOOL hasPhoneUDIDHash;
- (id)devicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (void)addDevices:(id)arg1;
- (void)clearDevices;

@end

