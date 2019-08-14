//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;
@protocol OS_dispatch_queue;

@interface FBARequestsLog : NSObject
{
    BOOL _isActive;
    NSMutableArray *_requests;
    NSURL *_requestDirectoryURL;
    NSObject<OS_dispatch_queue> *_requestSaveQueue;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *requestSaveQueue; // @synthesize requestSaveQueue=_requestSaveQueue;
@property(retain) NSURL *requestDirectoryURL; // @synthesize requestDirectoryURL=_requestDirectoryURL;
@property BOOL isActive; // @synthesize isActive=_isActive;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)replaceObjectInRequestsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromRequestsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inRequestsAtIndex:(unsigned long long)arg2;
- (void)addRequest:(id)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (BOOL)active;
- (id)init;

@end
