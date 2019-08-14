//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTHUDSlider.h>

#import <QTKit/QTHUDTimelineCellDelegate-Protocol.h>

@class NSString;
@protocol QTHUDTimelineDelegate;

@interface QTHUDTimeline : QTHUDSlider <QTHUDTimelineCellDelegate>
{
    id <QTHUDTimelineDelegate> _delegate;
}

+ (void)initialize;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)takeQTTimeValueFrom:(id)arg1;
- (void)setQTTimeValue:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)QTTimeValue;
- (void)setTimeRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)timeRange;
- (void)setHighlightedTimeRanges:(id)arg1;
- (id)highlightedTimeRanges;
- (void)setBordered:(BOOL)arg1;
- (BOOL)isBordered;
- (void)setCell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)exposedBindings;
- (CDStruct_900afa40)timelineCell:(id)arg1 willChangeTimeValue:(CDStruct_900afa40)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
