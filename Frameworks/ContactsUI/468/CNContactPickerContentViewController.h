//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerContentViewController-Protocol.h>

@class CNContactNavigationController, CNContactStoreDataSource, CNManagedConfiguration, NSArray, NSMutableArray, NSPredicate, NSString, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>
{
    BOOL _clientWantsSingleContact;
    BOOL _clientWantsSingleProperty;
    BOOL _clientWantsMultipleContacts;
    BOOL _clientWantsMultipleProperties;
    BOOL _clientHasContactsAccess;
    BOOL _hidesSearchableSources;
    BOOL _onlyRealContacts;
    BOOL _allowsEditing;
    BOOL _allowsCancel;
    BOOL _hidesPromptInLandscape;
    id <CNContactPickerContentDelegate> _delegate;
    CNContactNavigationController *_contactNavigationController;
    CNContactStoreDataSource *_dataSource;
    NSMutableArray *_contactProperties;
    NSArray *_displayedPropertyKeys;
    long long _cardActions;
    NSString *_prompt;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    CNManagedConfiguration *_managedConfiguration;
}

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // @synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // @synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact;
@property(copy, nonatomic) NSPredicate *predicateForEnablingContact; // @synthesize predicateForEnablingContact=_predicateForEnablingContact;
@property(copy, nonatomic) NSString *bannerValue; // @synthesize bannerValue=_bannerValue;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(nonatomic) BOOL hidesPromptInLandscape; // @synthesize hidesPromptInLandscape=_hidesPromptInLandscape;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) BOOL allowsCancel; // @synthesize allowsCancel=_allowsCancel;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) BOOL onlyRealContacts; // @synthesize onlyRealContacts=_onlyRealContacts;
@property(nonatomic) BOOL hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(nonatomic) long long cardActions; // @synthesize cardActions=_cardActions;
@property(copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property(retain, nonatomic) NSMutableArray *contactProperties; // @synthesize contactProperties=_contactProperties;
@property(retain, nonatomic) CNContactStoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNContactNavigationController *contactNavigationController; // @synthesize contactNavigationController=_contactNavigationController;
@property(nonatomic) BOOL clientHasContactsAccess; // @synthesize clientHasContactsAccess=_clientHasContactsAccess;
@property(nonatomic) BOOL clientWantsMultipleProperties; // @synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties;
@property(nonatomic) BOOL clientWantsMultipleContacts; // @synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts;
@property(nonatomic) BOOL clientWantsSingleProperty; // @synthesize clientWantsSingleProperty=_clientWantsSingleProperty;
@property(nonatomic) BOOL clientWantsSingleContact; // @synthesize clientWantsSingleContact=_clientWantsSingleContact;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectedProperties:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_selectedContact:(id)arg1;
- (id)descriptorsForKeysRequiredByDelegate;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (BOOL)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
- (BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updatePromptWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (id)_validatePredicatesWithError:(id *)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
