//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDisplayTiming.h>

__attribute__((visibility("hidden")))
@interface _NSDisplayTiming : NSDisplayTiming
{
    unsigned long long _offset;
    unsigned long long _interval;
    unsigned long long _latency;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)submissionTimeBeforeTime:(unsigned long long)arg1;
- (unsigned long long)submissionTimeAfterTime:(unsigned long long)arg1;
- (unsigned long long)displayTimeForSubmissionTime:(unsigned long long)arg1;
- (unsigned long long)submissionTimeForDisplayTime:(unsigned long long)arg1;
- (unsigned long long)displayTimeBeforeTime:(unsigned long long)arg1;
- (unsigned long long)displayTimeAfterTime:(unsigned long long)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAnchorTime:(unsigned long long)arg1 interval:(unsigned long long)arg2 latency:(unsigned long long)arg3;

@end
