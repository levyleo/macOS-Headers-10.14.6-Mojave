//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRWebAreaGroup : SCRMapElement
{
    BOOL _disableContentSummary;
}

- (BOOL)isGestureContainerElement;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldMap;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (id)childInAXOrderForward:(BOOL)arg1 horizontal:(BOOL)arg2 visibleOnly:(BOOL)arg3 wrapped:(char *)arg4 didHitBoundary:(char *)arg5 startElement:(id)arg6;
- (id)prepareArrayToFocusInto;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (id)visibleChildrenDescriptionIgnoringChild:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end
