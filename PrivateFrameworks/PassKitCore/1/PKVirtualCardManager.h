//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject
{
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (void).cxx_destruct;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;
- (void)queryKeychainForVirtualCard:(CDUnknownBlockType)arg1;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
