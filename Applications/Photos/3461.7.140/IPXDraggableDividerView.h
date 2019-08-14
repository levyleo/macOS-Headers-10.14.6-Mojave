//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IPXDraggableSplitView;

@interface IPXDraggableDividerView : NSView
{
    BOOL _showsCursorOnHover;
    IPXDraggableSplitView *_parentSliderView;
    struct NSEdgeInsets _edgeInsets;
}

@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) BOOL showsCursorOnHover; // @synthesize showsCursorOnHover=_showsCursorOnHover;
@property(nonatomic) __weak IPXDraggableSplitView *parentSliderView; // @synthesize parentSliderView=_parentSliderView;
- (void).cxx_destruct;
- (void)resetCursorRects;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
