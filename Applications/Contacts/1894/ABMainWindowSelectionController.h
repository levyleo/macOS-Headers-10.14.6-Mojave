//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupListController, ABPersonListController;

@interface ABMainWindowSelectionController : NSObject
{
    ABGroupListController *_groupListController;
    ABPersonListController *_personListController;
}

- (BOOL)groupListHasFocus;
- (id)timeMachineRestoreSourceFromCurrentSelection;
- (id)timeMachineRestorationSelection;
- (id)fileNameOfFocusedGroupsOrContacts;
- (id)peopleInFocusedSelection;
- (id)contactsInFocusSelection;
- (void)dealloc;
- (id)initWithGroupListController:(id)arg1 personListController:(id)arg2;

@end
