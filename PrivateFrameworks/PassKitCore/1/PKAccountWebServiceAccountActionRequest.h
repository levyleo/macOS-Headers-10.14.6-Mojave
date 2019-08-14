//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountAction;

@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    PKAccountAction *_action;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) PKAccountAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
