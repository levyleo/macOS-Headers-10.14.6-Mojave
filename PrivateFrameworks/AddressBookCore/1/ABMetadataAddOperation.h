//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABMetadataOperation.h>

@class ABAddressBook, NSArray;

@interface ABMetadataAddOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    ABAddressBook *_addressBookForReading;
}

- (void).cxx_destruct;
- (void)_doMain;
- (void)main;
- (void)_writeMetaDataForPeople:(id)arg1 withLock:(BOOL)arg2;
- (int)metadataJobType;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2;

@end
