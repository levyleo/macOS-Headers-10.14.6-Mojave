//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXCollectionsViewDataSource-Protocol.h"
#import "IPXCollectionsViewDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "IPXSlideshowEditorThumbnailStripViewDelegate-Protocol.h"

@class IPXDatabaseAlbumController, IPXSlideshow, IPXSlideshowEditorController, IPXSlideshowEditorThumbnailStripLayout, IPXSlideshowEditorThumbnailStripView, NSArray, NSMutableDictionary, NSString;

@interface IPXSlideshowEditorThumbnailStripController : IPXBrowserController <IPXSlideshowEditorThumbnailStripViewDelegate, IPXObjectsControllerChangeReceiver, IPXCollectionsViewDataSource, IPXCollectionsViewDelegate, IPXSelectionProvider>
{
    IPXSlideshowEditorThumbnailStripLayout *_mediaViewLayout;
    IPXDatabaseAlbumController *_albumController;
    NSArray *_sectionMap;
    NSArray *_sectionMapForDragAnimation;
    NSArray *_sectionMapForReload;
    NSArray *_sectionMapForDragAnimationForReload;
    NSArray *_indexPathsToSelectAfterAnimationCompleted;
    NSMutableDictionary *_mediaItemsForVersions;
    BOOL _advancedAuthoringIsEnabled;
    BOOL _sectionedViewEnabled;
    struct {
        unsigned int avoidReloadingMediaViewBecauseWeAreAnimating:1;
    } _flags;
    BOOL _isDragging;
    IPXSlideshowEditorThumbnailStripView *_mediaView;
    IPXSlideshow *_slideshow;
    IPXSlideshowEditorController *_editorController;
}

+ (id)titleForDeleteMenuItemForMediaItems:(id)arg1;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property __weak IPXSlideshowEditorController *editorController; // @synthesize editorController=_editorController;
@property(retain, nonatomic) IPXSlideshow *slideshow; // @synthesize slideshow=_slideshow;
@property(readonly) IPXSlideshowEditorThumbnailStripView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (id)selectedIndexPaths;
- (void)a_trashItem:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)invalidateThumbnailStrip;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (id)preferredFirstResponder;
- (void)loadView;
- (id)selectionProviderCurrentSelection;
- (id)_allVersions;
- (id)_selectedVersions;
- (BOOL)_hasSelectedVersions;
- (void)mediaView:(id)arg1 itemWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)mediaView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)mediaView:(id)arg1 didUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5;
- (void)mediaViewBackgroundWasClicked:(id)arg1 withEvent:(id)arg2;
- (void)mediaViewSelectionDidChange:(id)arg1;
- (id)mediaView:(id)arg1 mediaSectionAtIndexPath:(id)arg2;
- (id)mediaView:(id)arg1 mediaItemAtIndexPath:(id)arg2;
- (long long)mediaView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInMediaView:(id)arg1;
- (BOOL)sectionHasCustomDurationForIndexPath:(id)arg1;
@property(readonly) BOOL useNarrowSpacing;
- (id)computeDeletionTransformFromSectionMap:(id)arg1 toSectionMap:(id)arg2;
- (id)computeInsertionTransformFromSectionMap:(id)arg1 toSectionMap:(id)arg2;
- (id)draggedTypesAcceptedByCollectionsView:(id)arg1;
- (void)animateForDeletion:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (BOOL)canRemoveItemsAtIndexPaths:(id)arg1;
- (void)moveItemsAtIndexPaths:(id)arg1 after:(BOOL)arg2 indexPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)canMoveItemsAtIndexPaths:(id)arg1 after:(BOOL)arg2 indexPath:(id)arg3;
- (BOOL)canStartMovingItemsAtIndexPaths:(id)arg1 indexPathsOfActuallyMovingItems:(id *)arg2;
- (BOOL)canStartSectionLevelManipulation;
- (BOOL)canDoAdvancedAuthoring;
- (unsigned long long)numberOfSections;
- (void)remapSections;
- (id)_mediaItemForVersion:(id)arg1;
- (void)_selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (void)deselectAllItems;
- (void)selectItemsAtIndexPaths:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)updateCustomDurationIndicatorForIndices:(id)arg1;
- (id)orderedIndicesForItemsAtIndexPaths:(id)arg1;
- (id)indicesForItemsAtIndexPaths:(id)arg1;
- (unsigned long long)indexForItemAtIndexPath:(id)arg1;
- (id)indexPathsForItemsAtOrderedIndices:(id)arg1;
- (id)indexPathsForItemsAtIndices:(id)arg1;
- (id)indexPathForItemAtIndex:(unsigned long long)arg1;
- (void)reload;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
