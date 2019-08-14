//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKDevice, NSData, NSString;

@protocol AKAnisetteProvisioningDaemonProtocol <NSObject>
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 device:(AKDevice *)arg2 completion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 device:(AKDevice *)arg2 completion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)eraseAnisetteForDevice:(AKDevice *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)syncAnisetteWithSIMData:(NSData *)arg1 device:(AKDevice *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)provisionAnisetteForDevice:(AKDevice *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
