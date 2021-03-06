//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface APPolicyMinimum : APPolicy <NSCopying, NSSecureCoding>
{
    NSNumber *_minimum;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSNumber *minimum; // @synthesize minimum=_minimum;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andMinimum:(id)arg2;

@end

