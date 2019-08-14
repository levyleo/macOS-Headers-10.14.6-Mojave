//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import <FinderKit/TCoalescingNodeObserverProtocol-Protocol.h>
#import <FinderKit/TTrackingAreaOwnerProtocol-Protocol.h>

@class FI_TColumnPreviewHeaderViewController, FI_TColumnPreviewInfoViewController, FI_TColumnPreviewViewController, FI_TPreviewOptions, NSLayoutConstraint, NSStackView, NSString;

__attribute__((visibility("hidden")))
@interface FI_TColumnPreviewController : FI_TViewController <TCoalescingNodeObserverProtocol, TTrackingAreaOwnerProtocol>
{
    FI_TColumnPreviewViewController *_previewViewController;
    FI_TColumnPreviewHeaderViewController *_headerViewController;
    FI_TColumnPreviewInfoViewController *_infoViewController;
    NSStackView *_stackView;
    NSLayoutConstraint *_metaTitleWidthConstraint;
    struct TNSRef<NSArray<FI_TBaseInfoWindowViewController *>, void> _viewControllers;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    struct TFENodeVector _targetInfoNodes;
    unsigned int _targetInfoNodeNotificationOptions;
    struct TNotificationCenterObserver _viewDidMoveToSuperviewObserver;
    struct TNotificationCenterObserver _viewDidMoveToWindowObserver;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver _frameChangedObserver;
    struct TNSRef<FI_TContainerLayoutManager, void> _containerLayoutManager;
    struct TKeyValueObserver _contentInsetsDidChangeObserver;
    struct TNSRef<NSArray<NSLayoutConstraint *>, void> _layoutConstraints;
    struct TNSWeakPtr<NSLayoutConstraint, void> _minHeightLayoutConstraint;
    struct TNSRef<NSTrackingArea, void> _wholeColumnTrackingArea;
    _Bool _inColumnView;
    struct TNSRef<FI_TPreviewOptions, void> _previewOptions;
}

@property(nonatomic) _Bool inColumnView; // @synthesize inColumnView=_inColumnView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(retain, nonatomic) FI_TPreviewOptions *previewOptions; // @dynamic previewOptions;
- (void)setShowSmallThumbnail:(_Bool)arg1;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodeMDAttributeChanged:(const struct TFENode *)arg2 attributes:(id)arg3 isDisplayAttributes:(_Bool)arg4;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 aliasesTargetChanged:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesGoingAway:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesDeleted:(const map_27534541 *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesChanged:(const map_253f12d2 *)arg2;
- (void)handleNodePropertyChanges:(const map_253f12d2 *)arg1;
- (_Bool)shouldShowMagicPocketLine:(struct CGRect)arg1;
- (_Bool)shouldShowScrollBarsForVisibleHeight:(double)arg1;
- (struct CGRect)visibleRectForScrollView:(id)arg1;
- (void)updateQuickActionsPocketInScrollView:(id)arg1;
- (void)updateScrollStateForContent;
- (double)columnViewHorizontalScrollerHeight:(id)arg1;
- (id)browserScrollViewForScrollView:(id)arg1;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
- (void)updateMinHeightConstraintForView:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)setBrowserTargetNode:(const struct TFENode *)arg1;
- (void)setTargetInfoNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)targetInfoNodes;
- (id)nibName;
- (void)viewLoaded;
- (void)aboutToTearDown;
- (void)initCommon;
- (id)init;
- (id)initWithContainerLayoutManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
