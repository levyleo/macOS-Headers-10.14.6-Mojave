//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class NSHashTable, NSString;
@protocol NAScheduler, OS_dispatch_queue;

@interface MTTimeListener : NSObject <MTAgentNotificationListener>
{
    id <NAScheduler> _serializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg1;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

