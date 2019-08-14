//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerFavoriteItem : NSCollectionViewItem <NSGestureRecognizerDelegate>
{
    CDUnknownBlockType _selectionHandler;
    NSColor *_displayedColor;
}

@property(copy) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)prepareForReuse;
@property(copy) NSColor *displayedColor; // @synthesize displayedColor=_displayedColor;
- (void)pressItem:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
