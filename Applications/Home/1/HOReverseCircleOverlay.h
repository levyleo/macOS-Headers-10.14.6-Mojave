//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKCircle.h>

@interface HOReverseCircleOverlay : MKCircle
{
    CDStruct_02837cd9 _boundingRect;
}

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 boundingMapRect:(CDStruct_02837cd9)arg3;
@property(nonatomic) CDStruct_02837cd9 boundingRect; // @synthesize boundingRect=_boundingRect;
- (CDStruct_02837cd9)innerCircleBoundingMapRect;
- (CDStruct_02837cd9)boundingMapRect;

@end

