//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, Protocol;
@protocol OS_dispatch_queue, PKPlugIn;

@protocol PKPlugIn <NSObject>
@property(copy) CDUnknownBlockType notificationBlock;
@property(readonly) NSBundle *embeddedBundle;
@property(readonly) id embeddedPrincipal;
@property(readonly) id plugInPrincipal;
@property(readonly) _Bool active;
@property(readonly) _Bool spent;
@property(readonly) NSUUID *multipleInstanceUUID;
@property(readonly) id <PKPlugIn> supersededBy;
@property long long userElection;
@property(readonly) NSDictionary *localizedFileProviderActionNames;
@property(readonly) NSString *localizedContainingName;
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
@property(readonly) NSDictionary *entitlements;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) BOOL onSystemVolume;
@property(readonly) NSURL *containingUrl;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
- (void)localizedInfoDictionaryForKeys:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSUserDefaults *)defaults;
- (id <PKPlugIn>)createInstanceWithUUID:(NSUUID *)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(Protocol *)arg2;
- (void)endUsing:(void (^)(NSError *))arg1;
- (BOOL)useBundle:(NSString *)arg1 error:(id *)arg2;
- (BOOL)beginUsingWithError:(id *)arg1;
- (void)beginUsing:(void (^)(NSError *))arg1;
@end

