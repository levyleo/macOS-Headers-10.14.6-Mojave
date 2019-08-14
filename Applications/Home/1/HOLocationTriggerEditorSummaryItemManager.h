//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemManager.h>

#import "HOPresenceUserPickerItemModuleDelegate-Protocol.h"

@class HFItem, HFLocationTriggerBuilder, HOPresenceUserPickerItemModule, HUTriggerConditionEditorItemModule, NSString;

@interface HOLocationTriggerEditorSummaryItemManager : HFItemManager <HOPresenceUserPickerItemModuleDelegate>
{
    HFLocationTriggerBuilder *_triggerBuilder;
    HOPresenceUserPickerItemModule *_userPickerModule;
    HUTriggerConditionEditorItemModule *_conditionEditorModule;
    HFItem *_locationItem;
    HFItem *_usersInstructionsItem;
}

+ (id)locationSectionID;
+ (id)usersListFooterSectionID;
+ (id)usersListSectionID;
+ (id)usersHeaderSectionID;
@property(retain, nonatomic) HFItem *usersInstructionsItem; // @synthesize usersInstructionsItem=_usersInstructionsItem;
@property(retain, nonatomic) HFItem *locationItem; // @synthesize locationItem=_locationItem;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionEditorModule; // @synthesize conditionEditorModule=_conditionEditorModule;
@property(readonly, nonatomic) HOPresenceUserPickerItemModule *userPickerModule; // @synthesize userPickerModule=_userPickerModule;
@property(readonly, nonatomic) HFLocationTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (void).cxx_destruct;
- (void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2;
- (BOOL)_hasCustomLocation;
- (BOOL)_canEditLocation;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_userPickerOptions;
- (void)updateLocationEventWithRegion:(id)arg1;
- (BOOL)canAddRegionToTriggerBuilder;
- (id)locationEventRegion;
- (BOOL)isInstructionsItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 triggerBuilder:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
