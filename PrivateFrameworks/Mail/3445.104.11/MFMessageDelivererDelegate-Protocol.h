//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MFMessageDeliverer;

@protocol MFMessageDelivererDelegate <NSObject>
- (void)messageDeliveryDidFinish:(MFMessageDeliverer *)arg1;

@optional
- (void)messageDeliveryWillBegin:(MFMessageDeliverer *)arg1;
@end
