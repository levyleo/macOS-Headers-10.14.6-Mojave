//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_data;

@protocol SiriCoreSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (BOOL)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id *)arg1;
- (void)siriCore_logDiagnostics;
- (BOOL)siriCore_isProvisional;
- (BOOL)siriCore_isRestartable;
- (BOOL)siriCore_isRetryable;
- (BOOL)siriCore_bufferingAllowedDuringActiveSession;
@end
