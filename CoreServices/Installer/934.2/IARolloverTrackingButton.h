//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface IARolloverTrackingButton : NSButton
{
    id delegate;
    BOOL _mouseOver;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _trackingRectUpdatePending;
    long long _trackingRectTag;
}

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_updateTrackingRectSoon;
- (void)updateTrackingRect;
- (void)removeTrackingRect;
- (void)updateMouseIsOver:(int)arg1;
- (BOOL)redrawOnMouseEnteredAndExited;
- (void)setRedrawOnMouseEnteredAndExited:(BOOL)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (BOOL)mouseIsOver;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initTrackingRect;

@end
