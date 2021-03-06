//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CNManagedProfileConnection <NSObject>
- (NSArray *)filteredOpenInOriginatingAccounts:(NSArray *)arg1 targetAppBundleID:(NSString *)arg2 targetAccountManagement:(long long)arg3;
- (NSArray *)filteredOpenInAccounts:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 sourceAccountManagement:(long long)arg3;
- (BOOL)mayShowLocalAccountsForTargetBundleID:(NSString *)arg1 targetAccountManagement:(long long)arg2;
- (BOOL)mayShowLocalAccountsForBundleID:(NSString *)arg1 sourceAccountManagement:(long long)arg2;
- (BOOL)isOpenInRestrictionInEffect;
@end

