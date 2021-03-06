//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextField, RevocationPrefs;

@interface KCAPreferences : NSObject
{
    id _window;
    RevocationPrefs *_revPrefs;
    id _searchDirectoryServices;
    id _savedDelegate;
    NSTextField *_resetConfigurationLabel;
}

+ (id)currentAOSServiceName;
+ (id)sharedPreferences;
- (BOOL)isldapInList;
- (void)ldapButton:(id)arg1;
- (BOOL)isDotMacInList;
- (BOOL)resetKCSyncInProgress;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)show:(id)arg1;

@end

