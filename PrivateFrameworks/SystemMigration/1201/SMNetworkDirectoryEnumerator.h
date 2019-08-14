//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

#import <SystemMigration/SMPathEnumerationProtocol-Protocol.h>

@class IASInputStream, NSDictionary, NSFileHandle, NSSet, NSURL;
@protocol SMNRemoteProxy;

@interface SMNetworkDirectoryEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>
{
    BOOL useTrueOnDiskSizes;
    BOOL _autoSizeBundles;
    BOOL _skipNext;
    BOOL _doneEnumerating;
    id <SMNRemoteProxy> _remoteProxy;
    NSURL *_startingPath;
    NSSet *_dontDescendPaths;
    NSFileHandle *_fileHandle;
    NSDictionary *_currentFileInfo;
    unsigned long long _currentEntryType;
    IASInputStream *_inputStream;
    NSDictionary *_lastSuccessfulEvent;
}

@property(retain) NSDictionary *lastSuccessfulEvent; // @synthesize lastSuccessfulEvent=_lastSuccessfulEvent;
@property(retain) IASInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property unsigned long long currentEntryType; // @synthesize currentEntryType=_currentEntryType;
@property BOOL doneEnumerating; // @synthesize doneEnumerating=_doneEnumerating;
@property BOOL skipNext; // @synthesize skipNext=_skipNext;
@property(retain) NSDictionary *currentFileInfo; // @synthesize currentFileInfo=_currentFileInfo;
@property(retain) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain) NSSet *dontDescendPaths; // @synthesize dontDescendPaths=_dontDescendPaths;
@property(retain) NSURL *startingPath; // @synthesize startingPath=_startingPath;
@property(retain) id <SMNRemoteProxy> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property BOOL autoSizeBundles; // @synthesize autoSizeBundles=_autoSizeBundles;
@property BOOL useTrueOnDiskSizes; // @synthesize useTrueOnDiskSizes;
- (void).cxx_destruct;
- (BOOL)isCurrentPathAHardLink;
- (BOOL)hasNext;
- (BOOL)isPostorderDirectory;
- (BOOL)isPreorderDirectory;
- (unsigned long long)filesystemSizeOfCurrentPath;
- (void)skipDescendants;
- (unsigned long long)skipDescendantsReturningSize;
- (id)bundleInfoAtCurrentPath;
- (BOOL)isCurrentPathARegularFile;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathADirectory;
- (id)nextObject;
- (id)nextEvent;
@property(readonly) BOOL supportsFastEnumeration;
- (void)dealloc;
- (id)initWithRemoteProxy:(id)arg1 startingPath:(id)arg2 andDontDescendPaths:(id)arg3;

@end
