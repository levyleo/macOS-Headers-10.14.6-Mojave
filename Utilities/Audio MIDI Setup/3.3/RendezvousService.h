//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RendezvousService : NSObject
{
    NSString *mServiceName;
    NSString *mServiceDomain;
    int mInstanceCount;
}

- (int)changeRefCount:(int)arg1;
- (id)codedName;
- (id)domain;
- (id)name;
- (void)dealloc;
- (id)init:(id)arg1 inDomain:(id)arg2;

@end
