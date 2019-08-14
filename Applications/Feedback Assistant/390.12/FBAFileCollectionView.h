//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "FBAScreenshotPickerDelegate-Protocol.h"
#import "NSOpenSavePanelDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"

@class FBAFileMatcher, FBARequirementInstructionViewController, FBAScreenshotPicker, NSButton, NSCache, NSPopover, NSScrollView, NSSet, NSString, NSTableView, WebView;
@protocol FBAFileCollectionViewControllerDelegate, FBAFiling;

@interface FBAFileCollectionView : NSView <NSOpenSavePanelDelegate, FBAScreenshotPickerDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _shouldAllowDetachment;
    BOOL _shouldAllowAttachment;
    BOOL _enabled;
    NSTableView *_tableView;
    NSPopover *_instructionsPopover;
    WebView *_instructionsWebView;
    id <FBAFileCollectionViewControllerDelegate> _delegate;
    id <FBAFiling> _filingDelegate;
    NSSet *_requirements;
    NSSet *_fileURLs;
    NSSet *_existingFilenames;
    FBARequirementInstructionViewController *_instructionViewController;
    NSView *_accessoryButtons;
    NSButton *_addFileButton;
    NSButton *_removeFilesButton;
    NSButton *_screenshotButton;
    NSScrollView *_tableScrollView;
    FBAScreenshotPicker *_screenshotPicker;
    NSCache *_urlIconCache;
    FBAFileMatcher *_openPanelRequirement;
}

+ (id)keyPathsForValuesAffectingContentSet;
@property(retain) FBAFileMatcher *openPanelRequirement; // @synthesize openPanelRequirement=_openPanelRequirement;
@property(retain) NSCache *urlIconCache; // @synthesize urlIconCache=_urlIconCache;
@property(retain) FBAScreenshotPicker *screenshotPicker; // @synthesize screenshotPicker=_screenshotPicker;
@property(retain) NSScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property __weak NSButton *screenshotButton; // @synthesize screenshotButton=_screenshotButton;
@property __weak NSButton *removeFilesButton; // @synthesize removeFilesButton=_removeFilesButton;
@property __weak NSButton *addFileButton; // @synthesize addFileButton=_addFileButton;
@property(retain) NSView *accessoryButtons; // @synthesize accessoryButtons=_accessoryButtons;
@property(retain) FBARequirementInstructionViewController *instructionViewController; // @synthesize instructionViewController=_instructionViewController;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL shouldAllowAttachment; // @synthesize shouldAllowAttachment=_shouldAllowAttachment;
@property BOOL shouldAllowDetachment; // @synthesize shouldAllowDetachment=_shouldAllowDetachment;
@property(copy) NSSet *existingFilenames; // @synthesize existingFilenames=_existingFilenames;
@property(copy) NSSet *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(copy) NSSet *requirements; // @synthesize requirements=_requirements;
@property __weak id <FBAFiling> filingDelegate; // @synthesize filingDelegate=_filingDelegate;
@property __weak id <FBAFileCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) WebView *instructionsWebView; // @synthesize instructionsWebView=_instructionsWebView;
@property(retain) NSPopover *instructionsPopover; // @synthesize instructionsPopover=_instructionsPopover;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)filteredURLs:(id)arg1;
- (void)pushContentSetToController;
@property(retain, nonatomic) NSSet *contentSet;
- (id)makeViewForAttachedFileURLAtIndex:(unsigned long long)arg1 inTableView:(id)arg2;
- (id)makeViewForVisibleExistingFilenameAtIndex:(unsigned long long)arg1 inTableView:(id)arg2;
- (id)makeViewForUnsatisfiedRequirementAtIndex:(unsigned long long)arg1 inTableView:(id)arg2;
- (unsigned long long)groupForRow:(unsigned long long)arg1 indexWithinGroup:(unsigned long long *)arg2;
- (BOOL)requirementIsSatisfied:(id)arg1;
- (BOOL)shouldToggleQuicklookPanel;
- (id)selectedQuicklookableURLs;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)toggleQuicklookPanel;
- (void)removeFileURL:(id)arg1;
- (id)cacheURLs:(id)arg1;
- (void)addFileURLs:(id)arg1;
- (void)addFileURL:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)screenshotPicker:(id)arg1 didCaptureImageWithURL:(id)arg2;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)arrangedFileURLs;
- (id)arrangedVisibleExistingFilenames;
- (id)arrangedUnsatisfiedRequirements;
- (id)visibleExistingFilenames;
- (id)unsatisfiedRequirements;
- (void)keyDown:(id)arg1;
- (void)deleteFileFromRow:(id)arg1;
- (void)showHelpFromRow:(id)arg1;
- (void)revealFileFromRow:(id)arg1;
- (void)detachFileFromRow:(id)arg1;
- (void)gather:(id)arg1;
- (void)removeFiles:(id)arg1;
- (void)selectFiles:(id)arg1;
- (void)didClickScreenshotButton:(id)arg1;
- (void)didClickAddRemove:(id)arg1;
- (void)updateConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)commonFileCollectionViewInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
