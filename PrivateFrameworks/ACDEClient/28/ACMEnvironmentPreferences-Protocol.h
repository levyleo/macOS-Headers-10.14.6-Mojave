//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACMBasePreferences-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol ACMEnvironmentPreferences, ACMPrincipalPreferences;

@protocol ACMEnvironmentPreferences <ACMBasePreferences>
+ (id <ACMEnvironmentPreferences>)environmentPreferencesWithRealm:(NSString *)arg1;
+ (NSArray *)supportedRealms;
@property(readonly, retain) id <ACMPrincipalPreferences> principalPreferences;
@property(readonly, retain) NSString *realm;
@property(readonly, retain) NSDictionary *environmentSpecification;
- (NSString *)iForgotURL;
- (NSString *)myAppleIDURL;
- (NSString *)provisionedDeviceIdentifier;
- (NSString *)verifyRecoveryKeyURLString;
- (NSString *)verifySecurityCodeURLString;
- (NSString *)generateAndSendSecCodeURLString;
- (NSString *)getTrustedDevicesURLString;
- (NSString *)defaultPublicKeyString;
- (NSString *)verifyTicketURLString;
- (NSString *)authenticateURLString;
- (NSArray *)serverAttemptsDelays;
- (NSArray *)serverHosts;
- (NSString *)realmShortName;
- (NSString *)realmName;
- (void)setPublicKeyCertificateName:(NSString *)arg1;
- (NSString *)publicKeyCertificateName;
- (void)setPublicKeyVersion:(NSString *)arg1;
- (NSString *)publicKeyVersion;
- (NSDictionary *)environmentSpecificationForRealm:(NSString *)arg1;
- (id <ACMPrincipalPreferences>)principalPreferencesWithUserName:(NSString *)arg1;
- (id <ACMEnvironmentPreferences>)initWithRealm:(NSString *)arg1;
@end

