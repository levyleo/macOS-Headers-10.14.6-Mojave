//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABPeoplePickerController.h>

@class ABAddressBook;

@interface ABDistributionListPeoplePickerController : ABPeoplePickerController
{
    ABAddressBook *_parallelAddressBook;
}

- (BOOL)shouldUnifyPeople;
- (BOOL)shouldIncludeGroups;
- (id)fetchPredicate;
- (void)setValueSelectionBehavior:(int)arg1;
- (void)tableView:(id)arg1 userClickedSubrow:(long long)arg2 ofRow:(long long)arg3;
- (void)saveDistributionListChanges;
- (void)saveSelection;
- (void)setAccounts:(id)arg1;
- (void)restoreSelection;
- (void)distributionListPersonEntriesDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end
