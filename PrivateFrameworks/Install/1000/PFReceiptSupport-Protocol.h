//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IFInstallPlan, NSArray, NSDictionary, NSString, NSTask, PFModule;

@protocol PFReceiptSupport
+ (BOOL)receiptExistsForIdentifier:(NSString *)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(NSString *)arg3;
+ (PFModule *)receiptModuleForIdentifier:(NSString *)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(NSString *)arg3 error:(id *)arg4;
+ (NSArray *)receiptIdentifiersForVolume:(NSString *)arg1;
- (NSDictionary *)createReceipt:(NSString *)arg1 withPlan:(IFInstallPlan *)arg2;
- (NSTask *)taskToCreateReceipt:(NSString *)arg1 withPlan:(IFInstallPlan *)arg2;
@end

