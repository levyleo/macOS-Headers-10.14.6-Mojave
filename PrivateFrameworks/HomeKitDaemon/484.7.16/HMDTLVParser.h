//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMDTLVParser : HMFObject
{
    NSData *_tlvData;
}

+ (id)parserWithData:(id)arg1;
- (void).cxx_destruct;
- (id)parseResponseForArray:(unsigned long long)arg1;
- (id)parseResponseForUUID:(unsigned long long)arg1;
- (id)parseResponseForString:(unsigned long long)arg1;
- (id)parseResponseForUInt16:(unsigned long long)arg1;
- (id)parseResponseForUInt8:(unsigned long long)arg1;
- (id)parseResponseForNumber:(unsigned long long)arg1;
- (id)parseResponseForData:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;

@end
