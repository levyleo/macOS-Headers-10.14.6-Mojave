//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSString;

@protocol CRKClassroomLockScreenMonitoring <NSObject>
+ (id)sharedMonitor;
@property(readonly, nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
@end
