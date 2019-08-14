//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface AMSURLResult : NSObject
{
    NSData *_data;
    NSString *_logUUID;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSURLResponse *_response;
    NSURLSessionTask *_task;
    id _object;
}

@property(retain) id object; // @synthesize object=_object;
@property(retain) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(readonly) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly) long long responseStatusCode;
@property(readonly) NSDictionary *responseHeaders;
@property(readonly) NSString *responseCorrelationId;
- (id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4;
- (id)initWithTaskInfo:(id)arg1 object:(id)arg2;
- (id)initWithResult:(id)arg1;

@end
