//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol OldSpotlightDataSource, OldSpotlightDataWriter;

@protocol SpotlightCacheController <NSObject>
- (void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(void (^)(BOOL))arg1;
- (NSURL *)URLToVisitFromSpotlightCacheFile:(NSString *)arg1;
- (void)registerSpotlightDataSource:(id <OldSpotlightDataSource>)arg1 andWriter:(id <OldSpotlightDataWriter>)arg2 forType:(NSString *)arg3;
- (void)partialUpdateNeededForType:(NSString *)arg1 immediately:(BOOL)arg2;
- (void)partialUpdateNeededForType:(NSString *)arg1;
- (void)fullUpdateNeededForType:(NSString *)arg1 immediately:(BOOL)arg2;
- (void)fullUpdateNeededForType:(NSString *)arg1;
- (BOOL)fileIsSpotlightCacheFile:(NSString *)arg1;
@end
