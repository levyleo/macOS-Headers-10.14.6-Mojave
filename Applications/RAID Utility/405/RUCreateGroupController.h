//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RURaidManagementWindowController.h"

@class NSArrayController, NSMutableArray, NSMutableSet;

@interface RUCreateGroupController : RURaidManagementWindowController
{
    long long _raidLevel;
    BOOL _useUnassignedAsSpare;
    NSMutableSet *_assignedDrives;
    NSMutableSet *_unassignedDrives;
    NSMutableArray *_subTaskDataSources;
    NSArrayController *drivesController;
}

+ (id)keyPathsForValuesAffectingUseUnassignedAsSpare;
+ (id)keyPathsForValuesAffectingRaidLevelStringValue;
+ (id)keyPathsForValuesAffectingRaidLevelInfoIconPath;
+ (id)keyPathsForValuesAffectingRaidSetCanUseSpare;
+ (id)keyPathsForValuesAffectingRaidSizeInfoText;
+ (id)keyPathsForValuesAffectingRaidLevelInfoText;
+ (id)keyPathsForValuesAffectingIsRaidPossible;
+ (id)keyPathsForValuesAffectingUnassignedDrives;
+ (id)keyPathsForValuesAffectingIsRaid5Possible;
+ (id)keyPathsForValuesAffectingIsRaid10Possible;
+ (id)keyPathsForValuesAffectingIsRaid1Possible;
+ (id)keyPathsForValuesAffectingIsRaid0Possible;
+ (id)keyPathsForValuesAffectingIsEnhancedJBODPossible;
- (id)infoString;
- (void)windowDidLoad;
- (id)raid5StringValue;
- (id)raid10StringValue;
- (id)raid1StringValue;
- (id)raid0StringValue;
- (id)enhancedJBODStringValue;
- (id)raid5InfoIconPath;
- (id)raid10InfoIconPath;
- (id)raid1InfoIconPath;
- (id)raid0InfoIconPath;
- (id)enhancedJBODInfoIconPath;
- (id)raid5SizeInfoText;
- (id)raid10SizeInfoText;
- (id)raid1SizeInfoText;
- (id)raid0SizeInfoText;
- (id)enhancedJBODSizeInfoText;
- (id)raid5LevelInfoText;
- (id)raid10LevelInfoText;
- (id)raid1LevelInfoText;
- (id)raid0LevelInfoText;
- (id)enhancedJBODLevelInfoText;
- (unsigned long long)raid5SetSize;
- (unsigned long long)raid10SetSize;
- (unsigned long long)raid1SetSize;
- (unsigned long long)raid0SetSize;
- (BOOL)isRaid5Possible;
- (BOOL)isRaid10Possible;
- (BOOL)isRaid1Possible;
- (BOOL)isRaid0Possible;
- (BOOL)isEnhancedJBODPossible;
- (BOOL)isRaidPossible;
- (unsigned long long)raidSetSize;
- (id)raidLevelInfoText;
- (id)raidSizeInfoText;
- (BOOL)raidSetCanUseSpare;
- (id)raidLevelStringValue;
- (id)raidLevelInfoIconPath;
- (id)unassignedDrives;
- (void)setAssignedDrives:(id)arg1;
- (id)assignedDrives;
- (void)setRaidLevel:(long long)arg1;
- (long long)raidLevel;
- (void)setUseUnassignedAsSpare:(BOOL)arg1;
- (BOOL)useUnassignedAsSpare;
- (void)setCurrentOperation:(id)arg1;
- (void)setupOperations;
- (void)helpButtonClick:(id)arg1;
- (void)okButtonClick:(id)arg1;
- (void)dealloc;
- (id)init;

@end
