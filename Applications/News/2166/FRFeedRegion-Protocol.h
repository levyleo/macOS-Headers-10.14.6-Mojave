//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class FRFeedCollectionViewLayoutRegionInternal, NSArray, NSString;

@protocol FRFeedRegion <NSObject, NSCopying>
@property(readonly, nonatomic) FRFeedCollectionViewLayoutRegionInternal *layoutRegion;
@property(readonly, nonatomic) unsigned long long regionType;
@property(readonly, nonatomic) NSArray *tileInfos;
@property(readonly, copy, nonatomic) NSString *regionID;
@end
