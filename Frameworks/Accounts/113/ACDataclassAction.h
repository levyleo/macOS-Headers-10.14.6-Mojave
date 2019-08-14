//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/ACProtobufCoding-Protocol.h>
#import <Accounts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding>
{
    BOOL _isDestructive;
    long long _type;
    NSArray *_affectedContainers;
}

+ (id)_actionForError:(id)arg1;
+ (id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2;
+ (id)destructiveActionWithType:(long long)arg1;
+ (id)actionWithType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *affectedContainers; // @synthesize affectedContainers=_affectedContainers;
@property(readonly, nonatomic) BOOL isDestructive; // @synthesize isDestructive=_isDestructive;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, getter=_isError) BOOL _error;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_encodeProtobufData;
- (id)_encodeProtobuf;
- (id)_initWithProtobufData:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destructivity:(BOOL)arg2 affectedContainers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
