//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class CalUIEventListController;

@interface CalUIEventListTableView : NSTableView
{
    CalUIEventListController *_controller;
}

@property __weak CalUIEventListController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)init;
- (id)accessibilityTitle;
- (BOOL)isAccessibilityElement;

@end
