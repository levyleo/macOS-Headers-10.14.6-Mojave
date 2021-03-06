//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@protocol ACDDataclassOwnersManagerProtocol <NSObject>
- (void)isPerformingDataclassActionsForAccount:(ACAccount *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)performDataclassActions:(NSDictionary *)arg1 forAccount:(ACAccount *)arg2 withChildren:(NSArray *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)actionsForDisablingDataclass:(NSString *)arg1 onAccount:(ACAccount *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForEnablingDataclass:(NSString *)arg1 onAccount:(ACAccount *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForDeletingAccount:(ACAccount *)arg1 affectingDataclass:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForAddingAccount:(ACAccount *)arg1 affectingDataclass:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)preloadDataclassOwnersWithCompletion:(void (^)(NSError *))arg1;
@end

