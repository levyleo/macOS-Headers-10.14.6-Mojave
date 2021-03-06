//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetAppsUtilities/NAFuture.h>

@class NSObject;
@protocol NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NALazyFuture : NAFuture
{
    BOOL _started;
    CDUnknownBlockType _block;
    id <NAScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) id <NAScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)willAddCompletionBlock;
- (id)initWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;

@end

