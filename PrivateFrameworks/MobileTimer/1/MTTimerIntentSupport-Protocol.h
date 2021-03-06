//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSDate, NSString, NSUUID;

@protocol MTTimerIntentSupport <NSObject>
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) NSUUID *timerID;
@end

