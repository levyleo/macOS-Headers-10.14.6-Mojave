//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ISSupport/ISS_AYOperation.h>

@class ISS_MMMemberAccount;

@interface ISS_MMCredentialsRequest : ISS_AYOperation
{
    ISS_MMMemberAccount *_account;
}

- (void)dealloc;
- (void)dispatch;
- (id)initWithMemberAccount:(id)arg1;

@end
