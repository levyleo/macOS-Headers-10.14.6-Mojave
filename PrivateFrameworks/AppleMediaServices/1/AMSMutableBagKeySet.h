//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet
{
    NSMutableSet *_mutableKeys;
}

@property(retain) NSMutableSet *mutableKeys; // @synthesize mutableKeys=_mutableKeys;
- (void).cxx_destruct;
- (void)unionBagKeySet:(id)arg1;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (id)keys;
- (id)init;

@end

