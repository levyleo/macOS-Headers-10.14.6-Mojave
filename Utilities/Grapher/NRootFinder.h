//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NFunction.h"

@interface NRootFinder : NFunction
{
    unsigned long long mDim;
    double *mRoot;
    const double *mInitialPoint;
    BOOL mFindMaximum;
    BOOL mFound;
}

+ (BOOL)findExtremum:(double *)arg1 of:(id)arg2 withSelector:(SEL)arg3 from:(const double *)arg4 dimension:(unsigned long long)arg5 maximum:(BOOL)arg6;
+ (BOOL)findRoot:(double *)arg1 of:(id)arg2 withSelector:(SEL)arg3 from:(const double *)arg4 dimension:(unsigned long long)arg5;
+ (BOOL)findRoot:(double *)arg1 of:(id)arg2 withSelector:(SEL)arg3 between:(double)arg4 and:(double)arg5;
- (BOOL)findExtremum:(double *)arg1 from:(const double *)arg2 dimension:(unsigned long long)arg3 maximum:(BOOL)arg4;
- (void)findExtremumFromInitialPoint;
- (void)findExtremumFromInitialPointWithAction:(id)arg1;
- (BOOL)findRoot:(double *)arg1 between:(double)arg2 and:(double)arg3;
- (BOOL)findRoot:(double *)arg1 from:(const double *)arg2 dimension:(unsigned long long)arg3;
- (BOOL)usesThreadedSearch;
- (void)findRootFromInitialPoint;
- (void)findRootFromInitialPointWithAction:(id)arg1;

@end

