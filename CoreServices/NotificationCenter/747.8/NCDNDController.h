//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_NCDNDScheduleDelegate-Protocol.h"

@class NSDictionary, NSString, _NCDNDSchedule;
@protocol OS_dispatch_source;

@interface NCDNDController : NSObject <_NCDNDScheduleDelegate>
{
    _NCDNDSchedule *_scheduled;
    _NCDNDSchedule *_midnightResetSchedule;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSObject<OS_dispatch_source> *_displayReconfigTimer;
    struct IONotificationPort *_clamshellNotifyPort;
    unsigned int _rootdomain;
    int _pushDNDNotificationToken;
    int _timeNotifier;
    _Bool _turnOnWhenMirrored;
    _Bool _displayIsMirrored;
    _Bool _presentationModeTakesOverScreen;
    _Bool _userChangedMode;
    _Bool _userSpecifiedValue;
    _Bool _userChangedWhileMirrored;
    _Bool _displaysSleeping;
    _Bool _dndOnDisplaySleep;
    _Bool _screenLocked;
    _Bool _hasBuiltInDisplay;
    _Bool _clamshellOpen;
    _Bool _hasClamshell;
    int _usableDisplays;
    _Bool _facetimeCanBreakDND;
    _Bool _pushDNDEnabled;
    _Bool _dndEnabled;
    _Bool _inDarkWake;
    _Bool _notificationWakeSupported;
    _Bool _consoleConnected;
    unsigned long long _reason;
    NSString *_reasonDescription;
}

+ (id)sharedController;
@property(nonatomic) _Bool consoleConnected; // @synthesize consoleConnected=_consoleConnected;
@property(readonly, nonatomic) _Bool notificationWakeSupported; // @synthesize notificationWakeSupported=_notificationWakeSupported;
@property(nonatomic) _Bool inDarkWake; // @synthesize inDarkWake=_inDarkWake;
@property(readonly, nonatomic) NSString *reasonDescription; // @synthesize reasonDescription=_reasonDescription;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) _Bool pushDNDEnabled; // @synthesize pushDNDEnabled=_pushDNDEnabled;
@property(nonatomic) _Bool dndEnabled; // @synthesize dndEnabled=_dndEnabled;
@property(readonly) _NCDNDSchedule *_scheduled; // @synthesize _scheduled;
- (void).cxx_destruct;
- (void)_scheduleNextWake:(id)arg1;
- (void)scheduledTimerScheduled:(id)arg1 secondsInFuture:(double)arg2;
- (void)scheduleTimerDidFire:(id)arg1;
- (void)reEvaluateDNDValueNow;
- (void)reEvaluateDNDValue;
- (void)messageTracePreferencesWithSortPref:(id)arg1 shareWidgetShowPref:(_Bool)arg2;
- (void)_updateReasonDescription;
- (id)_reasonStringForSchedule;
- (void)_consoleDisconnected;
- (void)_consoleConnected;
- (void)_watchForWakeNotifications;
- (_Bool)_clamshellIsOpen;
- (void)_significantTimeChange;
- (void)_cancelUserDNDCancel;
- (void)setDisplaySleeping:(_Bool)arg1;
- (void)_prefsChanged:(id)arg1;
- (void)_displayConfigurationChangedNow;
- (void)displayConfigurationChanged;
- (void)_watchForClamshellChanges;
- (void)updatePresentationMode:(id)arg1;
- (void)checkMirrorStatus;
- (void)userSwitchedDNDOn;
- (void)userSwitchedDNDOff;
@property(readonly, nonatomic) NSDictionary *dndDump;
@property(readonly, nonatomic) _Bool inPresentationMode;
- (id)init;
@property(nonatomic) BOOL darwinNotificationState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
