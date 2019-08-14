//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate;

@interface HMDUserPushCache : HMFObject
{
    HMDDevice *_device;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end
