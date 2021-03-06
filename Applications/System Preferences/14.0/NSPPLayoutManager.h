//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSColor, NSFont, NSImage, NSMutableArray;
@protocol OS_dispatch_queue;

@interface NSPPLayoutManager : NSObject
{
    NSFont *_iconLabelFont;
    NSColor *_iconLabelColor;
    id _target;
    double kIconXOffset;
    double kIconRowTotalHeight;
    double kPPLayoutColumnWidth;
    NSMutableArray *_goodHeights;
    NSCharacterSet *_newlineCharSet;
    NSImage *_defaultPrefIcon;
    NSObject<OS_dispatch_queue> *_layoutQueue;
}

- (void).cxx_destruct;
- (id)layoutQueue;
- (id)defaultPrefIcon;
- (id)createShowAllViewInAlphabeticalOrder:(id)arg1 target:(id)arg2 hideList:(id)arg3;
- (id)createShowAllViewWithGroups:(id)arg1 target:(id)arg2 hideList:(id)arg3;
- (long long)numberOfColumn;
- (long long)showAllScrollViewWidth;
- (long long)showAllViewWidth;
- (double)bestHeightSmallerThanHeight:(double)arg1;
- (void)_lazyInit;
- (void)setUpKeyboardNavLoop;
- (id)addIcon:(id)arg1 atColumn:(long long)arg2 topY:(double)arg3 inView:(id)arg4;
- (struct CGPoint)addPanesFromArray:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3 hideList:(id)arg4;
- (void)addFavoriteButton:(id)arg1;

@end

