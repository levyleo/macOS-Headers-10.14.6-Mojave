//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKSCNetworkInterface : NSObject
{
    struct __SCNetworkInterface *mInterfaceRef;
}

@property(readonly, nonatomic) CRKSCNetworkInterface *lastNonLayeringChildInterface;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *MACAddress;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithSCNetworkInterface:(struct __SCNetworkInterface *)arg1;
- (void)dealloc;

@end

