//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAHIDStep : NSObject
{
    unsigned int _debugid;
    int _pid;
    double _timestamp;
    unsigned long long _tid;
}

+ (id)hidStepWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
@property(readonly) unsigned long long tid; // @synthesize tid=_tid;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) unsigned int debugid; // @synthesize debugid=_debugid;
- (id)debugDescription;
- (id)initWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
- (id)initWithTimestamp:(double)arg1 debugID:(unsigned int)arg2 pid:(int)arg3 tid:(unsigned long long)arg4;

@end
