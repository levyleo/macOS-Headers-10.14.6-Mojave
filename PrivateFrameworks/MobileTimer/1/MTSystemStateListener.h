//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAgentNotificationListener-Protocol.h>
#import <MobileTimer/MTSpringboardStartMonitorDelegate-Protocol.h>

@class NSString;
@protocol MTSystemStateDelegate;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorDelegate, MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    BOOL _restoreDoneHandled;
    id <MTSystemStateDelegate> _delegate;
}

+ (id)_restoreNotification;
+ (BOOL)isSystemRestoreDone;
@property(nonatomic) BOOL restoreDoneHandled; // @synthesize restoreDoneHandled=_restoreDoneHandled;
@property(nonatomic) __weak id <MTSystemStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (id)handledLiveDarwinNotifications;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (void)springboardStartMonitor:(id)arg1 didReceiveStarted:(BOOL)arg2;
- (BOOL)_checkIfRestoreDone;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

