//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartPhotoPlaybackIntentResponse-Protocol.h>

@class NSString, _INPBLocation;

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <_INPBStartPhotoPlaybackIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_a60b8694 _has;
    int _searchResultsCount;
    NSString *_albumName;
    _INPBLocation *_locationCreated;
}

@property(nonatomic) int searchResultsCount; // @synthesize searchResultsCount=_searchResultsCount;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSearchResultsCount;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(readonly, nonatomic) BOOL hasAlbumName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
