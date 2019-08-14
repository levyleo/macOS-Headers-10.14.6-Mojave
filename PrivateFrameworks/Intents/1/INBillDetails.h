//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBillPayee, INCurrencyAmount, NSDateComponents;

@interface INBillDetails : NSObject <NSCopying, NSSecureCoding>
{
    INBillPayee *_billPayee;
    INCurrencyAmount *_amountDue;
    INCurrencyAmount *_minimumDue;
    INCurrencyAmount *_lateFee;
    NSDateComponents *_dueDate;
    NSDateComponents *_paymentDate;
    long long _billType;
    long long _paymentStatus;
}

+ (BOOL)supportsSecureCoding;
@property long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property long long billType; // @synthesize billType=_billType;
@property(copy) NSDateComponents *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(copy) NSDateComponents *dueDate; // @synthesize dueDate=_dueDate;
@property(copy) INCurrencyAmount *lateFee; // @synthesize lateFee=_lateFee;
@property(copy) INCurrencyAmount *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(copy) INCurrencyAmount *amountDue; // @synthesize amountDue=_amountDue;
@property(copy) INBillPayee *billPayee; // @synthesize billPayee=_billPayee;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8;

@end
