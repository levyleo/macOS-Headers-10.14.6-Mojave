//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MessageTracerUtil : NSObject
{
}

+ (void)initialize;
+ (void)_accountDidLogIn:(id)arg1;
+ (BOOL)submitPrefsIfNecessary;
+ (void)_logWeeklyStats;
+ (void)_logServicesUsed;
+ (BOOL)_getAndClearBoolInPreference:(id)arg1;
+ (long long)_getRoundAndClearIntInPreference:(id)arg1;
+ (long long)_getAndClearIntInPreference:(id)arg1;
+ (void)incrementNumWithPreferenceKey:(id)arg1;
+ (void)enablePrefForServiceName:(id)arg1;
+ (void)_enableServicePrefForKey:(id)arg1;
+ (void)logInMessageTracerOutOfOrder:(int)arg1;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3 withFirstValue:(int)arg4 withSecondValue:(int)arg5;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3 withFirstValue:(int)arg4;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3;
+ (id)domainWithName:(id)arg1;
+ (id)_version;
+ (id)_bundleID;

@end

