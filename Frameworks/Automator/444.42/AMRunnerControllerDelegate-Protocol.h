//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/NSObject-Protocol.h>

@class AMAction, AMConversion, NSError, NSNumber, NSString;
@protocol AMRunnerController;

@protocol AMRunnerControllerDelegate <NSObject>

@optional
- (void)runnerController:(id <AMRunnerController>)arg1 didResumeWithAction:(AMAction *)arg2;
- (void)runnerController:(id <AMRunnerController>)arg1 didRunConversion:(AMConversion *)arg2;
- (void)runnerController:(id <AMRunnerController>)arg1 willRunConversion:(AMConversion *)arg2;
- (void)runnerController:(id <AMRunnerController>)arg1 didLogMessage:(NSString *)arg2 ofType:(unsigned long long)arg3 fromAction:(AMAction *)arg4;
- (void)runnerControllerDidPause:(id <AMRunnerController>)arg1;
- (void)runnerControllerWillPause:(id <AMRunnerController>)arg1;
- (void)runnerControllerWillStop:(id <AMRunnerController>)arg1;
- (void)runnerController:(id <AMRunnerController>)arg1 didError:(NSError *)arg2;
- (void)runnerControllerDidStop:(id <AMRunnerController>)arg1;
- (void)runnerControllerDidFinish:(id <AMRunnerController>)arg1;
- (void)runnerControllerDidRun:(id <AMRunnerController>)arg1;
- (void)runnerController:(id <AMRunnerController>)arg1 progressDidChange:(NSNumber *)arg2 forAction:(AMAction *)arg3;
- (void)runnerController:(id <AMRunnerController>)arg1 didRunAction:(AMAction *)arg2;
- (void)runnerController:(id <AMRunnerController>)arg1 willRunAction:(AMAction *)arg2;
- (void)runnerControllerWillRun:(id <AMRunnerController>)arg1;
@end
