//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface PreferenceKeys : NSObject
{
}

+ (BOOL)useNSOperations;
+ (void)setVisitedCorkboard;
+ (void)setShownNewFaceLayer;
+ (BOOL)showNewFaceLayer;
+ (BOOL)reverseGeocodeAllowedToProceed;
+ (BOOL)useCPURendererForPageLayout;
+ (BOOL)useCPURenderer;
+ (BOOL)haveLowEndGraphicsCard;
+ (BOOL)canAnimateOnScreen:(id)arg1;
+ (BOOL)isLowEndRenderer:(int)arg1;
+ (void)_loadCardsAndRenderersIfNecessary;
+ (void)_resetLoadedCardsAndRenderers;
+ (id)preferredLanguageCode;
+ (id)preferredLanguage;
+ (id)englishLanguageCode;
+ (BOOL)anyModifierKeyDown;
+ (BOOL)controlKeyDown;
+ (BOOL)commandKeyDown;
+ (BOOL)optionKeyDown;
+ (BOOL)shiftKeyDown;
+ (BOOL)capsLockKeyDown;
+ (BOOL)firstLaunch;
+ (BOOL)libraryShowsEvents;
+ (BOOL)libraryShowsAllPhotos;
+ (BOOL)graphiteTheme;
+ (unsigned long long)megsOfPhysicalMemory;
+ (BOOL)authorizedForSystemPreferences;
+ (void)setFlagWithKey:(id)arg1 value:(BOOL)arg2;
+ (BOOL)flagWithKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (float)floatWithKey:(id)arg1 defaultValue:(float)arg2;
+ (id)defaultBackgroundColorData;
- (void)_synchronizeApplicationDefaultsWithDictionary:(id)arg1;
- (id)_defaultPersistentDefaults;
- (void)assureDefaults;

@end
