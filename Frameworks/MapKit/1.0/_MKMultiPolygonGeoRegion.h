//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKGeoJSONCoverageRegion-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>
{
    NSArray *_polygons;
}

@property(retain, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
- (void).cxx_destruct;
- (BOOL)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (BOOL)_loadWithRootJSONObject:(id)arg1 error:(id *)arg2;
- (BOOL)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

