//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABRecord.h>

@class NSString;

@interface ABLog : ABRecord
{
    NSString *_deletedUID;
}

+ (id)builtInProperties;
- (void)finalize;
- (void)dealloc;
- (id)nts_DeletedUID;
- (id)_deletedUID;
- (id)nts_InitWithDeletedUID:(id)arg1 addressBook:(id)arg2;

@end
