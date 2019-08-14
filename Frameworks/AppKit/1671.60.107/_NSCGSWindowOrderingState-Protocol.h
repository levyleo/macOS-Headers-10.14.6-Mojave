//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSArray, NSCGSWindow;

@protocol _NSCGSWindowOrderingState <NSObject>
- (void)orderApplicationWindowsFront;
- (void)conditionallyOrderGroupFront:(NSCGSWindow *)arg1 withTimestamp:(double)arg2;
- (void)orderGroup:(NSCGSWindow *)arg1 op:(int)arg2 againstWindow:(NSCGSWindow *)arg3;
- (void)clearOrderingGroup:(NSCGSWindow *)arg1;
- (void)removeWindowFromOrderingGroup:(NSCGSWindow *)arg1;
- (void)addWindow:(NSCGSWindow *)arg1 toOrderingGroupBelowWindow:(NSCGSWindow *)arg2;
- (void)addWindow:(NSCGSWindow *)arg1 toOrderingGroupAboveWindow:(NSCGSWindow *)arg2;
- (void)unlockWindowSublevel:(NSCGSWindow *)arg1;
- (void)lockWindow:(NSCGSWindow *)arg1 toAbsoluteSublevel:(int)arg2;
- (void)reassociateWithSpacesByGeometry:(NSCGSWindow *)arg1;
- (void)disassociateFromSpacesIfOrderedOut:(NSCGSWindow *)arg1;
- (void)setDesiredSpace:(unsigned long long)arg1 forWindow:(NSCGSWindow *)arg2;
- (void)setLevel:(int)arg1 forWindow:(NSCGSWindow *)arg2;
- (void)orderWindow:(NSCGSWindow *)arg1 op:(int)arg2 againstWindow:(NSCGSWindow *)arg3;

@optional
- (void)applyOperations:(NSArray *)arg1;
@end
