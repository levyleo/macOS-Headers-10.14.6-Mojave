//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSError, _TtC8FMClient24AuthenticationCredential;

@protocol _TtP8FMClient21ClientSessionProtocol_
- (void)sessionInfoWithCompletion:(void (^)(_TtC8FMClient11SessionInfo *, NSError *))arg1;
- (void)credentialNotAuthorizedWithCredential:(_TtC8FMClient24AuthenticationCredential *)arg1 error:(NSError *)arg2 completion:(void (^)(NSError *))arg3;
- (void)credential:(void (^)(_TtC8FMClient24AuthenticationCredential *, NSError *))arg1;
@end

