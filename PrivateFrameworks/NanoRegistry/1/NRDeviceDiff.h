//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NanoRegistry/NRDiffBase.h>

#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRPBDeviceDiff, NSDictionary;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration>
{
    NSDictionary *_diffPropertyDiffs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *diffPropertyDiffs; // @synthesize diffPropertyDiffs=_diffPropertyDiffs;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NRPBDeviceDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_createIndex;
- (id)allPropertyNames;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)diffPropertyDiffForName:(id)arg1;
- (id)initWithDiffPropertyDiffs:(id)arg1;

@end
