//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/NSObject-Protocol.h>

@class NSData, PBCodable;

@protocol ACProtobufCoding <NSObject>
- (NSData *)_encodeProtobufData;
- (PBCodable *)_encodeProtobuf;
- (id)_initWithProtobufData:(NSData *)arg1;
- (id)_initWithProtobuf:(PBCodable *)arg1;
@end
