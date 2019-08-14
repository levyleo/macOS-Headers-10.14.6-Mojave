//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitHostAppProtocols/ROCKImpersonateable-Protocol.h>

@class NSData;
@protocol UHAHidSettingsInterface;

@protocol UHAHidManagerInterposingInterface <ROCKImpersonateable>
@property(readonly) double doubleClickInterval;
@property(readonly) BOOL forceClickPerformsQuickLook;
@property(readonly, nonatomic) id <UHAHidSettingsInterface> settings;
- (NSData *)pullNextEventDataFromQueue;
- (void)registerEventPingHandler:(void (^)(void))arg1;
@end
