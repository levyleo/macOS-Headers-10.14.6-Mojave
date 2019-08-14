//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FirstLoginOptimizer, LoginAuthRefMgr, NSDictionary, NSImage, NSString;

@interface Login1 : NSObject
{
    id loginDefaults;
    long long lastFailedLogin;
    long long deadTime;
    NSString *_upgradeInstallType;
    NSString *_upgradeInstallUser;
    BOOL _appleUpgradeFileFound;
    BOOL _appleUpgradeWithFLO;
    BOOL _appleUpgradeDarkInstall;
    BOOL _minibuddyRan;
    BOOL _upgradeInstallCheckComplete;
    NSDictionary *_appleUpgradeDictionary;
    BOOL _loginSwitchedToExistingSession;
    unsigned int mOldSessionID;
    LoginAuthRefMgr *_loginAuthRefMgr;
    BOOL _managedAccount;
    BOOL _firstLoginAfterPanic;
    BOOL _firstLoginAfterHardRestart;
    BOOL _observingOtherAgentUIShown;
    BOOL _loginNeedsToShowScreenCaptures;
    NSImage *_userPicture;
    struct __SCDynamicStore *_sc_callback_store;
    int _homeDirType;
    FirstLoginOptimizer *_firstLoginOptimizer;
    BOOL _serversMountedAndMCXComplete;
}

@property(readonly) BOOL serversMountedAndMCXComplete; // @synthesize serversMountedAndMCXComplete=_serversMountedAndMCXComplete;
@property(readonly) FirstLoginOptimizer *firstLoginOptimizer; // @synthesize firstLoginOptimizer=_firstLoginOptimizer;
- (BOOL)homeDirWillGoAwayAtLogout;
- (void)setHomeDirType:(int)arg1;
- (int)homeDirType;
- (const char *)longName;
- (const char *)shortName;
- (BOOL)isFirstLoginAfterHardRestart;
- (BOOL)isFirstLoginAfterPanic;
- (BOOL)isXcodeUserAccount;
- (BOOL)isMBSetupUserAccount;
- (BOOL)isAdminAccount:(BOOL)arg1;
- (BOOL)isGuestAccount;
- (unsigned int)groupID;
- (unsigned int)userID;
- (id)shortNameString;
- (BOOL)isDarkInstall;
- (void)setIsDarkInstall:(BOOL)arg1;
- (BOOL)appleUpgradeFileFound;
- (BOOL)upgradeInstallWithFLO;
- (id)upgradeInstallUser;
- (id)upgradeInstallType;
- (id)appleUpgradeDictionary;
- (BOOL)setupUpgradeInstallIfNeeded;
- (BOOL)shouldAddSetupAssistantBootProgress;
- (BOOL)loginSwitchedToExistingSession;
- (void)deleteUpgradeInstallIfNeeded;
- (void)cancelRequests;
- (void)do_autologin_check;
- (void)setAuthRefMgr:(id)arg1;
- (void)doLogin;
- (void)doRootInstallLogin;
- (id)setCorrectValuesInSessionListForList:(id)arg1 deleteThisSession:(BOOL)arg2 session:(unsigned int)arg3;
- (BOOL)isUserSuspended:(unsigned int)arg1 sessionList:(struct __CFArray *)arg2;
- (void)launchRootInstallMode;
- (void)setLanguagePrefIfNeeded;
- (void)continueLaunchWorkspaceAfterServerMounts;
- (void)continueLaunchWorkspaceAfterUserAccountUpdaterCheck;
- (void)launchWorkspace;
- (void)resetAppleIDLoginIfNeeded;
- (void)continueLaunchWorkspace;
- (void)setupAssistantFailureContinueLogin;
- (BOOL)startMiniBuddy;
- (unsigned long long)miniBuddyOption;
- (BOOL)oneTimeSetupAssitantOptionSet;
- (void)deleteSetupAssistantOneTimeSetup;
- (void)pauseForManagedClientUpdateIfNeeded;
- (BOOL)lockScreenIfNeeded;
- (BOOL)lockScreenForDarkInstallIfNeeded;
- (void)initWorkspacesIfNeeded;
- (void)setupEnvironment;
- (void)resetDevicePermissions;
- (void)perUserLaunchdInit;
- (void)otherSecurityAgentUIShownAtLogin:(id)arg1;
- (void)otherAgentUIShownAtLogin:(id)arg1;
- (void)stopMonitoringForPostAuthUIShown;
- (void)setDevicePermissionsToUserID:(unsigned int)arg1 groupID:(unsigned int)arg2;
- (void)recordLogin:(const char *)arg1 userID:(unsigned int)arg2;
- (void)unregisterCoreCursors;
- (void)doLoginHook;
- (BOOL)useMCXLoginLogoutHooks;
- (void)invokeHookCommand:(id)arg1 withAdditionalArgs:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setHoldOnRootLoginwindow:(BOOL)arg1;
- (void)setSessionSafeBootMode;
- (const char *)homeDirPath;
- (const char *)shell;

@end
