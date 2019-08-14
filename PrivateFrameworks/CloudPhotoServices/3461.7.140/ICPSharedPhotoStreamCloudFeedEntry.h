//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/ICPDictionaryCoding-Protocol.h>

@class ICPSharedPhotoStream, ICPSharedPhotoStreamSharingRelationship, NSArray, NSDate, NSDictionary, NSString;

@interface ICPSharedPhotoStreamCloudFeedEntry : NSObject <ICPDictionaryCoding>
{
    NSString *_identifier;
    NSDate *_date;
    long long _type;
    long long _priority;
    NSDictionary *_phoneInvitationInfo;
    NSString *_streamIdentifier;
    ICPSharedPhotoStream *_sharedPhotoStream;
    NSString *_sharingRelationshipIdentifier;
    ICPSharedPhotoStreamSharingRelationship *_sharingRelationship;
    NSArray *_comments;
    NSArray *_mediaItems;
}

@property(readonly) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(readonly) NSArray *comments; // @synthesize comments=_comments;
@property(readonly) ICPSharedPhotoStreamSharingRelationship *sharingRelationship; // @synthesize sharingRelationship=_sharingRelationship;
@property(readonly) NSString *sharingRelationshipIdentifier; // @synthesize sharingRelationshipIdentifier=_sharingRelationshipIdentifier;
@property(readonly) ICPSharedPhotoStream *sharedPhotoStream; // @synthesize sharedPhotoStream=_sharedPhotoStream;
@property(readonly) NSString *streamIdentifier; // @synthesize streamIdentifier=_streamIdentifier;
@property(readonly) NSDictionary *phoneInvitationInfo; // @synthesize phoneInvitationInfo=_phoneInvitationInfo;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
