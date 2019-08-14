//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AccountManager, DefaultApplicationPopUpButton, MailApp, MailboxesChooser, NSButton, NSLayoutConstraint, NSPopUpButton, NSUserDefaults, PlugInsViewController, SoundPopUpButtonController;

@interface GeneralPreferences : NSViewController
{
    PlugInsViewController *_plugInsViewController;
    BOOL _settingNewMessagesSoundName;
    DefaultApplicationPopUpButton *_defaultMailClientPopUp;
    SoundPopUpButtonController *_theNewMessagesSoundController;
    NSPopUpButton *_theNewMessagesSoundPopUp;
    MailboxesChooser *_dockBadgeMailboxesChooser;
    MailboxesChooser *_userNotificationMailboxesChooser;
    NSPopUpButton *_downloadFolderPopup;
    NSButton *_managePlugInsButton;
    NSLayoutConstraint *_managePlugInsButtonBottomConstraint;
    NSButton *_encryptedMessagesCheckbox;
}

+ (id)keyPathsForValuesAffectingShouldIndexJunk;
+ (id)keyPathsForValuesAffectingShouldIndexTrash;
@property(nonatomic) __weak NSButton *encryptedMessagesCheckbox; // @synthesize encryptedMessagesCheckbox=_encryptedMessagesCheckbox;
@property(nonatomic) __weak NSLayoutConstraint *managePlugInsButtonBottomConstraint; // @synthesize managePlugInsButtonBottomConstraint=_managePlugInsButtonBottomConstraint;
@property(nonatomic) __weak NSButton *managePlugInsButton; // @synthesize managePlugInsButton=_managePlugInsButton;
@property(nonatomic) __weak NSPopUpButton *downloadFolderPopup; // @synthesize downloadFolderPopup=_downloadFolderPopup;
@property(retain, nonatomic) MailboxesChooser *userNotificationMailboxesChooser; // @synthesize userNotificationMailboxesChooser=_userNotificationMailboxesChooser;
@property(retain, nonatomic) MailboxesChooser *dockBadgeMailboxesChooser; // @synthesize dockBadgeMailboxesChooser=_dockBadgeMailboxesChooser;
@property(nonatomic) BOOL settingNewMessagesSoundName; // @synthesize settingNewMessagesSoundName=_settingNewMessagesSoundName;
@property(nonatomic) __weak NSPopUpButton *theNewMessagesSoundPopUp; // @synthesize theNewMessagesSoundPopUp=_theNewMessagesSoundPopUp;
@property(retain, nonatomic) SoundPopUpButtonController *theNewMessagesSoundController; // @synthesize theNewMessagesSoundController=_theNewMessagesSoundController;
@property(nonatomic) __weak DefaultApplicationPopUpButton *defaultMailClientPopUp; // @synthesize defaultMailClientPopUp=_defaultMailClientPopUp;
- (void).cxx_destruct;
- (void)managePlugIns:(id)arg1;
@property(nonatomic) long long attachmentDeletionTag;
@property(nonatomic) BOOL addInvitationsToCalendarAutomatically;
- (void)_updateDownloadFolderPopUp:(id)arg1;
- (void)_chooseNewDownloadFolder:(id)arg1;
- (void)_userNotificationPopupChanged:(id)arg1;
- (void)_dockBadgePopupChanged:(id)arg1;
- (void)_newMessagesSoundDidChange:(id)arg1;
- (void)_selectedNewMessagesSoundDidChange:(id)arg1;
@property(nonatomic) BOOL shouldIndexJunk;
@property(nonatomic) BOOL shouldIndexTrash;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic) MailApp *application;
@property(readonly, nonatomic) AccountManager *accountManager;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_setupUserNotificationPopup;
- (void)_setupDockCountPopup;

@end
