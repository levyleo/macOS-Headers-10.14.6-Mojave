//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSDate, NSDatePicker, NSLayoutConstraint, NSPopUpButton, NSTextField, NSTimeZone;

__attribute__((visibility("hidden")))
@interface NVTransitTimeControlView : NSView
{
    NSLayoutConstraint *_datePickerLeadingConstraintForArriveByAllowed;
    NSLayoutConstraint *_datePickerLeadingConstraintForArriveByNotAllowed;
    BOOL _allowArriveBy;
    BOOL _showCustomControl;
    BOOL _currentResponderCustomControl;
    int _selectedScheduleMode;
    NSTimeZone *_departureTimeZone;
    NSTimeZone *_arrivalTimeZone;
    id _target;
    SEL _action;
    NSPopUpButton *_timeIntervalPopup;
    NSPopUpButton *_departureArrivalPopup;
    NSTextField *_leaveLabel;
    NSDatePicker *_customDepartureDatePicker;
    NSArray *_departureIntervals;
    NSDate *_selectedDate;
    NSLayoutConstraint *_departureArrivalPopupWidthConstraint;
    NSLayoutConstraint *_timeIntervalPopupToDepartureArrivalPopupConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *timeIntervalPopupToDepartureArrivalPopupConstraints; // @synthesize timeIntervalPopupToDepartureArrivalPopupConstraints=_timeIntervalPopupToDepartureArrivalPopupConstraints;
@property(retain, nonatomic) NSLayoutConstraint *departureArrivalPopupWidthConstraint; // @synthesize departureArrivalPopupWidthConstraint=_departureArrivalPopupWidthConstraint;
@property(nonatomic) BOOL currentResponderCustomControl; // @synthesize currentResponderCustomControl=_currentResponderCustomControl;
@property(nonatomic) BOOL showCustomControl; // @synthesize showCustomControl=_showCustomControl;
@property(nonatomic) int selectedScheduleMode; // @synthesize selectedScheduleMode=_selectedScheduleMode;
@property(copy, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(copy, nonatomic) NSArray *departureIntervals; // @synthesize departureIntervals=_departureIntervals;
@property(readonly, nonatomic) NSDatePicker *customDepartureDatePicker; // @synthesize customDepartureDatePicker=_customDepartureDatePicker;
@property(readonly, nonatomic) NSTextField *leaveLabel; // @synthesize leaveLabel=_leaveLabel;
@property(readonly, nonatomic) NSPopUpButton *departureArrivalPopup; // @synthesize departureArrivalPopup=_departureArrivalPopup;
@property(readonly, nonatomic) NSPopUpButton *timeIntervalPopup; // @synthesize timeIntervalPopup=_timeIntervalPopup;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL allowArriveBy; // @synthesize allowArriveBy=_allowArriveBy;
- (void).cxx_destruct;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)datePickerValueChanged:(id)arg1;
- (void)performAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateSelectedScheduleMode;
- (void)departureArrivalPopupValueChanged:(id)arg1;
- (void)setShowCustomControl:(BOOL)arg1 animated:(BOOL)arg2;
- (void)resetTime;
- (void)setCustomControlToDate:(id)arg1 mode:(int)arg2 animated:(BOOL)arg3;
- (void)_updateSelectedDate;
- (void)timeIntervalPopupChangedValue:(id)arg1;
- (id)_titlesForDepartureTimeIntervals;
- (void)_updatePopupList;
- (id)_defaultDepartureTimeIntervals;
@property(retain, nonatomic) NSTimeZone *arrivalTimeZone; // @synthesize arrivalTimeZone=_arrivalTimeZone;
@property(retain, nonatomic) NSTimeZone *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(readonly, nonatomic) unsigned long long customMode;
@property(readonly, nonatomic) unsigned long long timeMode;
- (struct CGSize)intrinsicContentSize;
- (double)_timeIntervalPopupToDepartureArrivalPopupDistance;
- (void)_updateViewNextToDatePicker;
- (void)_createInitialConstraints;
- (void)_createSubviews;
- (void)updateDate;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct GEOTimepoint)selectedTimepoint;

@end
