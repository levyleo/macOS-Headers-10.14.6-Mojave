//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FolderActionsFrontEndProtocol-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSArrayController, NSButton, NSMutableArray, NSPanel, NSString, NSTableView, NSWindow;

@interface AppDelegate : NSObject <NSTableViewDelegate, FolderActionsFrontEndProtocol, NSApplicationDelegate>
{
    BOOL folderActionsEnabled;
    BOOL _hasShownWindow;
    BOOL _addingFolder;
    BOOL _removingFolder;
    BOOL _addingScript;
    BOOL _removingScript;
    NSMutableArray *folderActions;
    CDUnknownBlockType folderActionsDidUpdateHandler;
    NSWindow *_window;
    NSButton *_folderActionsEnabledCheckbox;
    NSTableView *_folderActionTableView;
    NSTableView *_scriptTableView;
    NSButton *_removeFolderActionButton;
    NSButton *_showFolderButton;
    NSButton *_addScriptButton;
    NSButton *_removeScriptButton;
    NSButton *_editScriptButton;
    NSArrayController *_folderActionsController;
    NSArrayController *_scriptsController;
    NSPanel *_scriptPanel;
    NSTableView *_scriptPanelTableView;
    NSArrayController *_scriptPanelScriptsController;
    NSMutableArray *_scriptPanelScripts;
    unsigned long long _selectedFolderActionRow;
    unsigned long long _selectedScriptRow;
    NSArray *_folderActionsToAdd;
}

+ (id)_tableViewIndexSetToSelectForStoredSelectedRow:(unsigned long long)arg1 tableView:(id)arg2;
@property(retain) NSArray *folderActionsToAdd; // @synthesize folderActionsToAdd=_folderActionsToAdd;
@property BOOL removingScript; // @synthesize removingScript=_removingScript;
@property BOOL addingScript; // @synthesize addingScript=_addingScript;
@property BOOL removingFolder; // @synthesize removingFolder=_removingFolder;
@property BOOL addingFolder; // @synthesize addingFolder=_addingFolder;
@property unsigned long long selectedScriptRow; // @synthesize selectedScriptRow=_selectedScriptRow;
@property unsigned long long selectedFolderActionRow; // @synthesize selectedFolderActionRow=_selectedFolderActionRow;
@property BOOL hasShownWindow; // @synthesize hasShownWindow=_hasShownWindow;
@property(retain) NSMutableArray *scriptPanelScripts; // @synthesize scriptPanelScripts=_scriptPanelScripts;
@property __weak NSArrayController *scriptPanelScriptsController; // @synthesize scriptPanelScriptsController=_scriptPanelScriptsController;
@property __weak NSTableView *scriptPanelTableView; // @synthesize scriptPanelTableView=_scriptPanelTableView;
@property __weak NSPanel *scriptPanel; // @synthesize scriptPanel=_scriptPanel;
@property __weak NSArrayController *scriptsController; // @synthesize scriptsController=_scriptsController;
@property __weak NSArrayController *folderActionsController; // @synthesize folderActionsController=_folderActionsController;
@property __weak NSButton *editScriptButton; // @synthesize editScriptButton=_editScriptButton;
@property __weak NSButton *removeScriptButton; // @synthesize removeScriptButton=_removeScriptButton;
@property __weak NSButton *addScriptButton; // @synthesize addScriptButton=_addScriptButton;
@property __weak NSButton *showFolderButton; // @synthesize showFolderButton=_showFolderButton;
@property __weak NSButton *removeFolderActionButton; // @synthesize removeFolderActionButton=_removeFolderActionButton;
@property __weak NSTableView *scriptTableView; // @synthesize scriptTableView=_scriptTableView;
@property __weak NSTableView *folderActionTableView; // @synthesize folderActionTableView=_folderActionTableView;
@property __weak NSButton *folderActionsEnabledCheckbox; // @synthesize folderActionsEnabledCheckbox=_folderActionsEnabledCheckbox;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType folderActionsDidUpdateHandler; // @synthesize folderActionsDidUpdateHandler;
@property BOOL folderActionsEnabled; // @synthesize folderActionsEnabled;
@property(retain) NSMutableArray *folderActions; // @synthesize folderActions;
- (void).cxx_destruct;
- (id)openCommand:(id)arg1;
- (BOOL)application:(id)arg1 delegateHandlesKey:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)editSelectedScripts:(id)arg1;
- (void)removeSelectedScripts:(id)arg1;
- (void)attachSelectedScripts:(id)arg1;
- (void)cancelAddingScript:(id)arg1;
- (void)addScript:(id)arg1;
- (void)showSelectedFolders:(id)arg1;
- (void)removeSelectedFolders:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)toggleGlobalFolderActionsEnabledState:(id)arg1;
- (void)_saveSelectedRows;
- (void)addFolderAction:(id)arg1;
- (void)openFilesFromPasteboard:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)handleUpdate;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
