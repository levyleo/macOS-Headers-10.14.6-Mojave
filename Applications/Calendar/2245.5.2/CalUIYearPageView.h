//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/CalUILayerBackedView.h>

@class CalUIYearPageViewController, CalUIYearViewController, NSMutableArray;

@interface CalUIYearPageView : CalUILayerBackedView
{
    unsigned long long _fontSizeIndex;
    CalUIYearPageViewController *_yearPageViewController;
    CalUIYearViewController *_yearViewController;
    NSMutableArray *_monthViews;
    NSMutableArray *_monthRowViews;
    unsigned long long _maxNumberOfMonthsInYear;
    unsigned long long _maxNumberOfMonthsInMonthRow;
    unsigned long long _maxNumberOfWeekRowsInMonth;
    long long _pageOrientation;
}

@property(nonatomic) long long pageOrientation; // @synthesize pageOrientation=_pageOrientation;
@property unsigned long long maxNumberOfWeekRowsInMonth; // @synthesize maxNumberOfWeekRowsInMonth=_maxNumberOfWeekRowsInMonth;
@property unsigned long long maxNumberOfMonthsInMonthRow; // @synthesize maxNumberOfMonthsInMonthRow=_maxNumberOfMonthsInMonthRow;
@property unsigned long long maxNumberOfMonthsInYear; // @synthesize maxNumberOfMonthsInYear=_maxNumberOfMonthsInYear;
@property(retain) NSMutableArray *monthRowViews; // @synthesize monthRowViews=_monthRowViews;
@property(retain) NSMutableArray *monthViews; // @synthesize monthViews=_monthViews;
@property __weak CalUIYearViewController *yearViewController; // @synthesize yearViewController=_yearViewController;
@property __weak CalUIYearPageViewController *yearPageViewController; // @synthesize yearPageViewController=_yearPageViewController;
@property unsigned long long fontSizeIndex; // @synthesize fontSizeIndex=_fontSizeIndex;
- (void).cxx_destruct;
- (unsigned long long)numberOfRowsInMonthWithStartDate:(id)arg1;
- (long long)numberOfMonthsInYearForDate:(id)arg1;
- (long long)numberOfMonthsInRowForDate:(id)arg1;
- (unsigned long long)numberOfMonthRowsForPageOrientation:(long long)arg1;
- (id)calendar;
- (void)redisplay;
- (void)layout;
- (BOOL)dayStringFitsForFontSizeIndex:(unsigned long long)arg1;
- (void)updateMonthRowHeightConstraints;
- (void)configureMonthRowsForPageOrientation:(long long)arg1;
- (void)configureWithStartDate:(id)arg1;
- (id)initWithYearPageViewController:(id)arg1;

@end
