//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRMenuItem : SCRMapElement
{
    struct CGPoint _cachedMidPoint;
    struct os_unfair_lock_s _uiElementLock;
}

- (id)shortcutSelectionElements;
- (BOOL)isMenuBarItem;
- (BOOL)isSelected;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (BOOL)synchVOCursorToKeyboard:(id)arg1;
- (id)description;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)arg1 request:(id)arg2;
- (void)endFocus;
- (void)addElementSummaryToRequest:(id)arg1;
- (void)addItemDescriptionForBrailleToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (void)addItemDescriptionForCommand:(id)arg1 toRequest:(id)arg2 event:(id)arg3;
- (void)_addKeyboardShortcutToRequest:(id)arg1;
- (id)shortInstruction;
- (id)insideOfDescriptionForContextualHelp;
- (id)contextualHelpToSpeak;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (BOOL)itemDescriptionHasChanged;
- (BOOL)monitorItemDescriptionChanges;
- (void)addItemNameToRequest:(id)arg1;
- (void)outputChildrenSummary:(id)arg1;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)valueDescription;
- (id)titleDescription;
- (BOOL)focusIntoMenuWithRequest:(id)arg1;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (id)_containerOfInteractiveDescendants;
- (BOOL)_hasInteractiveDescendants;
- (BOOL)_hasInteractiveElementsInArray:(id)arg1;
- (BOOL)_hasNavigableChildrenInArray:(id)arg1;
- (BOOL)hasNavigableChildren;
- (BOOL)hasSubmenu;
- (BOOL)parentIsMenubar;
- (BOOL)isSubMenuVisible;
- (void)highlight;
- (id)defaultActionName;
@property(retain, setter=setUIElement:) SCRUIElement *uiElement;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end
