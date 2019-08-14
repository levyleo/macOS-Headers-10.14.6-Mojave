//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSViewToolTipOwner-Protocol.h>

@class NSImage, NSString, NSTableView;

@interface NSTableHeaderView : NSView <NSViewToolTipOwner>
{
    NSTableView *_tableView;
    long long _resizedColumn;
    long long _draggedColumn;
    long long _pressedColumn;
    NSImage *_headerDragImage;
    double _draggedDistance;
    unsigned int _isColumnResizing:1;
    unsigned int _showHandCursorFired:1;
    unsigned int _toolTipRectsDirty:1;
    unsigned int _alignTitleWithDataCell:1;
    unsigned int _nextColumnAfterDrawnOneIsSelected:1;
    unsigned int _wantsTranslucency:1;
    unsigned int _addedBlurToClipView:1;
    unsigned int _usedNewHeight:1;
    unsigned int _drawsBackground:1;
    unsigned int _reserved:23;
    BOOL _skipDrawingSeparator;
    id _viewDataX;
}

- (void).cxx_destruct;
- (void)_updateColumnViewWidthsAnimated:(BOOL)arg1;
- (void)_endDraggingColumn:(long long)arg1 animated:(BOOL)arg2;
- (void)_didMoveFromColumn:(long long)arg1 toColumn:(long long)arg2 animated:(BOOL)arg3;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_setAlignTitleWithDataCell:(BOOL)arg1;
- (BOOL)_alignTitleWithDataCell;
@property(readonly) double draggedDistance;
@property(readonly) long long draggedColumn;
@property(readonly) long long resizedColumn;
@property __weak NSTableView *tableView;
- (void)_finishedMakingConnections;
- (void)_windowChangedKeyState;
- (long long)_resizeableColumnAtPoint:(struct CGPoint)arg1;
- (long long)_previousNonHiddenColumnStartingAtColumn:(long long)arg1;
- (void)resetCursorRects;
- (struct CGRect)_cursorRectForColumn:(long long)arg1;
- (struct CGRect)_ltrCursorRectForColumn:(long long)arg1;
- (struct CGRect)_rtlCursorRectForColumn:(long long)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)_removeBackgroundView;
- (void)_setBackgroundView:(id)arg1;
- (id)_backgroundView;
- (void)_updateClipViewBackgroundColors;
- (void)setLayer:(id)arg1;
- (void)_updateBackgroundViewFrame;
- (void)_addOrRemoveBlurViewAsNecessary;
- (id)_makeBlurBackgroundViewWithFrame:(struct CGRect)arg1;
- (BOOL)_viewOverridesDrawing;
- (BOOL)_hasTranslucency;
- (void)_setWantsTranslucency:(BOOL)arg1;
- (BOOL)_wantsTranslucency;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)_preferredAppearance;
- (void)_viewBasedRawRect:(struct CGRect)arg1;
- (void)_switchToNonViewBasedIfNeeded;
- (void)_switchToViewBasedIfNeeded;
- (BOOL)_supportsViewsForAnimations;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)_addToolTipRects;
- (void)_invalidateOrComputeNewCursorRectsIfNecessary;
- (void)_setToolTipRectsDirty:(BOOL)arg1;
- (void)_windowKeyChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_old_encodeWithCoder_NSTableHeaderView:(id)arg1;
- (void)dealloc;
- (void)_startObservingKeyWindow:(id)arg1;
- (void)_stopObservingKeyWindow;
- (BOOL)_isColumnReordering;
- (BOOL)_isColumnResizing;
- (void)_resizeColumn:(long long)arg1 withEvent:(id)arg2;
- (BOOL)_canUseReorderResizeImageCache;
- (void)_dropTableViewOverdrawIfNecessary;
- (void)_reorderColumn:(long long)arg1 withEvent:(id)arg2;
- (void)_setNeedsDisplayForDraggedDelta:(double)arg1;
- (id)_resizeCursorForTableColumn:(id)arg1;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1 canceled:(char *)arg2;
- (id)_lastDraggedEventFollowing:(id)arg1;
- (void)_endDraggingColumn:(long long)arg1;
- (void)_beginDraggingColumn:(long long)arg1;
- (void)_drawHeaderDragImageForColumn:(long long)arg1;
- (struct CGRect)_unobstructedVisibleHeaderRectOfColumn:(long long)arg1;
- (BOOL)_trackAndModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2 stopOnReorderGesture:(char *)arg3;
- (void)_scheduleDelayedShowOpenHandCursorIfNecessary;
- (void)_unshowOpenHandCursor:(id)arg1;
- (void)_cancelDelayedShowOpenHandCursor;
- (void)_showOpenHandCursor:(id)arg1;
- (struct CGRect)_headerRectForInvalidation:(long long)arg1;
- (void)_doModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2;
- (void)_drawColumnHeaderWithIndexes:(id)arg1;
- (BOOL)_drawingEndSeparator;
- (BOOL)_hasRowHeaderColumn;
- (struct CGRect)_rowHeaderScrollableContentVisibleRect;
- (struct CGRect)_rowHeaderFixedContentRect;
- (BOOL)_layoutIsSameAsCachedLayoutWithFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_invalidateRightMostLineIfNeeded;
- (void)_drawOverflowHeaderInRect:(struct CGRect)arg1;
- (struct CGRect)_overflowRectForBounds:(struct CGRect)arg1;
- (void)_drawHeaderOfColumn:(long long)arg1;
- (BOOL)_nextColumnDrawsLeftSeparatorFromColumn:(long long)arg1;
- (BOOL)_nextColumnAfterOneBeingDrawnIsSelected;
- (id)_preparedHeaderCellAtColumn:(long long)arg1;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
- (void)_drawHeaderFillerInRect:(struct CGRect)arg1 matchLastState:(BOOL)arg2;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (id)_preparedHeaderFillerCell;
- (void)_tableView:(id)arg1 didRemoveTableColumnAtIndex:(long long)arg2;
- (void)_tableView:(id)arg1 willRemoveTableColumn:(id)arg2;
- (void)_tableView:(id)arg1 didAddTableColumn:(id)arg2;
- (void)_tableView:(id)arg1 willAddTableColumn:(id)arg2;
- (id)_overflowHeaderCellPrototype;
- (void)_setOverflowHeaderCellPrototype:(id)arg1;
- (void)_drawHeaderCell:(id)arg1 withFrame:(struct CGRect)arg2 withStateFromColumn:(long long)arg3;
- (long long)columnAtPoint:(struct CGPoint)arg1;
- (struct CGRect)headerRectOfColumn:(long long)arg1;
- (BOOL)_wantsClipViewToDoOverhangViews;
- (id)init;
- (double)_defaultHeight;
- (BOOL)_canSupportTallerHeight;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (unsigned long long)accessibilityColumnForChild:(id)arg1;
- (id)accessibilityChildForColumn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
