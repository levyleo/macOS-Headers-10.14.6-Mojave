//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSFilePromiseProvider.h>

#import "NSFilePromiseProviderDelegate-Protocol.h"
#import "NSPasteboardWriting-Protocol.h"

@class NSString, NVPlace;

__attribute__((visibility("hidden")))
@interface NVBookmarkDragObject : NSFilePromiseProvider <NSPasteboardWriting, NSFilePromiseProviderDelegate>
{
    NVPlace *_place;
    long long _row;
}

- (void).cxx_destruct;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPlace:(id)arg1 atRow:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
