//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFNetAddressInternal.h>

@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal
{
    NSString *_hostname;
}

+ (id)normalizedHostname:(id)arg1;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (id)addressString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostname:(id)arg1;
- (id)init;

@end

