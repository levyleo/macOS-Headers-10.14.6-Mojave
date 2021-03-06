//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISStoreURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSDictionary, NSHTTPURLResponse, NSString;

@interface CKItemTellAFriend : NSObject <ISStoreURLOperationDelegate>
{
    NSDictionary *_properties;
    ISStoreURLOperation *_tellAFriendOperation;
    NSString *_tellAFriendSubject;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSHTTPURLResponse *_tellAFriendResponse;
}

- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
@property(readonly, nonatomic) NSString *tellAFriendSubject;
@property(readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property(readonly, nonatomic) NSString *tellAFriendBody;
- (BOOL)loadTellAFriendMessage:(id *)arg1;
- (id)initWithItemDictionary:(id)arg1;
- (id)_tellAFriendDictionary;
- (void)_finishTellAFriendLoadWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

