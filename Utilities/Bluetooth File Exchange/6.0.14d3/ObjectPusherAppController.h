//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSOpenSavePanelDelegate-Protocol.h"

@class IOBluetoothDeviceSelectorController, NSMutableDictionary, NSOpenPanel, NSString;

@interface ObjectPusherAppController : NSObject <NSApplicationDelegate, NSOpenSavePanelDelegate>
{
    id mPrefsWindow;
    id mStartupMatrix;
    BOOL mWasLaunchedByDrop;
    BOOL mWasDroppedOn;
    BOOL mErrorDialogIsUp;
    NSOpenPanel *mOpenPanel;
    IOBluetoothDeviceSelectorController *mPushDeviceSelector;
    IOBluetoothDeviceSelectorController *mFTPDeviceSelector;
    NSMutableDictionary *mFilesSentToDevice;
}

- (void).cxx_destruct;
- (int)parseAppleEvent:(id)arg1 returnAddress:(id *)arg2 returnFiles:(id *)arg3;
- (void)handleOPPAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)handleFTPAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)instantiatBIPBrowserWithDevice:(id)arg1;
- (void)browsePicturesOnRemoteDevice:(id)arg1;
- (void)instantiatePushSenderWithDevice:(id)arg1 files:(id)arg2;
- (void)sendFiles:(id)arg1 toDevice:(id)arg2;
- (void)sendFiles:(id)arg1;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)sendToRemoteDevice:(id)arg1;
- (void)instantiateFileBrowserWithDevice:(id)arg1;
- (void)browseRemoteDevice:(id)arg1;
- (void)showAboutPanel:(id)arg1;
- (BOOL)isBrowsingClient:(id)arg1;
- (BOOL)isSendingToDevice:(id)arg1;
- (void)removeDisconnectedClient:(id)arg1;
- (void)objectPushComplete:(id)arg1;
- (void)addObjectPushToArray:(id)arg1;
- (void)removeClientFromArray:(id)arg1;
- (void)addClientToArray:(id)arg1;
- (void)prefsStartupMatrixChange:(id)arg1;
- (BOOL)isHardwareReady;
- (BOOL)quit;
- (void)showHelp:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
