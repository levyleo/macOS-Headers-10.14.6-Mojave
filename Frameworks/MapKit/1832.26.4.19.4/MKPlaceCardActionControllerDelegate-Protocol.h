//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceActionManager, MKPlaceCardActionsViewController, NSView;

@protocol MKPlaceCardActionControllerDelegate <NSObject>
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1;
- (void)placeActionManager:(MKPlaceActionManager *)arg1 didSelectShareFromView:(NSView *)arg2;

@optional
- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(MKPlaceCardActionsViewController *)arg1 fromView:(NSView *)arg2;
@end
