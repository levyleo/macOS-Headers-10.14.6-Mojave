//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _values;
    float _bucketSize;
    float _minValue;
    struct {
        unsigned int bucketSize:1;
        unsigned int minValue:1;
    } _has;
}

+ (id)quantizedDenseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
@property(nonatomic) float bucketSize; // @synthesize bucketSize=_bucketSize;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBucketSize;
@property(nonatomic) BOOL hasMinValue;
- (void)setValues:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(unsigned int)arg1;
- (void)clearValues;
@property(readonly, nonatomic) unsigned int *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)dealloc;
- (float)originalValueAtIndex:(unsigned long long)arg1;

@end
