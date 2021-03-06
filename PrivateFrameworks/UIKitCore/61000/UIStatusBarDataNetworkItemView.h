//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView
{
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    BOOL _wifiLinkWarning;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

- (id)accessibilityHUDRepresentation;
- (id)_stringForRSSI;
- (id)_dataNetworkImage;
- (id)_dataNetworkImageName;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)contentsImage;
- (BOOL)_updateWithData:(CDStruct_65a685f2 *)arg1 networkType:(int)arg2;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)maximumOverlap;
- (double)extraRightPadding;
- (double)extraLeftPadding;

@end

