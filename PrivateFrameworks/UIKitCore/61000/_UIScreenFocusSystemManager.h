//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusMovementPerformerDelegate-Protocol.h>
#import <UIKitCore/_UIFocusSystemDelegate-Protocol.h>

@class NSString, UIFocusSystem, UIScreen, _UIFocusScrollManager;

__attribute__((visibility("hidden")))
@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate>
{
    BOOL _allowsForwardingFocusMovementActions;
    UIScreen *_screen;
    UIFocusSystem *_focusSystem;
    _UIFocusScrollManager *_scrollManager;
}

@property(nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) BOOL allowsForwardingFocusMovementActions; // @synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions;
@property(readonly, nonatomic) _UIFocusScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property(readonly, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (BOOL)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;
- (id)_focusItemContainerForFocusSystem:(id)arg1;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (BOOL)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
- (BOOL)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 scrollManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
