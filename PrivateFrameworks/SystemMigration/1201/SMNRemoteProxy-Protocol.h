//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSURL, SMNAction;

@protocol SMNRemoteProxy <NSObject>
- (NSDictionary *)itemAttributesAtPaths:(NSArray *)arg1;
- (BOOL)sendAction:(SMNAction *)arg1 error:(id *)arg2;
- (NSDictionary *)bundleInformationAtPaths:(NSArray *)arg1;
- (NSDictionary *)bundleInformationAtPath:(NSURL *)arg1;
- (BOOL)itemExistsAtPath:(NSURL *)arg1;
- (BOOL)copyPath:(NSURL *)arg1 toPath:(NSURL *)arg2;
@end
