//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSNumber;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_pushToken;
    NSNumber *_attemptCount;
    NSArray *_pnrReqList;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *pnrReqList; // @synthesize pnrReqList=_pnrReqList;
@property(retain, nonatomic) NSNumber *attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTPNRRequestType:(id)arg1;
- (id)init;

@end
