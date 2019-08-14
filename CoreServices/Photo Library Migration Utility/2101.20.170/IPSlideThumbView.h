//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class Album, IPMarimbaSlideshow, IPMessageReceiver, NSColor, NSImage, NSTimer;
@protocol MultiPaneContentControllerProtocol;

@interface IPSlideThumbView : NSView
{
    id mDelegate;
    id <MultiPaneContentControllerProtocol> mController;
    struct ThumbArray *mThumbs;
    Album *mCurrentAlbum;
    BOOL mVariableWidth;
    BOOL mFixedHeight;
    long long mSelectionAnchor;
    long long mSelectionExtentStart;
    long long mSelectionExtentEnd;
    int mRowsOrColumns;
    BOOL mInDrag;
    NSTimer *mAnimationTimer;
    BOOL mAnimationWasStarted;
    long long mDragFromIndex;
    double mDragHoleWidth;
    double mDragHoleHeight;
    long long mDropTargetIndex;
    double mAnimationDuration;
    NSColor *mBackgroundColor;
    IPMessageReceiver *mMessageReceiver;
    unsigned char mDrawShadow;
    unsigned char mDrawBorder;
    unsigned char mFrameClosedStacks;
    double mThumbGutter;
    double mWidth;
    double mHeight;
    double mMaxWidth;
    double mMaxHeight;
    double mThumbSize;
    double mThumbMaxSize;
    double mATPAnimStart;
    double mATPAnimDest;
    double mATPAnimationStartTime;
    double mATPAnimationDuration;
    NSTimer *mATPAnimationTimer;
    id originalScrollerTarget;
    SEL originalScrollerSelector;
    BOOL mDoNotAnimateNextMove;
    BOOL mIsVertical;
    BOOL mUseCustom;
    NSImage *mShelvedBadge;
    struct CGSize mShelvedBadgeSize;
    NSImage *mHiddenBadge;
    struct CGSize mHiddenBadgeSize;
    BOOL mDrawPlaceAtExit;
    BOOL mDontDrawHoles;
    IPMarimbaSlideshow *mSlideshow;
}

- (void)axUIElement:(id)arg1 performAction:(id)arg2;
- (id)axUIElementActions:(id)arg1;
- (id)axUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)axUIElementHelp:(id)arg1;
- (id)axUIElementDescription:(id)arg1;
- (struct CGRect)axUIElementFrame:(id)arg1;
- (long long)axUIElementIndex:(id)arg1;
- (id)axUIElementAttributeNames:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilitySelectedChildren;
- (id)createAccessibilityChildren;
- (BOOL)accessibilityIsIgnored;
- (BOOL)renderStackFraming;
- (void)setVertical:(BOOL)arg1;
- (BOOL)isVertical;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)_backgroundColorChanged:(id)arg1;
- (void)setUsesCustomBackgroundColor:(BOOL)arg1;
- (void)_dragSelection:(id)arg1 index:(long long)arg2 useSecondary:(BOOL)arg3;
- (BOOL)allowDragReorder;
- (void)_pasteFromPasteboard:(id)arg1;
- (void)thumbDidInterject:(long long)arg1;
- (void)thumbWillRemove:(long long)arg1;
- (unsigned long long)_determineDragResult:(id)arg1;
- (BOOL)fillPasteboardWithSelectionDeclaresThumbPBoardType;
- (void)_fillPasteboardWithSelection:(id)arg1 useSecondary:(BOOL)arg2;
- (void)_serviceAnimation;
- (void)_clearAnimationTimer;
- (void)_cleanUpAnimation;
- (void)_animateAHoleAt:(long long)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)_sizeFrameWidthOrHeight:(double)arg1;
- (long long)thumbnailHitTest:(struct CGPoint)arg1 clip:(BOOL)arg2;
- (long long)exhaustiveIndexForPhotoInfo:(struct IPPhotoInfo *)arg1;
- (long long)indexForPhotoInfo:(struct IPPhotoInfo *)arg1;
- (void)reduceMultiSelectTo:(struct IPPhotoInfo *)arg1;
- (void)addPhotoToSelection:(struct IPPhotoInfo *)arg1;
- (void)secondarySelectFrom:(long long)arg1 to:(long long)arg2 newSelection:(long long)arg3;
- (void)selectPhotoInfo:(struct IPPhotoInfo *)arg1 secondarySelect:(BOOL)arg2;
- (void)selectPhotoInfo:(struct IPPhotoInfo *)arg1;
- (void)setSelectionForPhotoInfo:(struct IPPhotoInfo *)arg1;
- (void)setSelectionToIndices:(long long *)arg1 count:(long long)arg2;
- (void)selectedIndices:(long long **)arg1 count:(long long *)arg2;
- (BOOL)getPreviousSecondarySelection:(BOOL)arg1 previous:(long long *)arg2;
- (BOOL)getNextSecondarySelection:(BOOL)arg1 next:(long long *)arg2;
- (BOOL)getPreviousSelection:(BOOL)arg1 previous:(long long *)arg2;
- (BOOL)getNextSelection:(BOOL)arg1 next:(long long *)arg2;
- (long long)getLastSelection;
- (long long)getFirstSelection;
- (void)_notifySelection:(long long)arg1;
- (BOOL)getSecondarySelection:(long long)arg1;
- (BOOL)getSelection:(long long)arg1;
- (BOOL)setSelection:(BOOL)arg1 index:(long long)arg2;
- (BOOL)setSelection:(BOOL)arg1 secondarySelection:(BOOL)arg2 index:(long long)arg3;
- (BOOL)setSecondarySelectionFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)setSelectionFrom:(long long)arg1 to:(long long)arg2;
- (void)clearSecondarySelectionAndNotify:(BOOL)arg1;
- (void)clearSelectionAndNotify:(BOOL)arg1;
- (void)clearSelection:(BOOL)arg1 secondarySelection:(BOOL)arg2 notify:(BOOL)arg3;
- (void)dirtyThumbFrame:(struct CGRect)arg1;
- (struct IPPhotoList *)allSelectedPhotos;
- (struct IPPhotoList *)secondarySelectedPhotos;
- (struct IPPhotoList *)selectedPhotos;
- (long long)count;
- (struct Thumb *)_thumbAtIndex:(long long)arg1;
- (double)thumbGutter;
- (long long)countPrimarySelected;
- (long long)countSecondarySelected;
- (long long)countSelected;
- (void)selectLast;
- (void)selectFirstAndForceNotify:(BOOL)arg1;
- (void)selectPrevious:(BOOL)arg1;
- (void)selectNext:(BOOL)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollThumbToVisible:(long long)arg1;
- (void)scrollSelectedThumbToVisible;
- (void)keyDown:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)doDeleteKey;
- (BOOL)keyDownIgnoresShiftKey;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)squareThumbs;
- (struct IPPhotoInfo *)photoInfoForThumb:(struct Thumb *)arg1;
- (id)getImageDB;
- (BOOL)thumbScrollRectToVisible:(struct CGRect)arg1;
- (void)_cleanUpATPAnimation;
- (void)_serviceATPAnimation;
- (void)_clearATPAnimationTimer;
- (void)animateToPosition:(double)arg1 from:(double)arg2;
- (void)scrollAnimator:(id)arg1;
- (void)awakeFromNib;
- (void)_calculateSlidesVisibleFrom:(long long *)arg1 to:(long long *)arg2 hardWay:(BOOL)arg3 useSelection:(BOOL)arg4 whollyVisible:(BOOL)arg5 subRect:(struct CGRect)arg6;
- (void)thumbChanged:(id)arg1;
- (void)photoRotated:(id)arg1;
- (void)layoutThumbs:(BOOL)arg1;
- (void)rebuildViewWithController:(id)arg1 forced:(BOOL)arg2;
- (void)clearController;
- (void)clearThumbs;
- (void)deactivateMessageReceiver;
- (void)activateMessageReceiver:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updatePreferences:(id)arg1;
- (struct CGRect)_calcThumbRect:(struct Thumb *)arg1 thumbSize:(double)arg2 maxThumbSize:(double)arg3 variableHeight:(BOOL)arg4;
- (void)setRowsOrColumns:(int)arg1;
- (void)setThumbSizeInfo;
- (struct CGSize)hiddenBadgeSize;
- (id)hiddenBadge;
- (struct CGSize)shelvedBadgeSize;
- (id)shelvedBadge;
- (BOOL)performKeyEquivalent:(id)arg1;
- (long long)_indexForPhotoInto:(struct IPPhotoInfo *)arg1;

@end
