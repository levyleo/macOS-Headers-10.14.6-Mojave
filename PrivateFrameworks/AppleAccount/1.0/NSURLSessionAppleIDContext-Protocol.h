//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSObject-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSSet, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionAppleIDContext <NSObject, NSCopying, NSSecureCoding>
- (NSSet *)relevantHTTPStatusCodes;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAppleIDHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(BOOL, NSDictionary *))arg4;
@end

