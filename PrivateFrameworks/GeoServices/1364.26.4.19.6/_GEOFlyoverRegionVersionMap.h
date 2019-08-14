//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFlyoverRegionVersions;

__attribute__((visibility("hidden")))
@interface _GEOFlyoverRegionVersionMap : NSObject
{
    GEOFlyoverRegionVersions *_versions;
    struct unordered_map<unsigned int, unsigned long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> _regionToIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;
- (struct GEOFlyoverRegion *)regionForID:(unsigned int)arg1;
- (id)initWithFlyoverRegions:(id)arg1;
- (id)initWithData:(id)arg1;

@end
