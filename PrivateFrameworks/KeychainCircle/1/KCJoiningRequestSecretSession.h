//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KCAESGCMDuplexSession, KCSRPClientContext, NSData, NSString;
@protocol KCJoiningRequestSecretDelegate;

@interface KCJoiningRequestSecretSession : NSObject
{
    int _state;
    KCAESGCMDuplexSession *_session;
    NSObject<KCJoiningRequestSecretDelegate> *_secretDelegate;
    KCSRPClientContext *_context;
    unsigned long long _dsid;
    NSString *_piggy_uuid;
    unsigned long long _piggy_version;
    NSData *_challenge;
    NSData *_salt;
}

+ (id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id *)arg3;
@property(retain) NSData *salt; // @synthesize salt=_salt;
@property(retain) NSData *challenge; // @synthesize challenge=_challenge;
@property unsigned long long piggy_version; // @synthesize piggy_version=_piggy_version;
@property(retain) NSString *piggy_uuid; // @synthesize piggy_uuid=_piggy_uuid;
@property(readonly) int state; // @synthesize state=_state;
@property(readonly) unsigned long long dsid; // @synthesize dsid=_dsid;
@property(readonly) KCSRPClientContext *context; // @synthesize context=_context;
@property(readonly) NSObject<KCJoiningRequestSecretDelegate> *secretDelegate; // @synthesize secretDelegate=_secretDelegate;
@property(readonly) KCAESGCMDuplexSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)description;
- (id)stateString;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(struct ccrng_state *)arg3 error:(id *)arg4;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id *)arg3;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)handleVerification:(id)arg1 error:(id *)arg2;
- (id)handleChallenge:(id)arg1 error:(id *)arg2;
- (id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id *)arg3;
- (id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id *)arg3;
- (id)copyResponseForSecret:(id)arg1 error:(id *)arg2;
- (id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id *)arg4;
- (_Bool)setupSession:(id *)arg1;
- (_Bool)isDone;
- (id)initialMessage:(id *)arg1;

@end
