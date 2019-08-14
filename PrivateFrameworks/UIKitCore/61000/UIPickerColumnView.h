//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPickerTableViewContainerDelegate-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSString, UIColor, UIPickerTableView, UIPickerView;

__attribute__((visibility("hidden")))
@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource>
{
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    double _middleBarHeight;
    double _rowHeight;
    UIPickerView *_pickerView;
    struct CGRect _tableFrame;
    struct CATransform3D _perspectiveTransform;
    BOOL _isNoLongerInUse;
    UIColor *__textColor;
    double _leftHitTestExtension;
    double _rightHitTestExtension;
}

@property(nonatomic) BOOL isNoLongerInUse; // @synthesize isNoLongerInUse=_isNoLongerInUse;
@property(nonatomic) double rightHitTestExtension; // @synthesize rightHitTestExtension=_rightHitTestExtension;
@property(nonatomic) double leftHitTestExtension; // @synthesize leftHitTestExtension=_leftHitTestExtension;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor; // @synthesize _textColor=__textColor;
@property(nonatomic) struct CATransform3D perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_visibleCellClosestToPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (id)_allVisibleCells;
- (struct _NSRange)_visibleGlobalRows;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint)arg2;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)reloadData;
- (id)cellForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (BOOL)_usesCheckSelection;
- (BOOL)_soundsEnabled;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
@property(nonatomic) struct CGRect selectionBarRect;
- (void)markAsNoLongerInUse;
@property(readonly, nonatomic) long long selectionBarRow;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isRowChecked:(long long)arg1;
- (BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 updateChecked:(BOOL)arg4;
- (BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (double)_horizontalBiasForEndTables;
- (BOOL)_pointLiesWithinEffectiveTableBounds:(struct CGPoint)arg1;
- (struct CGRect)_tableFrame;
- (id)_preferredTable;
- (BOOL)_containsTable:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableFrame:(struct CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D)arg6;
- (struct CATransform3D)_transformForTableWithTranslationX:(double)arg1;
- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1;
- (id)_createContainerViewWithFrame:(struct CGRect)arg1;
- (void)_centerTableInContainer:(id)arg1;
- (id)_createTableViewWithFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
