//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _miniUUIDs;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDSet:(id)arg1;

@end
