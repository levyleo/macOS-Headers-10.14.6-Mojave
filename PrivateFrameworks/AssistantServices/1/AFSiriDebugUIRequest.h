//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest
{
    NSString *_message;
    BOOL _frontmost;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_makeAppFrontmost;
- (id)createResponse;
- (id)message;
- (id)initWithMessage:(id)arg1 makeAppFrontmost:(BOOL)arg2;

@end

