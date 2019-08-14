//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSBox, NSButton, NSControl, NSDatePicker, NSImageView, NSMutableArray, NSPanel, NSPopUpButton, NSString, NSTextField, NSView, SetCommentText, SetDateIncrementOptions, SetDateOptions, SetTitleText, TitleDateTime;

@interface BatchChange : NSObject <NSTextViewDelegate>
{
    id mBatchChangePanel;
    NSPopUpButton *mFieldPopup;
    NSPopUpButton *mValuePopup;
    id mToText;
    NSControl *mOKButton;
    NSPanel *mChangeDatePanel;
    NSTextField *mInstructionText;
    NSDatePicker *mOriginalDate;
    NSDatePicker *mAdjustedDate;
    NSButton *mAdjustButton;
    NSBox *mBoxEnclosingImageView;
    NSImageView *mImageView;
    NSButton *mEmbedInEXIF;
    NSTextField *mExplanationText;
    unsigned long long mPhotoCount;
    struct CGSize mOriginalEnclosingSize;
    BOOL mValuePopupHidden;
    NSView *mValuePopupSuperview;
    struct CGRect mValuePopupFrame;
    int mChangeType;
    NSView *mDetailView;
    BOOL mDetailInstalled;
    NSView *mInstalledView;
    TitleDateTime *mDateTimeSettingsView;
    SetDateOptions *mDateTimeView;
    SetTitleText *mTitleTextView;
    SetCommentText *mCommentTextView;
    SetDateIncrementOptions *mDateTimeIncrementView;
    NSMutableArray *mBatchChangeNibObjects;
}

- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)runModalDateChangeInWindow:(id)arg1 document:(id)arg2 selection:(struct IPPhotoList *)arg3;
- (void)adjustedDateChanged:(id)arg1;
- (void)_changeDateDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)dealloc;
- (void)batchChange:(int)arg1 document:(id)arg2 selection:(struct IPPhotoList *)arg3;
- (void)_redoChangeType:(int)arg1 document:(id)arg2 selection:(id)arg3 originalValues:(id)arg4 newValues:(id)arg5 userInfo:(id)arg6;
- (void)_undoChangeType:(int)arg1 document:(id)arg2 selection:(id)arg3 originalValues:(id)arg4 newValues:(id)arg5 userInfo:(id)arg6;
- (void)_doRedo:(id)arg1;
- (void)_doUndo:(id)arg1;
- (void)_switchDetailView:(id)arg1;
- (void)_selectType:(int)arg1;
- (void)changeType:(id)arg1;
- (void)_setValueHidden:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)runModalInWindow:(id)arg1 document:(id)arg2 selection:(struct IPPhotoList *)arg3;
- (void)_loadNibIfNeeded;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
