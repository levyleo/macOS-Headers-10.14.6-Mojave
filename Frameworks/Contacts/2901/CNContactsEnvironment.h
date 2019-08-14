//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentStoreCoordinator;
@protocol CNAccountCollection, CNContactsLoggerProvider, CNSchedulerProvider, SGSuggestionsServiceContactsProtocol;

@interface CNContactsEnvironment : NSObject
{
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNAccountCollection> _accountCollection;
    NSPersistentStoreCoordinator *_existingPersistentStoreCoordinator;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsService;
    id <CNContactsLoggerProvider> _loggerProvider;
}

+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
+ (id)unitTestingEnvironment;
+ (id)inMemoryURL;
+ (id)currentEnvironment;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) id <CNContactsLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
@property(retain) id <SGSuggestionsServiceContactsProtocol> suggestionsService; // @synthesize suggestionsService=_suggestionsService;
@property(retain) NSPersistentStoreCoordinator *existingPersistentStoreCoordinator; // @synthesize existingPersistentStoreCoordinator=_existingPersistentStoreCoordinator;
@property(retain) id <CNAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (id)init;
@property(readonly) BOOL useInMemoryStores;

@end
