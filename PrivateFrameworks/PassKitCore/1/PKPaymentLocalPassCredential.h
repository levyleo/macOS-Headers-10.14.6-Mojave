//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential
{
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    PKPaymentPass *_paymentPass;
}

@property(readonly, copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (id)init;

@end

