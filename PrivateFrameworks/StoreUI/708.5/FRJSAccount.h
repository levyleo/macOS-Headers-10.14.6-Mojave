//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreJavaScript/FRJSObject.h>

@class CKStoreAccount;

@interface FRJSAccount : FRJSObject
{
    CKStoreAccount *_storeAccount;
}

@property(readonly, nonatomic) CKStoreAccount *storeAccount; // @synthesize storeAccount=_storeAccount;
- (void).cxx_destruct;
- (id)callFunction:(id)arg1 withArguments:(id)arg2;
- (id)initWithStoreAccount:(id)arg1;

@end
