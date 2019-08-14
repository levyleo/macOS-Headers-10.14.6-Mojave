//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

#import <SystemMigration/SMPathEnumerationProtocol-Protocol.h>

@class NSMutableSet, NSString, NSURL, SMPathSizer;

@interface SMLocalDiskPathEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>
{
    BOOL useTrueOnDiskSizes;
    BOOL _postOrder;
    SMPathSizer *_sizer;
    struct __CFURLEnumerator *_pathEnumerator;
    NSURL *_currentURL;
    NSMutableSet *_hardlinkInodes;
    NSString *_basePath;
    NSURL *_basePathURL;
}

@property(retain) NSURL *basePathURL; // @synthesize basePathURL=_basePathURL;
@property(retain) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain) NSMutableSet *hardlinkInodes; // @synthesize hardlinkInodes=_hardlinkInodes;
@property(retain) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property BOOL postOrder; // @synthesize postOrder=_postOrder;
@property struct __CFURLEnumerator *pathEnumerator; // @synthesize pathEnumerator=_pathEnumerator;
@property(retain, nonatomic) SMPathSizer *sizer; // @synthesize sizer=_sizer;
@property BOOL useTrueOnDiskSizes; // @synthesize useTrueOnDiskSizes;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (BOOL)isCurrentPathABundle;
- (unsigned long long)filesystemSizeOfCurrentPath;
- (id)bundleInfoAtCurrentPath;
- (BOOL)isPostorderDirectory;
- (BOOL)isPreorderDirectory;
- (BOOL)isCurrentPathARegularFile;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathADirectory;
- (unsigned long long)skipDescendantsReturningSize;
- (void)skipDescendants;
- (id)nextObject;
@property(readonly) BOOL supportsFastEnumeration;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1;

@end
