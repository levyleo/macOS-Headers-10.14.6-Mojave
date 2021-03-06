//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _systemApp;
    NSString *_bundleID;
    NSString *_purgeableReason;
    long long _staticDiskUsage;
    NSNumber *_storeItemID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isSystemApp) BOOL systemApp; // @synthesize systemApp=_systemApp;
@property(readonly, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, nonatomic) long long staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(readonly, nonatomic) NSString *purgeableReason; // @synthesize purgeableReason=_purgeableReason;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

