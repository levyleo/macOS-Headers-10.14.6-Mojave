//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSArray *_containerPrivacySettings;
}

@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (BOOL)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (long long)databaseScope;

@end
