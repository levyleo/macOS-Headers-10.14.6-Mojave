//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HOAccessorySettingsDetailsViewControllerProtocol-Protocol.h"
#import "HOAppleMusicAccountModuleControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class HOAppleMusicAccountModuleController, NADeallocationSentinel, NAFuture, NSString, UIAlertController;

@interface HOAppleMusicAccountViewController : HUItemTableViewController <HOAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HOAccessorySettingsDetailsViewControllerProtocol>
{
    HOAppleMusicAccountModuleController *_appleMusicAccountModuleController;
    NAFuture *_accountArbitrationFuture;
    NADeallocationSentinel *_appleMusicLoadingViewControllerDeallocationSentinel;
    UIAlertController *_appleMusicLoadingViewController;
}

@property(retain, nonatomic) UIAlertController *appleMusicLoadingViewController; // @synthesize appleMusicLoadingViewController=_appleMusicLoadingViewController;
@property(retain, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel; // @synthesize appleMusicLoadingViewControllerDeallocationSentinel=_appleMusicLoadingViewControllerDeallocationSentinel;
@property(retain, nonatomic) NAFuture *accountArbitrationFuture; // @synthesize accountArbitrationFuture=_accountArbitrationFuture;
@property(retain, nonatomic) HOAppleMusicAccountModuleController *appleMusicAccountModuleController; // @synthesize appleMusicAccountModuleController=_appleMusicAccountModuleController;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_appleMusicFooterMessage;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg1;
- (void)appleMusicModuleController:(id)arg1 willPresentContext:(id)arg2 account:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)itemModuleControllers;
- (void)viewDidLoad;
- (id)initWithAccessoryGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
