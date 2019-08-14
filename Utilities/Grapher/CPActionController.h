//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CPAction, NSDate;

@interface CPActionController : NSWindowController
{
    id mTitle;
    id mProgressIndicator;
    id mRemainingTime;
    id mCancelButton;
    CPAction *mAction;
    NSDate *mStartDate;
    double mEstimatedDuration[10];
    double mLastDurationEstimation;
    long long mDurationEstimations;
    NSDate *mLastEstimationDate;
}

+ (void)setTimeDelayBeforeProgressWindowAppears:(double)arg1;
+ (void)waitForActionToBeTerminated:(id)arg1;
+ (id)sharedController;
- (void)cancel:(id)arg1;
- (void)waitForActionToBeTerminated:(id)arg1;
- (void)idle:(id)arg1;
- (id)remainingString;
- (BOOL)showProgressWindow;
- (double)estimatedRemainingTimeInterval;
- (double)estimatedDuration;
- (double)elapsedTimeInterval;
- (id)windowNibName;

@end
