//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCandidateListTouchBarItemDelegate-Protocol.h"
#import "NSSharingServicePickerTouchBarItemDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "NVTouchBarAnalyticsDelegate-Protocol.h"
#import "NVTouchBarNearbyControllerDelegate-Protocol.h"
#import "NVTouchBarPlaceActionsTarget-Protocol.h"

@class GEOMapServiceTraits, NSArray, NSButton, NSCandidateListTouchBarItem, NSSegmentedControl, NSSharingServicePickerTouchBarItem, NSString, NSTouchBar, NVButtonTouchBarItem, NVDropTargetSearchField, NVPlace, NVSharingController, NVTouchBarAnalytics, NVTouchBarNearbyController, NVTouchBarPlaceActionsController;
@protocol NVTouchBarControllerDelegate;

__attribute__((visibility("hidden")))
@interface NVTouchBarController : NSObject <NSTouchBarDelegate, NSCandidateListTouchBarItemDelegate, NVTouchBarAnalyticsDelegate, NVTouchBarPlaceActionsTarget, NVTouchBarNearbyControllerDelegate, NSSharingServicePickerTouchBarItemDelegate, NSTouchBarProvider>
{
    id <NVTouchBarControllerDelegate> _delegate;
    NVTouchBarAnalytics *_analytics;
    NSSegmentedControl *_directionsTransportTypeSegmentedControl;
    NVButtonTouchBarItem *_searchButton;
    NVButtonTouchBarItem *_showCurrentLocationButton;
    NSCandidateListTouchBarItem *_candidateListItem;
    NVButtonTouchBarItem *_placeActionsControllerItem;
    NVTouchBarPlaceActionsController *_placeActionsController;
    NVButtonTouchBarItem *_directionsDoneButtonItem;
    NVButtonTouchBarItem *_selectionDoneButtonItem;
    NVTouchBarNearbyController *_nearbyController;
    NVSharingController *_sharingController;
    NSSharingServicePickerTouchBarItem *_shareItem;
    BOOL _needsUpdate;
    BOOL _directionsButtonSelected;
    BOOL _infoButtonEnabled;
    BOOL _active;
    NSTouchBar *_touchBar;
    NSButton *_directionsButton;
    NSButton *_directionsToSelectedPlaceButton;
    unsigned long long _directionsButtonTransportType;
    NSArray *_itemsToShare;
    unsigned long long _mode;
    NVDropTargetSearchField *_searchField;
    NSArray *_searchCompletions;
    NVPlace *_selectedPlace;
    GEOMapServiceTraits *_traits;
}

@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) NVPlace *selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(copy, nonatomic) NSArray *searchCompletions; // @synthesize searchCompletions=_searchCompletions;
@property(nonatomic, getter=isInfoButtonEnabled) BOOL infoButtonEnabled; // @synthesize infoButtonEnabled=_infoButtonEnabled;
@property(nonatomic) __weak NVDropTargetSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSArray *itemsToShare; // @synthesize itemsToShare=_itemsToShare;
@property(nonatomic) unsigned long long directionsButtonTransportType; // @synthesize directionsButtonTransportType=_directionsButtonTransportType;
@property(readonly, nonatomic) NSButton *directionsToSelectedPlaceButton; // @synthesize directionsToSelectedPlaceButton=_directionsToSelectedPlaceButton;
@property(nonatomic) BOOL directionsButtonSelected; // @synthesize directionsButtonSelected=_directionsButtonSelected;
@property(readonly, nonatomic) NSButton *directionsButton; // @synthesize directionsButton=_directionsButton;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
- (void).cxx_destruct;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)itemsForSharingServicePickerTouchBarItem:(id)arg1;
- (BOOL)isPlaceInFavorites:(id)arg1;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)touchBarNearbyControllerCategoriesDisplayed:(id)arg1;
- (void)touchBarNearbyController:(id)arg1 didSelectCategory:(id)arg2;
- (void)exitSelectionMode:(id)arg1;
- (void)exitDirectionsMode:(id)arg1;
- (void)togglePlaceCardForSelectedPlace:(id)arg1;
- (void)openHomepageForSelectedPlace:(id)arg1;
- (void)toggleSelectedPlaceInFavorites:(id)arg1;
- (void)callSelectedPlace:(id)arg1;
- (void)directionsToSelectedPlace:(id)arg1;
- (void)focusSearchField:(id)arg1;
- (void)centerOnUserLocation:(id)arg1;
- (void)changeDirectionsModeFromFunctionRowItem:(id)arg1;
- (id)nearbyTouchBarItem;
- (id)nearbyController;
- (void)quickRouteButtonDidUpdate:(id)arg1;
- (id)placeActionsControllerItem;
- (id)candidateListItem;
@property(nonatomic, getter=isShareButtonEnabled) BOOL shareButtonEnabled;
@property(readonly, nonatomic) NVButtonTouchBarItem *showCurrentLocationButton;
@property(readonly, nonatomic) NVButtonTouchBarItem *searchButton;
@property(readonly, nonatomic) NSSegmentedControl *directionsTransportTypeSegmentedControl;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)searchFieldSuggestionsDidClose:(id)arg1;
- (void)searchFieldSuggestionsDidChange:(id)arg1;
- (id)_displayStringForSuggestion:(id)arg1;
- (id)defaultAttributes;
@property(copy, nonatomic) NSString *directionsButtonDistanceString;
- (void)setNeedsUpdate;
- (id)shareItem;
- (id)directionsDoneButtonItem;
- (id)_newCancelButtonItemWithAction:(SEL)arg1 accessibilityIdentifier:(id)arg2;
- (void)updateItemIdentifiers;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
