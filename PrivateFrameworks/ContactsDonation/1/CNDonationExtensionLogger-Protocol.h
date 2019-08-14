//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class CNDDonorExtension, CNDonationValue, NSDate, NSError, NSString;

@protocol CNDonationExtensionLogger <NSObject>
- (void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)didRedonateValuesWithReason:(unsigned long long)arg1;
- (void)willRedonateValuesWithReason:(unsigned long long)arg1;
- (void)couldNotRenewDonation:(CNDonationValue *)arg1 error:(NSError *)arg2;
- (void)didExpireDonation:(CNDonationValue *)arg1 withError:(NSError *)arg2;
- (void)didRenewDonation:(CNDonationValue *)arg1 untilDate:(NSDate *)arg2;
- (void)willRenewDonation:(CNDonationValue *)arg1;
- (void)couldNotLoadDonorExtensionForIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)loadedDonorExtension:(CNDDonorExtension *)arg1 forIdentifier:(NSString *)arg2;
@end
