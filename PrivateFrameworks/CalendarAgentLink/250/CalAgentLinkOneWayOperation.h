//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkOneWayOperation : CalAgentLinkOperation
{
    BOOL _semaphoreDecremented;
}

@property(nonatomic) BOOL semaphoreDecremented; // @synthesize semaphoreDecremented=_semaphoreDecremented;
- (void)willFinish;
- (void)prepare;
- (id)init;

@end
