//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKTripleCondition : NSObject
{
    // Error parsing type: , name: rawCondition
}

+ (void)setSupportsSecureCoding:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (BOOL)evaluateOn:(id)arg1;
- (id)or:(id)arg1;
- (id)and:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3;
- (id)initWithValue:(BOOL)arg1;
@property(nonatomic, readonly) NSString *description;

@end

