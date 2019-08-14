//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <Catalyst/CATArbitratorProxy-Protocol.h>

@class NSString, _CATArbitratorRegistrationEntry;

__attribute__((visibility("hidden")))
@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy>
{
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
    BOOL _isExclusive;
}

@property(readonly, nonatomic) BOOL isExclusive; // @synthesize isExclusive=_isExclusive;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
