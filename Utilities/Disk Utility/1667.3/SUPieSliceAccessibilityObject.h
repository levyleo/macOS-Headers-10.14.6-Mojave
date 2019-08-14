//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class SUPartitionChartView, SUPieSlice;

@interface SUPieSliceAccessibilityObject : NSAccessibilityElement
{
    BOOL _selected;
    SUPieSlice *_pieSlice;
    long long _sliceIndex;
    SUPartitionChartView *_parent;
}

@property __weak SUPartitionChartView *parent; // @synthesize parent=_parent;
@property long long sliceIndex; // @synthesize sliceIndex=_sliceIndex;
@property BOOL selected; // @synthesize selected=_selected;
@property(retain) SUPieSlice *pieSlice; // @synthesize pieSlice=_pieSlice;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilitySelected;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)initWithPieSlice:(id)arg1 sliceIndex:(long long)arg2 frame:(struct CGRect)arg3 parent:(id)arg4;

@end
