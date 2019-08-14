//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/NSCopying-Protocol.h>
#import <AddressBookCore/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface ABMultiDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_entries;
}

+ (id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)multiDictionary;
+ (id)emptyDictionary;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (void)eachObject:(CDUnknownBlockType)arg1;
- (BOOL)containsKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)allKeys;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEntries:(id)arg1;
- (id)init;

@end
