//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePromiseProviderDelegate-Protocol.h"

@class NSMapTable, NSString;

@interface PVDraggingFilePromiseController : NSObject <NSFilePromiseProviderDelegate>
{
    NSMapTable *_fileCreationBlocksForFilePromiseProviders;
}

+ (id)sharedDraggingFilePromiseController;
- (void).cxx_destruct;
- (id)operationQueueForFilePromiseProvider:(id)arg1;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (void)clearAllFilePromises;
- (void)forFilePromiseProvider:(id)arg1 addFileCreationBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
