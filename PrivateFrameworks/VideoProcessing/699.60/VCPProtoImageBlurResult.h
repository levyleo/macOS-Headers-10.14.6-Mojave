//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _faceSharpness;
    float _sharpness;
    struct {
        unsigned int faceSharpness:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFaceSharpness;
- (id)exportToLegacyDictionary;

@end
