//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSViewController, PKPaymentAuthorizationMainViewController;

@protocol PKPaymentAuthorizationMainViewControllerDelegate
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(NSViewController *)arg1 completion:(void (^)(BOOL))arg2 reply:(void (^)(BOOL, NSData *))arg3;
- (NSViewController *)passphraseViewController;
- (void)paymentAuthorizationMainViewControllerDidCancel:(PKPaymentAuthorizationMainViewController *)arg1;
@end

