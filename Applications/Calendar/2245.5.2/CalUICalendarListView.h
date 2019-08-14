//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@protocol CalUICalendarListViewDelegate;

@interface CalUICalendarListView : NSOutlineView
{
    BOOL _isAnimating;
    long long _contextMenuRow;
}

@property long long contextMenuRow; // @synthesize contextMenuRow=_contextMenuRow;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)keyDown:(id)arg1;
- (id)menu;
- (id)menuForEvent:(id)arg1;
- (void)paste:(id)arg1;
- (void)getInfo:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)tabForward:(BOOL)arg1;
- (void)viewDidMoveToSuperview;
- (void)ensureMinimumColumnSize;
- (void)updateCheckboxes;
- (void)beginEditingSelectedRow:(id)arg1;
- (void)beginEditingClickedRow:(id)arg1;
- (long long)rowWithUID:(id)arg1;
- (void)selectRowWithCalendarIdentifier:(id)arg1;
- (struct CGRect)visibleRect;
@property __weak id <CalUICalendarListViewDelegate> delegate;
- (BOOL)resignFirstResponder;
- (void)setDataSource:(id)arg1;
- (id)init;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end
