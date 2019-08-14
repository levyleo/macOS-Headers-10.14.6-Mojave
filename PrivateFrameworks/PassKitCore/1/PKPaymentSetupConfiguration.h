//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding>
{
    NSString *_referrerIdentifier;
    NSURL *_originatingURL;
    NSString *_merchantIdentifier;
    NSArray *_signedFields;
    NSString *_signature;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSArray *signedFields; // @synthesize signedFields=_signedFields;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(retain, nonatomic) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
