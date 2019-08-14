//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject
{
    unsigned int _timeToReconnectWithDiagnosticd;
    unsigned int _eventCount;
    SignpostSupportObjectExtractor *_notificationExtractor;
    NSObject<OS_dispatch_queue> *_spObjectProcessingQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSDate *_lastTailspinRequestForDelayedNotifications;
    NSDate *_lastTailspinRequest;
}

+ (id)sharedMonitor;
@property unsigned int eventCount; // @synthesize eventCount=_eventCount;
@property unsigned int timeToReconnectWithDiagnosticd; // @synthesize timeToReconnectWithDiagnosticd=_timeToReconnectWithDiagnosticd;
@property(retain) NSDate *lastTailspinRequest; // @synthesize lastTailspinRequest=_lastTailspinRequest;
@property(retain) NSDate *lastTailspinRequestForDelayedNotifications; // @synthesize lastTailspinRequestForDelayedNotifications=_lastTailspinRequestForDelayedNotifications;
@property(retain) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue; // @synthesize spObjectProcessingQueue=_spObjectProcessingQueue;
@property(retain) SignpostSupportObjectExtractor *notificationExtractor; // @synthesize notificationExtractor=_notificationExtractor;
- (void).cxx_destruct;
- (void)stopMonitoringSignposts;
- (BOOL)monitorSignposts:(BOOL)arg1;
- (BOOL)startListeningForNotifications;
- (void)notificationStreamTerminated:(id)arg1 unmatchedIntervalStarts:(id)arg2;
- (id)initPrivate;
- (void)setupNotificationPipeline;
- (void)processInterval:(id)arg1;
- (id)tailspinFilenamePrefixForInterval:(id)arg1;
- (void)perfProblemDetected:(id)arg1 tailspinFilenamePrefix:(id)arg2;

@end
