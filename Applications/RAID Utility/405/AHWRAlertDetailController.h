//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AHWRDetailController.h"

#import "NSTableViewDelegate-Protocol.h"

@class NSArrayController, NSObjectController, NSSet, NSString, NSTableView, NSTextField;

@interface AHWRAlertDetailController : AHWRDetailController <NSTableViewDelegate>
{
    NSTableView *alertTable;
    NSArrayController *alertsController;
    NSTextField *alertsCount;
    NSSet *_currentAlerts;
    NSObjectController *selfController;
}

- (void)changeCacheEnabled:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
