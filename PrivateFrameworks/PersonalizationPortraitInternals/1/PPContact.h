//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString, SGContact;

@interface PPContact : NSObject
{
    NSString *_cachedFullName;
    BOOL _isFavorite;
    NSString *_identifier;
    CNContact *_contact;
    SGContact *_sgContact;
    unsigned long long _source;
    double _score;
}

@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) SGContact *sgContact; // @synthesize sgContact=_sgContact;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqualToContact:(id)arg1;
- (unsigned long long)hash;
- (id)nonGregorianBirthday;
- (id)birthday;
- (id)organizationName;
- (id)familyName;
- (id)givenName;
- (id)socialProfiles;
- (id)postalAddresses;
- (id)emailAddresses;
- (id)phoneNumbers;
- (id)nickname;
- (id)fullName;
- (id)description;

@end
