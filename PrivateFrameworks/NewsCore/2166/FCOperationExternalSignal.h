//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationRetrySignal-Protocol.h>

@class NSString;
@protocol OS_dispatch_group;

@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal>
{
    BOOL _result;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (void)triggerWithRetry:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
