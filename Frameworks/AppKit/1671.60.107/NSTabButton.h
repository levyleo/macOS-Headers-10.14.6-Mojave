//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTabBarViewButton.h>

#import <AppKit/NSRolloverButtonDelegate-Protocol.h>
#import <AppKit/_NSVibrancyTransitioningImageViewDelegate-Protocol.h>

@class CALayer, NSArray, NSAttributedString, NSImage, NSLayoutConstraint, NSMutableArray, NSRolloverButton, NSStackView, NSString, NSTabBarItem, NSTextField, NSView, NSVisualEffectView, _NSKeyLoopSplicingContainerView, _NSTabButtonAccessibilityHelper, _NSVibrancyTransitioningImageView;
@protocol NSTabButtonDelegate;

__attribute__((visibility("hidden")))
@interface NSTabButton : NSTabBarViewButton <_NSVibrancyTransitioningImageViewDelegate, NSRolloverButtonDelegate>
{
    BOOL _didEstablishTabBarViewItemBindings;
    NSMutableArray *_accessoryViews;
    NSArray *_accessoryViewConstraints;
    NSStackView *_titleContainerView;
    NSTextField *_titleTextField;
    NSView *_focusRingView;
    NSRolloverButton *_closeButton;
    _NSTabButtonAccessibilityHelper *_accessibilityHelper;
    NSView *_pinnedTabFaviconContainerView;
    NSVisualEffectView *_pinnedTabFaviconFullscreenVisualEffectView;
    NSView *_pinnedTabFaviconFullscreenBackgroundView;
    CALayer *_pinnedTabFaviconFullscreenBackgroundHighlightLayer;
    _NSVibrancyTransitioningImageView *_pinnedTabFaviconView;
    NSView *_mainContentContainer;
    NSView *_mainContentClippingContainer;
    _NSKeyLoopSplicingContainerView *_accessoryViewsContainer;
    NSLayoutConstraint *_mainContentContainerWidthConstraint;
    NSLayoutConstraint *_mainContentContainerLeftConstraint;
    NSLayoutConstraint *_mainContentContainerRightConstraint;
    NSLayoutConstraint *_mainContentContainerHorizontalCenteringConstraint;
    NSLayoutConstraint *_titleContainerViewHorizontalCenteringConstraint;
    NSTabBarItem *_tabBarViewItem;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    id <NSTabButtonDelegate> _delegate;
    double _buttonWidthForTitleLayout;
    unsigned long long _alignment;
    double _mainContentContainerCenterOffset;
    double _titleTextFieldCenterOffset;
    BOOL _pinned;
    NSImage *_image;
    NSImage *_alternateImage;
    BOOL _canShowCloseButton;
    BOOL _showingCloseButton;
    BOOL _isDealloced;
}

+ (id)_titleFont;
@property(nonatomic, getter=isShowingCloseButton) BOOL showingCloseButton; // @synthesize showingCloseButton=_showingCloseButton;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(readonly) NSTabBarItem *tabBarViewItem; // @synthesize tabBarViewItem=_tabBarViewItem;
@property(copy, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(readonly, nonatomic) id accessibilityHelper; // @synthesize accessibilityHelper=_accessibilityHelper;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <NSTabButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSTextField *test_titleTextField;
@property(readonly, nonatomic) NSRolloverButton *test_closeButton;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)rolloverButtonDidResignFirstResponder:(id)arg1;
- (void)rolloverButtonDidBecomeFirstResponder:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateLayer;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (id)springLoadingTarget;
- (BOOL)isSpringLoaded;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)draggingDestination;
- (id)associatedWindow;
- (id)_dragTypes;
- (id)pinnedTabDragImageOfSize:(struct CGSize)arg1;
- (id)tabDragImageOfSize:(struct CGSize)arg1;
- (id)tabImageOfSize:(struct CGSize)arg1;
- (long long)vibrancyTransitionForVibrancyTransitioningImageView:(id)arg1 transitioningFromVibrant:(BOOL)arg2 toVibrant:(BOOL)arg3;
- (id)_titleStringAttributesForMainWindow:(BOOL)arg1 activeTab:(BOOL)arg2 isDragging:(BOOL)arg3;
- (void)_updateTitleTextFieldAndAccessibilityProperties;
- (void)setHasPressedHighlight:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 shouldAnimateCloseButton:(BOOL)arg2;
@property(nonatomic) BOOL canShowCloseButton;
- (void)_closeButtonClicked:(id)arg1;
- (BOOL)_shouldShowCloseButton;
- (void)_updatePinnedTabImageViewAnimated:(BOOL)arg1;
- (void)_reconfigureFullscreenViewsUsingVisualEffectViews:(BOOL)arg1;
- (void)_removeWebsiteIconVisualEffectViewForFullScreenToolbarWindow;
- (void)_addWebsiteIconVisualEffectViewForFullScreenToolbarWindow;
- (void)_updatePinnedTabFaviconFullscreenBackgroundColor;
- (BOOL)_windowIsActive;
- (void)_updateConstraints;
- (void)_setUpConstraints;
- (void)_updateTitleContainerConstraints;
- (void)setActive:(BOOL)arg1;
- (void)setTitleTextFieldCenterOffset:(double)arg1 animated:(BOOL)arg2;
@property(nonatomic) double titleTextFieldCenterOffset; // @dynamic titleTextFieldCenterOffset;
@property(nonatomic) double mainContentContainerCenterOffset; // @dynamic mainContentContainerCenterOffset;
- (void)setMainContentContainerCenterOffset:(double)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned long long alignment; // @dynamic alignment;
@property(nonatomic) double buttonWidthForTitleLayout; // @dynamic buttonWidthForTitleLayout;
- (void)setButtonWidthForTitleLayout:(double)arg1 animated:(BOOL)arg2;
- (void)_updateAccessoryViews;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)menuForEvent:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)_keysToObserve;
- (BOOL)mouseDownCanMoveWindow;
- (id)initWithFrame:(struct CGRect)arg1 tabBarViewItem:(id)arg2;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
