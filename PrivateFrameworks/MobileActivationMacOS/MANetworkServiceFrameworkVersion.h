//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileActivationMacOS/NSURLSessionDataDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MANetworkServiceFrameworkVersion : NSObject <NSURLSessionDataDelegate>
{
    BOOL _allowInvalidCert;
}

@property BOOL allowInvalidCert; // @synthesize allowInvalidCert=_allowInvalidCert;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
