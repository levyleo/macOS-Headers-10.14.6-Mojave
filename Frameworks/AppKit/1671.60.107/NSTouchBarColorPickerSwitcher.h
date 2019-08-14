//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSTouchBarPressAndHoldTransposerDelegate-Protocol.h>

@class NSArray, NSButton, NSString;
@protocol NSTouchBarColorPickerSwitcherDelegate;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerSwitcher : NSView <NSTouchBarPressAndHoldTransposerDelegate>
{
    NSButton *_popupButton;
    NSView *_popoverContainerView;
    BOOL _presentingPopover;
    long long _selectedItemIndex;
    NSArray *_items;
    id <NSTouchBarColorPickerSwitcherDelegate> _delegate;
    NSView *_container;
}

@property __weak NSView *container; // @synthesize container=_container;
@property __weak id <NSTouchBarColorPickerSwitcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transposerDidCancel:(id)arg1;
- (void)transposerDidEnd:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)_pressAndHold:(id)arg1;
- (void)hidePopover:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)showPopover:(id)arg1;
- (id)declaredLayoutConstraints;
- (void)_updatePopupButton;
@property long long selectedItemIndex;
@property(copy) NSArray *items;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
