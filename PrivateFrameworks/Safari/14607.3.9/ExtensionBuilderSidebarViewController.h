//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/AccessibleRolloverActionButtonTableCellViewDelegate-Protocol.h>
#import <Safari/NSOpenSavePanelDelegate-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>
#import <Safari/RolloverActionButtonTableCellViewDelegate-Protocol.h>
#import <Safari/SandboxExtensionPresentationDelegate-Protocol.h>

@class NSArrayController, NSString, NSTableView, SandboxFileExtensionController, SegmentedControlWithDynamicWidth;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderSidebarViewController : NSViewController <SandboxExtensionPresentationDelegate, NSTableViewDelegate, AccessibleRolloverActionButtonTableCellViewDelegate, RolloverActionButtonTableCellViewDelegate, NSOpenSavePanelDelegate>
{
    SandboxFileExtensionController *_fileExtensionController;
    NSTableView *_extensionsTableView;
    SegmentedControlWithDynamicWidth *_addExtensionSegmentedControl;
    NSArrayController *_extensionsArrayController;
}

@property(nonatomic) __weak NSArrayController *extensionsArrayController; // @synthesize extensionsArrayController=_extensionsArrayController;
@property(nonatomic) __weak SegmentedControlWithDynamicWidth *addExtensionSegmentedControl; // @synthesize addExtensionSegmentedControl=_addExtensionSegmentedControl;
@property(nonatomic) __weak NSTableView *extensionsTableView; // @synthesize extensionsTableView=_extensionsTableView;
- (void).cxx_destruct;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)actionButtonClickedInTableCellView:(id)arg1;
- (id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)viewDidLoad;
- (id)nibName;
- (void)_removeExtensionWithBundleURL:(id)arg1;
- (void)_removeExtensionAtIndex:(unsigned long long)arg1;
- (void)_addExtension:(id)arg1;
- (void)_newExtension:(id)arg1;
- (id)_menuForAddExtension;
- (void)sandboxExtensionPresentationController:(id)arg1 configureOpenPanel:(id)arg2 forURL:(id)arg3;
- (id)sandboxExtensionPresentationController:(id)arg1 windowForURL:(id)arg2;
- (void)_addSandboxFileExtensionForBuilderExtension:(id)arg1;
- (BOOL)_createExtensionBundleAtURL:(id)arg1;
- (void)_addExtensionsWithBundleURLs:(id)arg1;
- (id)_extensionBuilderExtensionAtIndex:(unsigned long long)arg1;
- (void)_saveUserDefaultsForExtensionsUnderDevelopment;
- (void)_initializeExtensionsArrayController;
- (void)addExtensionButtonClicked:(id)arg1;
- (id)initWithSandboxFileExtensionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
