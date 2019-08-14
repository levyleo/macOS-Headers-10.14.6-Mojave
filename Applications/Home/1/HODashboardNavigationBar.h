//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

#import "HODashboardNavigationButtonDelegate-Protocol.h"
#import "HODashboardNavigationHost-Protocol.h"

@class HFWallpaperSlice, HUNavigationBarLayoutOptions, HUWallpaperView, NSArray, NSString;

@interface HODashboardNavigationBar : UINavigationBar <HODashboardNavigationButtonDelegate, HODashboardNavigationHost>
{
    NSArray *_leftDashboardNavigationButtons;
    NSArray *_rightDashboardNavigationButtons;
    HFWallpaperSlice *_blurredWallpaperSlice;
    HUNavigationBarLayoutOptions *_layoutOptions;
    HUWallpaperView *_containingWallpaperView;
}

@property(nonatomic) __weak HUWallpaperView *containingWallpaperView; // @synthesize containingWallpaperView=_containingWallpaperView;
@property(copy, nonatomic) HUNavigationBarLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(retain, nonatomic) NSArray *rightDashboardNavigationButtons; // @synthesize rightDashboardNavigationButtons=_rightDashboardNavigationButtons;
@property(retain, nonatomic) NSArray *leftDashboardNavigationButtons; // @synthesize leftDashboardNavigationButtons=_leftDashboardNavigationButtons;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (id)_configuredBarButtonItemForDashboardNavigationButton:(id)arg1;
- (void)_updateRightBarButtonItemsForTopItem;
- (void)_updateLeftBarButtonItemsForTopItem;
- (void)_updateAllBarButtonItemsForTopItem;
- (struct CGRect)normalizedWallpaperRectForDashboardNavigationButton:(id)arg1;
- (void)layoutSubviews;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
