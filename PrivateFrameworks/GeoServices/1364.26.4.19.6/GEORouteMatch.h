//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOComposedTransitStationRouteStep, GEOComposedTransitTripRouteStep, GEONavigationMatchInfo, NSArray, NSDate;

@interface GEORouteMatch : NSObject
{
    GEOComposedRoute *_route;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned long long _stepIndex;
    NSArray *_candidateSteps;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned long long _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    BOOL _isGoodMatch;
    CDStruct_9c468c1c *_road;
    double _roadWidth;
    GEORouteMatch *_projectedFrom;
    NSDate *_timestamp;
    unsigned long long _transitID;
    BOOL _isTunnelProjection;
    GEONavigationMatchInfo *_detailedMatchInfo;
}

@property(retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property(nonatomic) BOOL isTunnelProjection; // @synthesize isTunnelProjection=_isTunnelProjection;
@property(nonatomic) unsigned long long transitID; // @synthesize transitID=_transitID;
@property(nonatomic) double distanceTraveledOffRoute; // @synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute;
@property(nonatomic) unsigned long long consecutiveProgressionsOffRoute; // @synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property(retain, nonatomic) GEORouteMatch *projectedFrom; // @synthesize projectedFrom=_projectedFrom;
@property(nonatomic) double modifiedCourseAccuracy; // @synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy;
@property(nonatomic) double modifiedHorizontalAccuracy; // @synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(readonly, nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) CDStruct_9c468c1c *road; // @synthesize road=_road;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) double matchedCourse; // @synthesize matchedCourse=_matchedCourse;
@property(retain, nonatomic) NSArray *candidateSteps; // @synthesize candidateSteps=_candidateSteps;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(readonly, nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) GEOComposedTransitStationRouteStep *transitStationStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *transitTripStep;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
@property(readonly, nonatomic) BOOL routeMatchedToEnd;
- (double)fractionOfCurrentStepTraveled;
- (BOOL)routeMatchBehind:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate)arg1;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 locationCoordinate:(CDStruct_c3b9c2ee)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;

@end
