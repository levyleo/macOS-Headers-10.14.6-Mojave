//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ACAccount (CalAdditions)
- (BOOL)_useSSLForSchemeString:(id)arg1;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (id)_calDAVDataclassProperties;
- (void)_setCalInternalValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (void)_setIsEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)_schemeStringForUseSSL:(BOOL)arg1;
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (BOOL)_dataclassIsEnabled:(id)arg1;
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;
- (id)_accountPropertiesKeys;
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;
- (id)valueForAccountPropertyKey:(id)arg1;
- (BOOL)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;
- (BOOL)removePrincipalWithUID:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (id)firstDifferentPropertyWithAccount:(id)arg1;
- (id)diffWithAccount:(id)arg1;
- (void)createDictionaryForPrincipalWithUID:(id)arg1;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;
- (id)calPrincipalURLForMainPrincipal;
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;
@property BOOL calUseExternalURL;
@property(copy) NSString *calRootFolderID;
@property(copy) NSString *calIdentityEmailAddress;
@property(copy) NSURL *calExternalURL;
@property(readonly) BOOL calIsDirty;
@property(readonly) NSURL *calExternalExchangeWebServicesURL;
@property(readonly) NSURL *calExchangeWebServicesURL;
@property(copy) NSString *calWebServicesRecordGUID;
@property BOOL calUseKerberos;
@property BOOL calSkipCredentialVerification;
@property BOOL calAttachmentDownloadHasTakenPlace;
@property BOOL calServerSyncHasTakenPlace;
@property BOOL calLocalDataMigrationHasTakenPlace;
@property(retain) NSString *calCollectionSetName;
@property BOOL calUseSSL;
@property(copy) NSURL *calServerURL;
@property long long calRefreshInterval;
@property BOOL calPushDisabled;
- (void)setCalPrincipals:(id)arg1;
@property(copy) NSNumber *calPort;
@property(copy) NSString *calMainPrincipalUID;
@property BOOL calIsEnabledForReminders;
@property BOOL calIsEnabledForCalendar;
@property(retain) NSString *calHostname;
@property(readonly, copy) NSDictionary *calPrincipals;
@property(readonly) BOOL calIsRestrictedForCalendar;
@property(readonly) BOOL calIsMissingParentAccount;
@property(readonly) BOOL calIsExchangeAccount;
@property(readonly) BOOL calIsEnabled;
@property(readonly) BOOL calIsGenericCalDAVAccount;
@property(readonly) BOOL calIsCalDAVAccount;
@property(readonly) BOOL calIsAutoRefreshed;
@property(readonly) NSArray *calCalDAVChildAccounts;
@end
