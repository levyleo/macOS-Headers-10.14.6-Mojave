//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFUtilities : NSObject
{
}

+ (BOOL)hasEnabledManagedUserDefault:(id)arg1;
+ (BOOL)hasInternalPhotosDiagnosticsCapability;
+ (BOOL)isOnACPower:(double *)arg1;
+ (BOOL)runningUnderDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)arg1 systemVersionMinor:(unsigned int *)arg2 systemVersionBugFixRev:(unsigned int *)arg3;
+ (BOOL)didStopInDebugger;

@end
