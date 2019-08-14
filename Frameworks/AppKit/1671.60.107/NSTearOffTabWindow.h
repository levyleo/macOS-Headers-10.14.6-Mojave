//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMutableArray;
@protocol NSTearOffTabWindowDelegate;

@interface NSTearOffTabWindow : NSWindow
{
    NSWindow *_tornFromWindow;
    id <NSTearOffTabWindowDelegate> _tabDelegate;
    BOOL _didDetachWindow;
    id _eventMonitor;
    NSMutableArray *_deferredEvents;
}

@property(nonatomic) id <NSTearOffTabWindowDelegate> tabDelegate; // @synthesize tabDelegate=_tabDelegate;
- (id)restoreWindowOnDockDeath;
- (BOOL)didDetachWindow;
- (void)mouseUpAfterMissionControl;
- (void)enteredMissionControlWithTab;
- (id)detachedWindow;
- (void)_refreshTilingConstraints:(BOOL)arg1;
- (void)_setWindowTag;
- (BOOL)detachAndMoveWindowToSpaceIfNecessary;
- (BOOL)shouldDisableTabBarDropTargets;
- (void)beginServerSideWindowDragUsingOffset:(struct CGSize)arg1;
- (void)_resolveAutomaticEnterFullScreenFlags;
- (BOOL)_wantsFullScreenTileDropTargets;
- (BOOL)canEnterFullScreenMode;
- (id)initWithContentRect:(struct CGRect)arg1 tornFromWindow:(id)arg2;
- (void)dealloc;

@end
