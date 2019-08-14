//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject
{
    NSObject<OS_nw_channel> *_kernelChannel;
    struct nw_protocol *_protocol;
    struct nw_protocol *_defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}

@property(retain) NSMutableDictionary *userChannels; // @synthesize userChannels=_userChannels;
@property struct nw_protocol *defaultInputProtocol; // @synthesize defaultInputProtocol=_defaultInputProtocol;
@property struct nw_protocol *protocol; // @synthesize protocol=_protocol;
@property(retain) NSObject<OS_nw_channel> *kernelChannel; // @synthesize kernelChannel=_kernelChannel;
- (void).cxx_destruct;
- (void)dealloc;

@end
