//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSImage, NSString, NSView, VisualTabPickerThumbnailView;

@protocol VisualTabPickerThumbnailDataSource <NSObject>
- (NSImage *)siteIconForVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (int)muteButtonStateForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (BOOL)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (struct CGRect)visibleBoundsForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (NSView *)viewForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1 lowResolution:(BOOL)arg2;
- (NSString *)titleForVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
@end
