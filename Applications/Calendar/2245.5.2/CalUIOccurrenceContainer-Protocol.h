//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CalDateRange, CalUIOccurrence, CalUIOccurrenceChangeInfo, EKEvent, NSArray, NSDate, NSDraggingSession, NSEvent, NSSet, NSString, NSView;

@protocol CalUIOccurrenceContainer <NSObject>
- (void)setupEvents:(NSSet *)arg1 withChangeInfo:(CalUIOccurrenceChangeInfo *)arg2;
- (CalUIOccurrence *)addUIOccurrenceWithEvent:(EKEvent *)arg1 isEphemeral:(BOOL)arg2;
- (void)removeEventOccurrenceID:(NSString *)arg1;
- (void)occurrencesRequireRelayout:(NSArray *)arg1;
- (CalUIOccurrence *)anyOccurrenceForEventOccID:(NSString *)arg1;
- (CalUIOccurrence *)proposedOccurrenceForEventOccID:(NSString *)arg1;
- (CalUIOccurrence *)ephemeralOccurrenceForEventOccID:(NSString *)arg1;
- (CalUIOccurrence *)uiOccForEventOccurrenceID:(NSString *)arg1;
- (NSArray *)events;
- (NSArray *)allOccurrences;
- (void)layoutOccurrences;
- (void)clearOccurrences;
- (BOOL)isAllDayContainer;
- (Class)occurrenceClass;

@optional
- (CalDateRange *)dateRange;
- (BOOL)showExternalDragImageForDraggingSession:(NSDraggingSession *)arg1 atScreenPoint:(struct CGPoint)arg2;
- (double)startTimeIncrementForArrowKey:(unsigned short)arg1;
- (double)durationIncrementForArrowKey:(unsigned short)arg1;
- (CalUIOccurrence *)occurrenceRelativeToOccurrence:(CalUIOccurrence *)arg1 forKeystroke:(unsigned short)arg2;
- (void)keyDown:(NSEvent *)arg1;
- (void)mouseDragged:(NSEvent *)arg1 forOccurrence:(CalUIOccurrence *)arg2;
- (NSDate *)dateAtPointInWindow:(struct CGPoint)arg1;
- (NSView *)firstDayViewForOccurrence:(CalUIOccurrence *)arg1;
- (void)promoteEphemeralOccurrence:(CalUIOccurrence *)arg1;
- (void)clearEphemeralOccurrences;
- (NSArray *)ephemeralOccurrences;
- (void)removeOccurrence:(CalUIOccurrence *)arg1;
- (void)addOccurrence:(CalUIOccurrence *)arg1;
@end
