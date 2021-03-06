//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSSet, NSTimer, NSTrackingArea, NSView;
@protocol MGAutovisibilityControllerOwner;

@interface MGAutovisibilityController : NSObject
{
    id <MGAutovisibilityControllerOwner> _owner;
    NSView *_showAreaView;
    NSTrackingArea *_showTrackingArea;
    NSSet *_noHideAreaViews;
    NSTimer *_timeoutTimer;
    id _keyDownEventMonitor;
    BOOL _automaticallyShowsAndHides;
    BOOL _didHideOnce;
    BOOL _willShowDueToKeyDown;
}

+ (void)initialize;
@property(readonly, nonatomic) NSSet *noHideAreaViews; // @synthesize noHideAreaViews=_noHideAreaViews;
@property(readonly, nonatomic) NSView *showAreaView; // @synthesize showAreaView=_showAreaView;
@property(readonly, nonatomic) id <MGAutovisibilityControllerOwner> owner; // @synthesize owner=_owner;
- (void)cancelAutomaticallyShowDueToKeyDown;
- (void)resetAutomaticallyShowsAndHidesMonitoring;
@property(nonatomic) BOOL automaticallyShowsAndHides; // @dynamic automaticallyShowsAndHides;
- (void)showDueToKeyDownIfNeeded;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)visibilityTimedOut:(id)arg1;
- (void)hideOnce;
- (void)hide;
- (void)show;
- (BOOL)mouseIsInNoHideArea;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 showAreaView:(id)arg2 noHideAreaViews:(id)arg3;
- (id)init;

@end

