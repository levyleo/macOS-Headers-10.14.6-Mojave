//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSWindow;

@interface PVAppDelegate : NSObject <NSApplicationDelegate>
{
    NSMutableDictionary *_windowControllers;
    NSWindow *_window;
}

@property NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)handleWindowWillCloseNotification:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_becomeForegroundApp;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
