//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AFPowerAssertionManager : NSObject
{
    unsigned int _powerAssertion;
    NSString *_debugName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)releasePowerAssertion;
- (void)takePowerAssertionWithName:(id)arg1;
- (id)init;

@end

