//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore;

@interface EKConflictScanner : NSObject
{
    EKEventStore *_eventStore;
}

@property(retain) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (id)_conflictDetailsForJobs:(id)arg1;
- (id)_conflictScanJobForEvent:(id)arg1;
- (id)conflictsForEvents:(id)arg1;
- (id)conflictsForNotifications:(id)arg1;
- (id)initWithEventStore:(id)arg1;

@end
