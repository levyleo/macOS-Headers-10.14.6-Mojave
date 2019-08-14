//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "ICMImageGalleryAttachmentViewItemDelegate-Protocol.h"
#import "ICMImageGalleryFilterViewControllerDelegate-Protocol.h"
#import "ICMImageGalleryQuadEditorControllerDelegate-Protocol.h"
#import "ICMToolbarCenteringTextFieldDelegate-Protocol.h"
#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class ICAttachment, ICAttachmentGalleryModel, ICAttachmentPreviewImageCache, ICDocCamScannedDocumentEditor, ICMAlertSheetTouchBarController, ICMImageGalleryCollectionView, ICMImageGalleryFilterViewController, ICMImageGalleryImageScrollView, ICMImageGalleryPrintController, ICMImageGalleryQuadEditorController, ICMImageGalleryTouchBarController, ICMPasswordEntryViewController, ICMSharingMenuController, ICMToolbarCenteringTextField, NSArray, NSButton, NSLayoutConstraint, NSManagedObjectContext, NSMenu, NSPopover, NSSegmentedControl, NSSet, NSSplitView, NSString, NSToolbar, NSToolbarItem;

@interface ICMImageGalleryWindowController : NSWindowController <NSCollectionViewDataSource, NSCollectionViewDelegate, NSSharingServiceDelegate, NSToolbarDelegate, ICMImageGalleryFilterViewControllerDelegate, ICMImageGalleryAttachmentViewItemDelegate, ICMImageGalleryQuadEditorControllerDelegate, ICMToolbarCenteringTextFieldDelegate, NSSharingServicePickerDelegate>
{
    BOOL _isAnimatingQuadEditorController;
    BOOL _shouldRotateLeft;
    BOOL _isDeletingSelectedItems;
    ICAttachment *_attachment;
    NSLayoutConstraint *_sidebarMinWidthConstraint;
    NSLayoutConstraint *_sidebarMaxWidthConstraint;
    NSSplitView *_splitView;
    ICMImageGalleryCollectionView *_collectionView;
    ICMImageGalleryImageScrollView *_imageView;
    ICAttachment *_observedAttachment;
    ICDocCamScannedDocumentEditor *_documentEditor;
    NSArray *_displayedAttachments;
    ICMImageGalleryFilterViewController *_filterViewController;
    NSPopover *_filterPopover;
    ICAttachmentPreviewImageCache *_imageCache;
    ICMSharingMenuController *_sharingMenuController;
    NSManagedObjectContext *_sharingMenuWorkerContext;
    ICMImageGalleryPrintController *_printController;
    ICMPasswordEntryViewController *_passwordViewController;
    id _eventMonitor;
    NSButton *_rotateButton;
    ICMImageGalleryQuadEditorController *_quadEditorController;
    NSToolbarItem *_doneToolbarItem;
    NSToolbarItem *_cancelToolbarItem;
    ICMToolbarCenteringTextField *_standardToolbarTitleTextField;
    ICMToolbarCenteringTextField *_recropToolbarTitleTextField;
    NSMenu *_standardToolbarTitleItemMenu;
    NSSegmentedControl *_standardScaleSegmentedControl;
    NSSegmentedControl *_recropScaleSegmentedControl;
    NSToolbar *_recropToolbar;
    NSToolbar *_standardToolbar;
    ICMImageGalleryTouchBarController *_touchBarController;
    ICMAlertSheetTouchBarController *_recropTouchBarController;
}

+ (id)keyPathsForValuesAffectingCanScaleDown;
+ (id)keyPathsForValuesAffectingCanScaleUp;
+ (id)keyPathsForValuesAffectingSelectedFilterType;
@property(retain, nonatomic) ICMAlertSheetTouchBarController *recropTouchBarController; // @synthesize recropTouchBarController=_recropTouchBarController;
@property(retain, nonatomic) ICMImageGalleryTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(nonatomic) BOOL isDeletingSelectedItems; // @synthesize isDeletingSelectedItems=_isDeletingSelectedItems;
@property(retain, nonatomic) NSToolbar *standardToolbar; // @synthesize standardToolbar=_standardToolbar;
@property(retain, nonatomic) NSToolbar *recropToolbar; // @synthesize recropToolbar=_recropToolbar;
@property(nonatomic) __weak NSSegmentedControl *recropScaleSegmentedControl; // @synthesize recropScaleSegmentedControl=_recropScaleSegmentedControl;
@property(nonatomic) __weak NSSegmentedControl *standardScaleSegmentedControl; // @synthesize standardScaleSegmentedControl=_standardScaleSegmentedControl;
@property(retain, nonatomic) NSMenu *standardToolbarTitleItemMenu; // @synthesize standardToolbarTitleItemMenu=_standardToolbarTitleItemMenu;
@property(nonatomic) __weak ICMToolbarCenteringTextField *recropToolbarTitleTextField; // @synthesize recropToolbarTitleTextField=_recropToolbarTitleTextField;
@property(nonatomic) __weak ICMToolbarCenteringTextField *standardToolbarTitleTextField; // @synthesize standardToolbarTitleTextField=_standardToolbarTitleTextField;
@property(nonatomic) __weak NSToolbarItem *cancelToolbarItem; // @synthesize cancelToolbarItem=_cancelToolbarItem;
@property(nonatomic) __weak NSToolbarItem *doneToolbarItem; // @synthesize doneToolbarItem=_doneToolbarItem;
@property(retain, nonatomic) ICMImageGalleryQuadEditorController *quadEditorController; // @synthesize quadEditorController=_quadEditorController;
@property(nonatomic) __weak NSButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(nonatomic) BOOL shouldRotateLeft; // @synthesize shouldRotateLeft=_shouldRotateLeft;
@property(nonatomic) BOOL isAnimatingQuadEditorController; // @synthesize isAnimatingQuadEditorController=_isAnimatingQuadEditorController;
@property(retain, nonatomic) ICMPasswordEntryViewController *passwordViewController; // @synthesize passwordViewController=_passwordViewController;
@property(retain, nonatomic) ICMImageGalleryPrintController *printController; // @synthesize printController=_printController;
@property(retain, nonatomic) NSManagedObjectContext *sharingMenuWorkerContext; // @synthesize sharingMenuWorkerContext=_sharingMenuWorkerContext;
@property(retain, nonatomic) ICMSharingMenuController *sharingMenuController; // @synthesize sharingMenuController=_sharingMenuController;
@property(retain, nonatomic) ICAttachmentPreviewImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSPopover *filterPopover; // @synthesize filterPopover=_filterPopover;
@property(retain, nonatomic) ICMImageGalleryFilterViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(retain, nonatomic) NSArray *displayedAttachments; // @synthesize displayedAttachments=_displayedAttachments;
@property(retain, nonatomic) ICDocCamScannedDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(retain, nonatomic) ICAttachment *observedAttachment; // @synthesize observedAttachment=_observedAttachment;
@property(nonatomic) __weak ICMImageGalleryImageScrollView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak ICMImageGalleryCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSLayoutConstraint *sidebarMaxWidthConstraint; // @synthesize sidebarMaxWidthConstraint=_sidebarMaxWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sidebarMinWidthConstraint; // @synthesize sidebarMinWidthConstraint=_sidebarMinWidthConstraint;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)moveGalleryAccessibilityItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)setupAccessibility;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)updateTouchBar;
- (void)setUpforRecropToolbarItems;
- (void)setUpforStandardToolbarItems;
- (void)collectionViewItemDidMouseUpWithoutShiftOrCommand:(id)arg1;
- (void)collectionViewItemDidUpdateImageSize:(id)arg1;
- (void)collectionViewItem:(id)arg1 didChangeTitle:(id)arg2;
- (id)galleryAttachmentViewItemImageCache;
- (void)reloadVisibleItems;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAttachments;
@property(readonly, nonatomic) NSSet *filterTypesForSelectedAttachments;
- (id)orderedAttachments;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)toolbarTextFieldDidDoubleClick:(id)arg1;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)createSharingServicePicker;
- (void)selectFirstItemIfNoValidSelectionExistsAndUpdateImageViewIfNecessary;
- (void)printNote:(id)arg1;
- (void)exportNoteAsPDF:(id)arg1;
- (void)renameAttachment:(id)arg1;
- (void)showInNote:(id)arg1;
- (void)showSharingServicePicker:(id)arg1;
@property(readonly, nonatomic) BOOL canShare;
- (void)rotateButtonPressed:(id)arg1;
- (void)zoomSegmentedControlPressed:(id)arg1;
- (void)zoomResetTextView:(id)arg1;
- (void)zoomOutTextView:(id)arg1;
- (void)zoomInTextView:(id)arg1;
- (void)dismissQuadEditorIfNecessary;
- (void)cancelPressed:(id)arg1;
- (void)savePressed:(id)arg1;
- (void)quadValidityDidChange:(BOOL)arg1;
- (void)recropButtonPressed:(id)arg1;
- (void)filterToolbarButtonPressed:(id)arg1;
- (void)toggleFloatOnTop:(id)arg1;
- (void)closeFilterPopoverIfNecessary;
@property(readonly, nonatomic) BOOL canDeleteSelectedItems;
- (void)deleteSelectedItems;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
@property(readonly, nonatomic) BOOL canScaleToActualSize;
@property(readonly, nonatomic) BOOL canScaleDown;
@property(readonly, nonatomic) BOOL canScaleUp;
- (void)alertAndDeleteMarkupForAttachments:(id)arg1;
- (BOOL)anyAttachmentWithMarkupDataForAttachments:(id)arg1;
- (void)updateCanScaleSegmentedControlIfNecessary;
- (void)updateSelectedFilterTypesIfNecessary;
- (void)setFilterTypeForSelectedAttachments:(short)arg1;
- (void)filterController:(id)arg1 didSelectFilterType:(short)arg2;
- (void)cancelSheetsIfNecessary;
- (void)noteDecryptedStatusDidChange:(id)arg1;
- (void)closeWindowsIncludingSheets:(BOOL)arg1;
- (void)closeWindowIfNecessary;
- (void)noteWillMoveToRecentlyDeleted:(id)arg1;
- (void)attachmentWasDeleted:(id)arg1;
- (void)didMergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
@property(readonly, nonatomic) ICAttachmentGalleryModel *galleryModel;
- (void)loadAttachment:(id)arg1;
- (void)selectSubAttachments:(id)arg1 scrollPosition:(unsigned long long)arg2;
- (void)selectSubAttachments:(id)arg1;
- (void)updateSubAttachmentsToMatchModel;
- (void)updateWindowTitle;
- (void)updateCollectionViewItemIfNecessaryForRecentlyLoadedAttachment:(id)arg1;
- (void)updateRotationButton;
- (void)stopObservingAttachment:(id)arg1;
- (void)startObservingAttachment:(id)arg1;
- (void)updateSidebarItemSize;
- (id)touchBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)flowLayout;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)updateShouldRotateLeft;
- (void)windowDidBecomeKey:(id)arg1;
- (void)menuDidEndTracking:(id)arg1;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
