//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _SFCertificate : NSObject
{
    id _certificateInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct OpaqueSecCertificateRef *secCertificate;
@property(readonly, nonatomic) NSData *serialNumber;
@property(readonly, nonatomic) NSString *issuerName;
@property(readonly, nonatomic) NSString *subject;
@property(readonly, nonatomic) long long certificateType;
- (id)initWithSecCertificate:(struct OpaqueSecCertificateRef *)arg1;

@end
