//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _ICContact;

@interface _ICContactRecord : NSObject
{
    unsigned char _changeType;
    NSString *_identifier;
    _ICContact *_contact;
}

@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _ICContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3;

@end
