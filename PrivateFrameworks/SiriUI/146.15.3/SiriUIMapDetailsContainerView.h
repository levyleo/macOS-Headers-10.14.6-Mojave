//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface SiriUIMapDetailsContainerView : NSView
{
    BOOL _autoCenteringDisabled;
    NSView *_detailsView;
    NSView *_mapView;
    struct NSEdgeInsets _backgroundInsets;
}

@property(nonatomic) struct NSEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(nonatomic) BOOL autoCenteringDisabled; // @synthesize autoCenteringDisabled=_autoCenteringDisabled;
@property(retain, nonatomic) NSView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSView *detailsView; // @synthesize detailsView=_detailsView;
- (void).cxx_destruct;
- (void)layout;

@end

