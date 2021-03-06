//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RCRecordingViewController.h"

@class RCPlaybackView, UIBarButtonItem, UISplitViewController;

@interface RCPlaybackViewController : RCRecordingViewController
{
    BOOL _emptyLibraryRequested;
    BOOL _needsExtraSpace;
    BOOL _isRecentlyDeleted;
    UISplitViewController *_parentSplitViewController;
    UIBarButtonItem *_shareButtonItem;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_undeleteButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_recoverItem;
    UIBarButtonItem *_eraseItem;
}

@property(nonatomic) BOOL isRecentlyDeleted; // @synthesize isRecentlyDeleted=_isRecentlyDeleted;
@property(nonatomic) BOOL needsExtraSpace; // @synthesize needsExtraSpace=_needsExtraSpace;
@property(retain, nonatomic) UIBarButtonItem *eraseItem; // @synthesize eraseItem=_eraseItem;
@property(retain, nonatomic) UIBarButtonItem *recoverItem; // @synthesize recoverItem=_recoverItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) UIBarButtonItem *undeleteButtonItem; // @synthesize undeleteButtonItem=_undeleteButtonItem;
@property(retain, nonatomic) UIBarButtonItem *deleteButtonItem; // @synthesize deleteButtonItem=_deleteButtonItem;
@property(retain, nonatomic) UIBarButtonItem *shareButtonItem; // @synthesize shareButtonItem=_shareButtonItem;
@property(nonatomic) BOOL emptyLibraryRequested; // @synthesize emptyLibraryRequested=_emptyLibraryRequested;
@property(nonatomic) __weak UISplitViewController *parentSplitViewController; // @synthesize parentSplitViewController=_parentSplitViewController;
- (void).cxx_destruct;
- (void)handleDarkmodeChange;
- (void)handleUndeleteForUUID:(id)arg1;
- (void)clear;
- (void)shareCurrentRecording;
- (void)updateForDisplayModeChange:(BOOL)arg1;
- (void)updateForOrientationChange;
- (void)enablePlaybackWithCompositionController:(id)arg1 displayModel:(id)arg2;
- (id)createNewWaveformViewControllerWithDataSource:(id)arg1 isOverview:(BOOL)arg2;
- (void)updateToolBarButtonStatesWithRecordingModel:(id)arg1;
- (void)enterEditMode;
- (void)_doEdit;
- (void)_doErase:(id)arg1;
- (void)_doRecover:(id)arg1;
- (void)_doUndelete;
- (void)_doDelete;
- (void)_doShare;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)uuidBeingDisplayed;
- (void)_updateDeleteUndelete:(BOOL)arg1;
- (void)updateWithRecordingModel:(id)arg1;
- (id)displayModeButtonIfApplicable;
- (void)_reset;
- (void)_classSpecificLoadView;
- (Class)_viewClass;
- (void)_syncShowsEmptyLibrary;

// Remaining properties
@property(retain, nonatomic) RCPlaybackView *view; // @dynamic view;

@end

