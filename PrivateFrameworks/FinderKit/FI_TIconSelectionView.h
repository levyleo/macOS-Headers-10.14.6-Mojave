//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

__attribute__((visibility("hidden")))
@interface FI_TIconSelectionView : FI_TUpdateLayerView
{
    struct CGSize _iconSize;
    _Bool _showBorder;
}

+ (double)selectionPaddingForIconSize:(const struct CGSize *)arg1;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
- (BOOL)accessibilityIsIgnored;
- (void)setHidden:(BOOL)arg1;
- (void)updateLayer;
- (double)cornerRadius;
- (double)borderWidth;
- (id)borderColor;
- (id)_backgroundColor;
- (void)initCommon;

@end
