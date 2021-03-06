//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSLocking-Protocol.h>

@class NSLock;

@interface ACAccountMigrationLock : NSObject <NSLocking>
{
    NSLock *_underlyingLock;
}

+ (void)writeMigrationVersionPref;
+ (void)signalMigrationFinished;
+ (id)_currentSystemVersion;
+ (BOOL)isMigrationFinished;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (id)init;

@end

