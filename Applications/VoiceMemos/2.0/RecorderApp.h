//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class RCUndoTrackedUIAlertView;

@interface RecorderApp : UIApplication
{
    BOOL _willShowUndoAlertView;
    CDUnknownBlockType _alertDidCancelBlock;
    RCUndoTrackedUIAlertView *_undoAlertView;
}

@property(retain, nonatomic) RCUndoTrackedUIAlertView *undoAlertView; // @synthesize undoAlertView=_undoAlertView;
@property(nonatomic) BOOL willShowUndoAlertView; // @synthesize willShowUndoAlertView=_willShowUndoAlertView;
@property(copy, nonatomic) CDUnknownBlockType alertDidCancelBlock; // @synthesize alertDidCancelBlock=_alertDidCancelBlock;
- (void).cxx_destruct;
- (void)_didDismissAlertView:(id)arg1 withButtonIndex:(unsigned long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)_showEditAlertViewWithUndoManager:(id)arg1 window:(id)arg2;
- (void)_writeApplicationDefaultPNGSnapshot;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (void)ppt_didShowMemo;
- (void)ppt_didShowList;

@end
