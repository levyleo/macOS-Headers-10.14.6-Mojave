//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray;

@protocol ICPSharedPhotoStreamCloudFeedManager

@optional
- (void)cloudFeedEntriesRebuilding:(double)arg1;
- (void)cloudFeedEntriesUpdated:(NSArray *)arg1 added:(NSArray *)arg2 deleted:(NSArray *)arg3;
- (void)cloudFeedEntriesChanged;
@end
