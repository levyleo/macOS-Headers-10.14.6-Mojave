//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PCPKeychainAccess : NSObject
{
}

+ (id)mostRecentUserNameForServer:(id)arg1;
+ (id)credentialsForServer:(id)arg1;
+ (id)passwordForUserName:(id)arg1 server:(id)arg2;
+ (void)removePasswordForUserName:(id)arg1 server:(id)arg2;
+ (void)storePassword:(id)arg1 forUserName:(id)arg2 server:(id)arg3;

@end
