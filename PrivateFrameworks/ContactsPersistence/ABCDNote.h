//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/ABCDOwnedObject.h>

@class ABCDContact, NSString;

@interface ABCDNote : ABCDOwnedObject
{
}

+ (id)insertOwnedObjectWithEntityName:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)uniqueId;
- (void)setOwner:(id)arg1;
- (id)owner;
@property(retain, nonatomic) NSString *text; // @dynamic text;

// Remaining properties
@property(readonly, nonatomic) ABCDContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSString *primitiveText; // @dynamic primitiveText;

@end
