//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class PDAssertion, PDAssertionCoordinator;

@protocol PDAssertionCoordinatorDelegate <NSObject>
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didInvalidateAssertion:(PDAssertion *)arg2;
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didAcquireAssertion:(PDAssertion *)arg2;
- (BOOL)assertionCoordinator:(PDAssertionCoordinator *)arg1 canAcquireAssertion:(PDAssertion *)arg2;
@end

