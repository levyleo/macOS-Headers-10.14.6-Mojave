//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoardUI/NSObject-Protocol.h>

@class NSDate, NSTimeZone;
@protocol BSUIDateLabelDelegate;

@protocol BSUIDateLabel <NSObject>
@property(nonatomic) BOOL isTimestamp;
@property(nonatomic) long long labelType;
@property(nonatomic) __weak id <BSUIDateLabelDelegate> delegate;
@property(nonatomic, getter=isAllDay) BOOL allDay;
- (void)prepareForReuse;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)setEndDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)setStartDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
@end

