//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMPromise-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FMFuture : NSObject <FMPromise>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
    NSString *_descriptor;
}

+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithCompletionHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)combineAllFutures:(id)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
@property(copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)reschedule:(id)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)_flushCompletionBlocks;
- (id)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (BOOL)cancel;
- (BOOL)_queue_isCancelled;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (id)init;
- (id)recoverIgnoringError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
