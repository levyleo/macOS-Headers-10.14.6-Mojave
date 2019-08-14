//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioPowerProviding-Protocol.h>

@class AFXPCWrapper, NSString, _AFAudioPowerXPCSharedMemory;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding>
{
    AFXPCWrapper *_wrapper;
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

- (void).cxx_destruct;
- (void)didEndAccessPower;
- (BOOL)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)willBeginAccessPower;
- (id)initWithXPCWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
