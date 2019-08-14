//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPMarimbaBackgroundView.h"

#import "MultiPanePaneProtocol-Protocol.h"

@class MultiPaneController;

@interface MWLocalPrintingView : IPMarimbaBackgroundView <MultiPanePaneProtocol>
{
    MultiPaneController *_controller;
}

@property(retain) MultiPaneController *controller; // @synthesize controller=_controller;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (double)overlapMultiPaneContent;
- (BOOL)mouseDownCanMoveWindow;
- (void)setMultiPaneController:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
