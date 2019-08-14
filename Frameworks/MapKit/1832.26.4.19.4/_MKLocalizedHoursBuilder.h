//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOBusinessHours, NSColor, NSDate, NSString, NSTimeZone;

@interface _MKLocalizedHoursBuilder : NSObject
{
    BOOL _isClosedTodayAllDay;
    BOOL _isCurrentlyClosed;
    BOOL _isClosingSoon;
    BOOL _isOpeningSoon;
    BOOL _isPermanentlyClosed;
    BOOL _isTemporarilyClosed;
    NSString *_localizedOperatingHours;
    NSString *_localizedOpenState;
    NSColor *_hoursStateLabelColor;
    NSDate *_compareDate;
    unsigned long long _geoMapItemOpeningHourOptions;
    unsigned long long _localizedHoursStringOptions;
    NSTimeZone *_timeZone;
    GEOBusinessHours *_operatingHours;
}

+ (id)localizedHoursDayRangeString:(id)arg1;
+ (id)localizedHoursStringSpecialHours;
+ (id)localizedHoursStringNormalHours;
+ (id)testGetHoursFormatter;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetMonthAndDayFormatter;
@property(retain, nonatomic) GEOBusinessHours *operatingHours; // @synthesize operatingHours=_operatingHours;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long localizedHoursStringOptions; // @synthesize localizedHoursStringOptions=_localizedHoursStringOptions;
@property(nonatomic) unsigned long long geoMapItemOpeningHourOptions; // @synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions;
@property(retain, nonatomic) NSDate *compareDate; // @synthesize compareDate=_compareDate;
- (void).cxx_destruct;
- (void)calculateWidthsForData:(id)arg1;
- (id)formatData:(id)arg1;
- (void)updateHoursLabelColor;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1;
- (void)_updateLocalizedString;
@property(readonly, nonatomic) NSColor *hoursStateLabelColor; // @synthesize hoursStateLabelColor=_hoursStateLabelColor;
@property(readonly, nonatomic) NSString *localizedOpenState; // @synthesize localizedOpenState=_localizedOpenState;
@property(readonly, nonatomic) NSString *localizedOperatingHours; // @synthesize localizedOperatingHours=_localizedOperatingHours;
- (void)_resetLocalizedBuilder:(BOOL)arg1;
- (void)_commonInit;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3;

@end
