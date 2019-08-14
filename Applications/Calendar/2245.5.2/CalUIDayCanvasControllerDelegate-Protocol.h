//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CalUIDayCanvasController, NSDate;

@protocol CalUIDayCanvasControllerDelegate <NSObject>
- (double)occurrenceRightInset;
- (BOOL)allDayLabelHasBackground;
- (BOOL)shouldShowDateBanner;
- (Class)allDayOccurrenceClassForCanvasController:(CalUIDayCanvasController *)arg1;
- (long long)numberOfDaysForCanvasController:(CalUIDayCanvasController *)arg1;
- (NSDate *)startDateForCanvasController:(CalUIDayCanvasController *)arg1;

@optional
- (void)canvasDidEndSwipingAlongInfiniteAxis;
- (void)canvasDidBeginSwipingAlongInfiniteAxis;
- (void)canvasFirstVisibleDateDidChange:(NSDate *)arg1;
- (BOOL)shouldSelectDateOnCanvasClickForCanvasController:(CalUIDayCanvasController *)arg1;
- (BOOL)canvasControllerShouldAnimateResize:(CalUIDayCanvasController *)arg1;
- (BOOL)canvasControllerShouldPulseOccurrencesForKeyboardNavigation:(CalUIDayCanvasController *)arg1;
- (void)canvasControllerDidUpdateTimelineSizing:(CalUIDayCanvasController *)arg1;
- (BOOL)showAllDayInBannerForCanvasController:(CalUIDayCanvasController *)arg1;
- (long long)hoursToDisplayForCanvasController:(CalUIDayCanvasController *)arg1;
@end
