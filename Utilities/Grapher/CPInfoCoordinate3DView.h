//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPInfoCoordinate2DView.h"

@interface CPInfoCoordinate3DView : CPInfoCoordinate2DView
{
    id mZName;
    id mHName;
    id mR0Name;
    id mThetaName;
    id mPhi2Name;
    id mZValue;
    id mHValue;
    id mR0Value;
    id mThetaValue;
    id mPhi2Value;
}

- (BOOL)shouldDisplay;
- (void)updateUI;
- (id)coordValues;
- (void)updateCoordsOfSystems:(id)arg1 ofCartesianPoint:(double [3])arg2;

@end
