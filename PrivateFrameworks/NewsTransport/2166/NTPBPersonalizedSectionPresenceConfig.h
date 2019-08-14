//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying>
{
    NTPBAbsolutePersonalizedSectionPresenceConfig *_absoluteConfig;
    int _personalizationMethod;
    NTPBRelativePersonalizedSectionPresenceConfig *_relativeConfig;
    struct {
        unsigned int personalizationMethod:1;
    } _has;
}

@property(retain, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig; // @synthesize absoluteConfig=_absoluteConfig;
@property(retain, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig; // @synthesize relativeConfig=_relativeConfig;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAbsoluteConfig;
@property(readonly, nonatomic) BOOL hasRelativeConfig;
@property(nonatomic) BOOL hasPersonalizationMethod;
@property(nonatomic) int personalizationMethod; // @synthesize personalizationMethod=_personalizationMethod;
- (void)dealloc;

@end
