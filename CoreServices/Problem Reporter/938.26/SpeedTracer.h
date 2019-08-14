//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURL, NSURLConnection;

@interface SpeedTracer : NSObject
{
    NSURLConnection *_postConnection;
    NSURLConnection *_getConnection;
    NSMutableData *_traceData;
    NSURL *_primaryRadarURL;
    NSURL *_relatedRadarsURL;
    NSURL *_crashTracerURL;
    NSString *_primaryRadarState;
    NSString *_errorString;
    id _delegate;
}

- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)getTraceData:(id)arg1;
- (BOOL)postCrashReport:(id)arg1;
- (void)_parseXMLResponseData:(id)arg1;
- (void)setErrorString:(id)arg1;
- (id)errorString;
- (id)relatedRadarsURL;
- (id)primaryRadarState;
- (id)primaryRadarURL;
- (id)crashTracerURL;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;

@end
