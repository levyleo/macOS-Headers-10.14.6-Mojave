//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherFileHandleInfo : NSObject
{
    int fileHandle;
    BOOL closed;
}

+ (id)openFileWithPath:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)close;
- (BOOL)verifyAccessByAuditToken:(CDStruct_4c969caf)arg1;
@property(readonly) BOOL isDirectory;

@end
