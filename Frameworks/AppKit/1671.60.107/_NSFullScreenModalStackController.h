//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/_NSFullScreenModalDimmingWindowDelegate-Protocol.h>

@class NSString, NSTimer, NSWindow, NSWindowStackController, _NSFullScreenModalCollapsedTabWindow, _NSFullScreenModalDimmingWindow, _NSFullScreenSpace;

__attribute__((visibility("hidden")))
@interface _NSFullScreenModalStackController : NSObject <_NSFullScreenModalDimmingWindowDelegate>
{
    _NSFullScreenSpace *_space;
    NSWindowStackController *_windowStackController;
    _NSFullScreenModalDimmingWindow *_dimmingWindow;
    _NSFullScreenModalCollapsedTabWindow *_collapsedTabWindow;
    BOOL _disableBeginPresentation;
    BOOL _isPresentedModally;
    BOOL _isFrontWindowOrderedIn;
    NSTimer *_deferredDragStartTimer;
    id _showDragEffectEventMonitor;
    BOOL _isFrontWindowDragging;
    BOOL _isDragActive;
    BOOL _dragShouldSnapBackForDropTarget;
    BOOL _dragShouldSnapBackForMinimize;
    BOOL _hasDragProhibitChangePoint;
    struct CGPoint _dragSnapBackForMinimizeProhibitChangePosition;
    BOOL _dragShouldSnapBack;
    NSWindow *_frontWindow;
    BOOL _isRegisteredForNotifications;
    BOOL _invalid;
    NSString *_beforeStackedSavedWindowFrameString;
    struct CGRect _windowDragStartFrame;
}

@property(nonatomic) BOOL disableBeginPresentation; // @synthesize disableBeginPresentation=_disableBeginPresentation;
@property(readonly, nonatomic) BOOL isDragActive; // @synthesize isDragActive=_isDragActive;
@property(readonly, nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(readonly, nonatomic) _NSFullScreenModalCollapsedTabWindow *collapsedTabWindow; // @synthesize collapsedTabWindow=_collapsedTabWindow;
@property(readonly, nonatomic) NSWindowStackController *windowStackController; // @synthesize windowStackController=_windowStackController;
@property(nonatomic) _NSFullScreenSpace *space; // @synthesize space=_space;
- (void)windowDidEndDraggingNotification:(id)arg1;
- (void)windowWillStartDraggingNotification:(id)arg1;
- (void)_actuallyBeginDraggingFrontWindow;
- (void)_dragMoved;
- (void)updateDraggingDimWindow;
- (void)_showModalWindowDragEffect;
- (void)windowDidBecomeKeyNotification:(id)arg1;
- (void)draggedWindowMovedToSpace:(unsigned long long)arg1 repositionUnderMouseIfDetached:(BOOL)arg2;
- (BOOL)dragShouldSnapBackForMinimize;
- (id)selectedWindow;
- (id)beforeStackedSavedWindowFrameString;
- (id)backgroundWindowIDs;
- (void)endTilePresentation;
- (void)nonAnimatedBeginModalPresentationForTileJoin;
- (void)endModalPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginModalPresentationWithCompletionHandler:(CDUnknownBlockType)arg1 forCloseSpace:(BOOL)arg2 waitUntilDone:(BOOL)arg3;
- (void)beginModalPresentationWithCompletionHandler:(CDUnknownBlockType)arg1 forCloseSpace:(BOOL)arg2;
- (struct CGRect)_adjustedSnapshotWindowFrame:(struct CGRect)arg1 basedOnImage:(struct CGImage *)arg2;
- (void)reshapeFrontWindow;
- (void)reshapeContents;
- (void)displayChanged;
- (double)modalWindowWidth;
- (BOOL)createModalStackForWindow:(id)arg1;
- (void)tearDownAnyModalStateAnimating:(BOOL)arg1;
- (void)tearDownAnyModalState;
- (void)_setFrontWindow:(id)arg1;
- (void)registerForNotifications:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)didDoTabbedOrderAboveForWindow:(id)arg1;
- (void)didDoTabbedOrderOutForWindow:(id)arg1;
- (void)windowStackTabGroupDidChangeForWindow:(id)arg1;
- (void)clearWindowStateForModalStackGroupToWindow:(id)arg1;
- (void)applyWindowStateForModalStackGroupToWindow:(id)arg1;
- (void)tabBarWillSelectTab;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
