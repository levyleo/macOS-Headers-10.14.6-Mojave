//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMKeyValueCollectionStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IMKeyValueCollectionDictionaryStorage : NSObject <IMKeyValueCollectionStorage>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
