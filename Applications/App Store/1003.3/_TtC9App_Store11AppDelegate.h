//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenuItem;

@interface _TtC9App_Store11AppDelegate : NSObject
{
    // Error parsing type: , name: window
    // Error parsing type: , name: preferencesWindowController
    // Error parsing type: , name: dialogContext
    // Error parsing type: , name: appHasBeenInBackground
    // Error parsing type: , name: eventWatchdoge
    // Error parsing type: , name: presentingPrivacySplash
    // Error parsing type: , name: privacyMenuItem
    // Error parsing type: , name: pendingBootstrap
    // Error parsing type: , name: adBootstrap
    // Error parsing type: , name: freshnessWatchdog
    // Error parsing type: , name: menuControllers
    // Error parsing type: , name: deepLinkController
    // Error parsing type: , name: rootActionRunner
    // Error parsing type: , name: flowController
    // Error parsing type: , name: pendingOnboarding
    // Error parsing type: , name: isOnboardingFinished
}

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)application:(id)arg1 openURLs:(id)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
@property(nonatomic, retain) NSMenuItem *privacyMenuItem; // @synthesize privacyMenuItem;
- (id)init;

@end
