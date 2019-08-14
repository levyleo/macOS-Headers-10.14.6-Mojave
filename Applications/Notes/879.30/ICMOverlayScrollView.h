//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSTrackingArea;

@interface ICMOverlayScrollView : NSScrollView
{
    BOOL _flashesScrollersOnMouseMoved;
    BOOL _forceOverlayScrollers;
    NSTrackingArea *_mouseEnteredExitedTrackingArea;
}

@property(retain, nonatomic) NSTrackingArea *mouseEnteredExitedTrackingArea; // @synthesize mouseEnteredExitedTrackingArea=_mouseEnteredExitedTrackingArea;
@property(nonatomic) BOOL forceOverlayScrollers; // @synthesize forceOverlayScrollers=_forceOverlayScrollers;
@property(nonatomic) BOOL flashesScrollersOnMouseMoved; // @synthesize flashesScrollersOnMouseMoved=_flashesScrollersOnMouseMoved;
- (void).cxx_destruct;
- (long long)scrollerStyle;
- (void)setScrollerStyle:(long long)arg1;
- (void)mouseMoved:(id)arg1;
- (void)dealloc;

@end
