//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_TtC7Console16WindowController.h"

@class _TtC7Console13ActionManager, _TtC7Console13SearchManager;

@interface _TtC7Console24ExtendedWindowController : _TtC7Console16WindowController
{
    // Error parsing type: , name: menuManager
    // Error parsing type: , name: searchManager
    // Error parsing type: , name: actionManager
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)windowDidLoad;
@property(nonatomic, retain) _TtC7Console13ActionManager *actionManager; // @synthesize actionManager;
@property(nonatomic, retain) _TtC7Console13SearchManager *searchManager; // @synthesize searchManager;
- (void)performTextFinderAction:(id)arg1;

@end
