//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSTimeZone;
@protocol GEOTransitDeparture, GEOTransitDepartureFrequency, GEOTransitLine;

@protocol GEOTransitDepartureSequence <NSObject>
@property(readonly, nonatomic) NSSet *nextStopIDs;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) NSString *headsign;
@property(readonly, nonatomic) NSString *direction;
@property(readonly, nonatomic) long long displayStyle;
@property(readonly, nonatomic) BOOL isLowFrequency;
@property(readonly, nonatomic) id <GEOTransitLine> line;
- (NSArray *)operatingHoursForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (BOOL)isDepartureDateInactive:(NSDate *)arg1 withReferenceDate:(NSDate *)arg2;
- (id <GEOTransitDepartureFrequency>)frequencyToDescribeAtDate:(NSDate *)arg1;
- (double)frequencyForSortingAtDate:(NSDate *)arg1;
- (BOOL)hasFrequencyAtDate:(NSDate *)arg1;
- (NSArray *)departuresValidForDate:(NSDate *)arg1;
- (id <GEOTransitDeparture>)firstDepartureValidForDate:(NSDate *)arg1;
- (BOOL)isValidForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (NSDate *)firstOpenOperatingDateOnOrAfterDate:(NSDate *)arg1;
- (id <GEOTransitDepartureFrequency>)firstDepartureFrequencyOnOrAfterDate:(NSDate *)arg1;
- (unsigned long long)numberOfDeparturesAfterDate:(NSDate *)arg1;
- (id <GEOTransitDeparture>)firstDepartureAfterDate:(NSDate *)arg1;
- (id <GEOTransitDeparture>)firstDepartureOnOrAfterDate:(NSDate *)arg1;
@end
