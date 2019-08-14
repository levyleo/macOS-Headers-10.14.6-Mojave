//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding>
{
    NSString *proxiedObjectIdentifier;
}

+ (void)removeMappingsForCoder:(id)arg1;
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;
+ (struct __CFDictionary *)proxyDecodingMap;
- (void).cxx_destruct;
- (id)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
