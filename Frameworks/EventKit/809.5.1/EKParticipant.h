//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/EKProtocolMutableParticipant-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSPredicate, NSString, NSURL;

@interface EKParticipant : EKObject <EKIdentityProtocol, EKProtocolMutableParticipant, NSCopying>
{
    int _proposedStartDateStatus;
    NSString *_comment;
    NSString *_name;
    NSString *_scheduleStatusString;
    NSURL *_URL;
}

+ (void)_ensureSubclass;
+ (BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;
+ (int)coreCalendarUserTypeFromEKParticipantType:(long long)arg1;
+ (long long)participantTypeFromCoreCalendarUserType:(int)arg1;
+ (id)protocolParticipantRoleFromEKParticipantRole:(long long)arg1;
+ (long long)participantRoleFromProtocolParticipantRole:(id)arg1;
+ (id)protocolParticipantStatusFromEKParticipantStatus:(long long)arg1;
+ (long long)participantStatusFromProtocolParticipantStatus:(id)arg1;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (unsigned long long)hashForObject:(id)arg1;
+ (id)knownIdentityKeys;
+ (id)knownImmutableKeys;
+ (id)knownSingleValueKeys;
+ (Class)frozenClass;
+ (id)participantWithParticipant:(id)arg1 newURL:(id)arg2;
+ (id)participantWithParticipant:(id)arg1;
+ (id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)participantWithName:(id)arg1 url:(id)arg2;
+ (Class)classForParticipantInstance;
@property(nonatomic) int proposedStartDateStatus; // @synthesize proposedStartDateStatus=_proposedStartDateStatus;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *scheduleStatusString; // @synthesize scheduleStatusString=_scheduleStatusString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (BOOL)isLocationRoom;
@property(readonly, nonatomic) long long participantScheduleStatus;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *emailAddress;
- (id)nameUsingAddressAsBackup;
- (id)nameUsingEmailAsBackup;
- (id)contactIdentifier;
- (id)ABPersonInAddressBook:(id)arg1;
@property(readonly, nonatomic) NSPredicate *contactPredicate;
- (id)nameComponents;
- (BOOL)isEqualToParticipant:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long participantRole;
@property(readonly, nonatomic) long long participantStatus;
@property(readonly, nonatomic) long long participantType;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
- (void)setCurrentUser:(BOOL)arg1;
@property(readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property(nonatomic) int type;
- (void)setRole:(id)arg1;
- (id)role;
- (void)setEncodedLikenessData:(id)arg1;
@property(readonly, nonatomic) NSString *encodedLikenessData;
- (void)setScheduleForceSend:(BOOL)arg1;
- (BOOL)scheduleForceSend;
- (void)setStatusModifiedDate:(id)arg1;
- (id)statusModifiedDate;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setReplyRequested:(BOOL)arg1;
- (BOOL)replyRequested;
- (void)setProposalStatusString:(id)arg1;
- (id)proposalStatusString;
- (void)setProposedEndDateUnadjustedFromUTC:(id)arg1;
- (id)proposedEndDateUnadjustedFromUTC;
- (void)setProposedEndDate:(id)arg1 forEvent:(id)arg2;
- (id)proposedEndDateForEvent:(id)arg1;
- (void)setProposedStartDateUnadjustedFromUTC:(id)arg1;
- (id)proposedStartDateUnadjustedFromUTC;
- (void)setProposedStartDate:(id)arg1 forEvent:(id)arg2;
- (id)proposedStartDateForEvent:(id)arg1;
@property(copy, nonatomic) NSString *inviterNameString;
- (void)setParticipantType:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantRole:(long long)arg1;
- (BOOL)isVettedBySource;
- (BOOL)isInviteUndeliverable;
- (BOOL)hasParticipantStatusChange;
- (id)initWithParticipant:(id)arg1 newURL:(id)arg2;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
- (id)initWithName:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end
