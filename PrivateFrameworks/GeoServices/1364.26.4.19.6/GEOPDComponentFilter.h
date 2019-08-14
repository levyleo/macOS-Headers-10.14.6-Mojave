//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAnnotatedItemListFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDBusinessHoursFilter, GEOPDCaptionedPhotoFilter, GEOPDContainedPlaceFilter, GEOPDETAFilter, GEOPDEntityFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDHoursFilter, GEOPDIconFilter, GEOPDLinkedServiceFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDPhotoFilter, GEOPDPlaceCollectionFilter, GEOPDPlaceInfoFilter, GEOPDPlacecardLayoutConfigurationFilter, GEOPDPlacecardURLFilter, GEOPDPoiEventFilter, GEOPDPriceDescriptionFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDRoadAccessInfoFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStyleAttributesFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitScheduleFilter, GEOPDVehiclePositionFilter, GEOPDVenueInfoFilter, GEOPDWalletCategoryInformationFilter, GEOPDWifiFingerprintFilter, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;
    GEOPDAddressFilter *_addressFilter;
    GEOPDAddressObjectFilter *_addressObjectFilter;
    GEOPDAmenitiesFilter *_amenitiesFilter;
    GEOPDAnnotatedItemListFilter *_annotatedItemListFilter;
    GEOPDAssociatedAppFilter *_associatedAppFilter;
    GEOPDBoundsFilter *_boundsFilter;
    GEOPDBrowseCategoriesFilter *_browseCategoriesFilter;
    GEOPDBusinessClaimFilter *_businessClaimFilter;
    GEOPDBusinessHoursFilter *_businessHoursFilter;
    GEOPDCaptionedPhotoFilter *_captionedPhotoFilter;
    GEOPDContainedPlaceFilter *_containedPlaceFilter;
    GEOPDEntityFilter *_entityFilter;
    GEOPDETAFilter *_etaFilter;
    GEOPDExternalActionFilter *_externalActionFilter;
    GEOPDFactoidFilter *_factoidFilter;
    GEOPDFlyoverFilter *_flyoverFilter;
    GEOPDHoursFilter *_hoursFilter;
    GEOPDIconFilter *_iconFilter;
    GEOPDLinkedServiceFilter *_linkedServiceFilter;
    GEOPDLocationEventFilter *_locationEventFilter;
    GEOPDMessageLinkFilter *_messageLinkFilter;
    GEOPDPhotoFilter *_photoFilter;
    GEOPDPlaceCollectionFilter *_placeCollectionFilter;
    GEOPDPlaceInfoFilter *_placeInfoFilter;
    GEOPDPlacecardLayoutConfigurationFilter *_placecardLayoutConfigurationFilter;
    GEOPDPlacecardURLFilter *_placecardUrlFilter;
    GEOPDPoiEventFilter *_poiEventFilter;
    GEOPDPriceDescriptionFilter *_priceDescriptionFilter;
    GEOPDQuickLinkFilter *_quickLinkFilter;
    GEOPDRapFilter *_rapFilter;
    GEOPDRatingFilter *_ratingFilter;
    GEOPDRawAttributeFilter *_rawAttributeFilter;
    GEOPDRestaurantReservationLinkFilter *_restaurantReservationLinkFilter;
    GEOPDResultSnippetFilter *_resultSnippetFilter;
    GEOPDReviewFilter *_reviewFilter;
    GEOPDSimpleRestaurantMenuTextFilter *_simpleRestaurantMenuTextFilter;
    GEOPDSpatialLookupFilter *_spatialLookupFilter;
    GEOPDStyleAttributesFilter *_styleAttributesFilter;
    GEOPDTextBlockFilter *_textBlockFilter;
    GEOPDTipFilter *_tipFilter;
    GEOPDTransitAttributionFilter *_transitAttributionFilter;
    GEOPDTransitIncidentFilter *_transitIncidentFilter;
    GEOPDTransitInfoFilter *_transitInfoFilter;
    GEOPDTransitInfoSnippetFilter *_transitInfoSnippetFilter;
    GEOPDTransitScheduleFilter *_transitScheduleFilter;
    GEOPDVehiclePositionFilter *_transitVehiclePositionFilter;
    GEOPDVenueInfoFilter *_venueInfoFilter;
    GEOPDWalletCategoryInformationFilter *_walletCategoryInformationFilter;
    GEOPDWifiFingerprintFilter *_wifiFingerprintFilter;
}

@property(retain, nonatomic) GEOPDPlaceCollectionFilter *placeCollectionFilter; // @synthesize placeCollectionFilter=_placeCollectionFilter;
@property(retain, nonatomic) GEOPDBusinessHoursFilter *businessHoursFilter; // @synthesize businessHoursFilter=_businessHoursFilter;
@property(retain, nonatomic) GEOPDLinkedServiceFilter *linkedServiceFilter; // @synthesize linkedServiceFilter=_linkedServiceFilter;
@property(retain, nonatomic) GEOPDVehiclePositionFilter *transitVehiclePositionFilter; // @synthesize transitVehiclePositionFilter=_transitVehiclePositionFilter;
@property(retain, nonatomic) GEOPDWalletCategoryInformationFilter *walletCategoryInformationFilter; // @synthesize walletCategoryInformationFilter=_walletCategoryInformationFilter;
@property(retain, nonatomic) GEOPDPlacecardLayoutConfigurationFilter *placecardLayoutConfigurationFilter; // @synthesize placecardLayoutConfigurationFilter=_placecardLayoutConfigurationFilter;
@property(retain, nonatomic) GEOPDPoiEventFilter *poiEventFilter; // @synthesize poiEventFilter=_poiEventFilter;
@property(retain, nonatomic) GEOPDAnnotatedItemListFilter *annotatedItemListFilter; // @synthesize annotatedItemListFilter=_annotatedItemListFilter;
@property(retain, nonatomic) GEOPDBrowseCategoriesFilter *browseCategoriesFilter; // @synthesize browseCategoriesFilter=_browseCategoriesFilter;
@property(retain, nonatomic) GEOPDPriceDescriptionFilter *priceDescriptionFilter; // @synthesize priceDescriptionFilter=_priceDescriptionFilter;
@property(retain, nonatomic) GEOPDIconFilter *iconFilter; // @synthesize iconFilter=_iconFilter;
@property(retain, nonatomic) GEOPDWifiFingerprintFilter *wifiFingerprintFilter; // @synthesize wifiFingerprintFilter=_wifiFingerprintFilter;
@property(retain, nonatomic) GEOPDContainedPlaceFilter *containedPlaceFilter; // @synthesize containedPlaceFilter=_containedPlaceFilter;
@property(retain, nonatomic) GEOPDVenueInfoFilter *venueInfoFilter; // @synthesize venueInfoFilter=_venueInfoFilter;
@property(retain, nonatomic) GEOPDLocationEventFilter *locationEventFilter; // @synthesize locationEventFilter=_locationEventFilter;
@property(retain, nonatomic) GEOPDRapFilter *rapFilter; // @synthesize rapFilter=_rapFilter;
@property(retain, nonatomic) GEOPDQuickLinkFilter *quickLinkFilter; // @synthesize quickLinkFilter=_quickLinkFilter;
@property(retain, nonatomic) GEOPDMessageLinkFilter *messageLinkFilter; // @synthesize messageLinkFilter=_messageLinkFilter;
@property(retain, nonatomic) GEOPDAssociatedAppFilter *associatedAppFilter; // @synthesize associatedAppFilter=_associatedAppFilter;
@property(retain, nonatomic) GEOPDPlacecardURLFilter *placecardUrlFilter; // @synthesize placecardUrlFilter=_placecardUrlFilter;
@property(retain, nonatomic) GEOPDTipFilter *tipFilter; // @synthesize tipFilter=_tipFilter;
@property(retain, nonatomic) GEOPDSpatialLookupFilter *spatialLookupFilter; // @synthesize spatialLookupFilter=_spatialLookupFilter;
@property(retain, nonatomic) GEOPDRestaurantReservationLinkFilter *restaurantReservationLinkFilter; // @synthesize restaurantReservationLinkFilter=_restaurantReservationLinkFilter;
@property(retain, nonatomic) GEOPDSimpleRestaurantMenuTextFilter *simpleRestaurantMenuTextFilter; // @synthesize simpleRestaurantMenuTextFilter=_simpleRestaurantMenuTextFilter;
@property(retain, nonatomic) GEOPDAddressObjectFilter *addressObjectFilter; // @synthesize addressObjectFilter=_addressObjectFilter;
@property(retain, nonatomic) GEOPDResultSnippetFilter *resultSnippetFilter; // @synthesize resultSnippetFilter=_resultSnippetFilter;
@property(retain, nonatomic) GEOPDExternalActionFilter *externalActionFilter; // @synthesize externalActionFilter=_externalActionFilter;
@property(retain, nonatomic) GEOPDTransitInfoSnippetFilter *transitInfoSnippetFilter; // @synthesize transitInfoSnippetFilter=_transitInfoSnippetFilter;
@property(retain, nonatomic) GEOPDCaptionedPhotoFilter *captionedPhotoFilter; // @synthesize captionedPhotoFilter=_captionedPhotoFilter;
@property(retain, nonatomic) GEOPDBusinessClaimFilter *businessClaimFilter; // @synthesize businessClaimFilter=_businessClaimFilter;
@property(retain, nonatomic) GEOPDTransitAttributionFilter *transitAttributionFilter; // @synthesize transitAttributionFilter=_transitAttributionFilter;
@property(retain, nonatomic) GEOPDFactoidFilter *factoidFilter; // @synthesize factoidFilter=_factoidFilter;
@property(retain, nonatomic) GEOPDTextBlockFilter *textBlockFilter; // @synthesize textBlockFilter=_textBlockFilter;
@property(retain, nonatomic) GEOPDTransitIncidentFilter *transitIncidentFilter; // @synthesize transitIncidentFilter=_transitIncidentFilter;
@property(retain, nonatomic) GEOPDStyleAttributesFilter *styleAttributesFilter; // @synthesize styleAttributesFilter=_styleAttributesFilter;
@property(retain, nonatomic) GEOPDAmenitiesFilter *amenitiesFilter; // @synthesize amenitiesFilter=_amenitiesFilter;
@property(retain, nonatomic) GEOPDRawAttributeFilter *rawAttributeFilter; // @synthesize rawAttributeFilter=_rawAttributeFilter;
@property(retain, nonatomic) GEOPDFlyoverFilter *flyoverFilter; // @synthesize flyoverFilter=_flyoverFilter;
@property(retain, nonatomic) GEOPDETAFilter *etaFilter; // @synthesize etaFilter=_etaFilter;
@property(retain, nonatomic) GEOPDTransitScheduleFilter *transitScheduleFilter; // @synthesize transitScheduleFilter=_transitScheduleFilter;
@property(retain, nonatomic) GEOPDTransitInfoFilter *transitInfoFilter; // @synthesize transitInfoFilter=_transitInfoFilter;
@property(retain, nonatomic) GEOPDHoursFilter *hoursFilter; // @synthesize hoursFilter=_hoursFilter;
@property(retain, nonatomic) GEOPDPhotoFilter *photoFilter; // @synthesize photoFilter=_photoFilter;
@property(retain, nonatomic) GEOPDReviewFilter *reviewFilter; // @synthesize reviewFilter=_reviewFilter;
@property(retain, nonatomic) GEOPDRatingFilter *ratingFilter; // @synthesize ratingFilter=_ratingFilter;
@property(retain, nonatomic) GEOPDAddressFilter *addressFilter; // @synthesize addressFilter=_addressFilter;
@property(retain, nonatomic) GEOPDBoundsFilter *boundsFilter; // @synthesize boundsFilter=_boundsFilter;
@property(retain, nonatomic) GEOPDRoadAccessInfoFilter *accessInfoFilter; // @synthesize accessInfoFilter=_accessInfoFilter;
@property(retain, nonatomic) GEOPDPlaceInfoFilter *placeInfoFilter; // @synthesize placeInfoFilter=_placeInfoFilter;
@property(retain, nonatomic) GEOPDEntityFilter *entityFilter; // @synthesize entityFilter=_entityFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceCollectionFilter;
@property(readonly, nonatomic) BOOL hasBusinessHoursFilter;
@property(readonly, nonatomic) BOOL hasLinkedServiceFilter;
@property(readonly, nonatomic) BOOL hasTransitVehiclePositionFilter;
@property(readonly, nonatomic) BOOL hasWalletCategoryInformationFilter;
@property(readonly, nonatomic) BOOL hasPlacecardLayoutConfigurationFilter;
@property(readonly, nonatomic) BOOL hasPoiEventFilter;
@property(readonly, nonatomic) BOOL hasAnnotatedItemListFilter;
@property(readonly, nonatomic) BOOL hasBrowseCategoriesFilter;
@property(readonly, nonatomic) BOOL hasPriceDescriptionFilter;
@property(readonly, nonatomic) BOOL hasIconFilter;
@property(readonly, nonatomic) BOOL hasWifiFingerprintFilter;
@property(readonly, nonatomic) BOOL hasContainedPlaceFilter;
@property(readonly, nonatomic) BOOL hasVenueInfoFilter;
@property(readonly, nonatomic) BOOL hasLocationEventFilter;
@property(readonly, nonatomic) BOOL hasRapFilter;
@property(readonly, nonatomic) BOOL hasQuickLinkFilter;
@property(readonly, nonatomic) BOOL hasMessageLinkFilter;
@property(readonly, nonatomic) BOOL hasAssociatedAppFilter;
@property(readonly, nonatomic) BOOL hasPlacecardUrlFilter;
@property(readonly, nonatomic) BOOL hasTipFilter;
@property(readonly, nonatomic) BOOL hasSpatialLookupFilter;
@property(readonly, nonatomic) BOOL hasRestaurantReservationLinkFilter;
@property(readonly, nonatomic) BOOL hasSimpleRestaurantMenuTextFilter;
@property(readonly, nonatomic) BOOL hasAddressObjectFilter;
@property(readonly, nonatomic) BOOL hasResultSnippetFilter;
@property(readonly, nonatomic) BOOL hasExternalActionFilter;
@property(readonly, nonatomic) BOOL hasTransitInfoSnippetFilter;
@property(readonly, nonatomic) BOOL hasCaptionedPhotoFilter;
@property(readonly, nonatomic) BOOL hasBusinessClaimFilter;
@property(readonly, nonatomic) BOOL hasTransitAttributionFilter;
@property(readonly, nonatomic) BOOL hasFactoidFilter;
@property(readonly, nonatomic) BOOL hasTextBlockFilter;
@property(readonly, nonatomic) BOOL hasTransitIncidentFilter;
@property(readonly, nonatomic) BOOL hasStyleAttributesFilter;
@property(readonly, nonatomic) BOOL hasAmenitiesFilter;
@property(readonly, nonatomic) BOOL hasRawAttributeFilter;
@property(readonly, nonatomic) BOOL hasFlyoverFilter;
@property(readonly, nonatomic) BOOL hasEtaFilter;
@property(readonly, nonatomic) BOOL hasTransitScheduleFilter;
@property(readonly, nonatomic) BOOL hasTransitInfoFilter;
@property(readonly, nonatomic) BOOL hasHoursFilter;
@property(readonly, nonatomic) BOOL hasPhotoFilter;
@property(readonly, nonatomic) BOOL hasReviewFilter;
@property(readonly, nonatomic) BOOL hasRatingFilter;
@property(readonly, nonatomic) BOOL hasAddressFilter;
@property(readonly, nonatomic) BOOL hasBoundsFilter;
@property(readonly, nonatomic) BOOL hasAccessInfoFilter;
@property(readonly, nonatomic) BOOL hasPlaceInfoFilter;
@property(readonly, nonatomic) BOOL hasEntityFilter;
- (id)initAddressObjectFilterWithLibraryVersion:(id)arg1;
- (id)initTransitScheduleFilterWithTraits:(id)arg1;
- (id)initTipUserPhotoFilterWithTraits:(id)arg1;
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;
- (id)initResultSnippetFilterWithTraits:(id)arg1;
- (id)initRestaurantReservationLinkFilterWithTraits:(id)arg1;
- (id)initAnnotatedItemListFilterWithTraits:(id)arg1;
- (id)initCaptionedPhotoFilterWithTraits:(id)arg1;
- (id)initPhotoFilterWithTraits:(id)arg1;
- (id)initEntityFilterWithSpokenNames;

@end
