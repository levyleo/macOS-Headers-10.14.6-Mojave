//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMSystemEventsUIElement.h>

@class NSString;

@interface _AMSystemEventsProcess : _AMSystemEventsUIElement
{
}

@property BOOL visible;
@property(readonly) long long unixId;
@property(readonly) long long totalPartitionSize;
@property(readonly, copy) id shortName;
@property(readonly) long long partitionSpaceUsed;
@property(readonly, copy) NSString *name;
- (long long)id;
@property(readonly) BOOL hasScriptingTerminology;
@property BOOL frontmost;
@property(readonly, copy) NSString *fileType;
@property(readonly, copy) id file;
@property(readonly, copy) NSString *displayedName;
@property(readonly, copy) NSString *creatorType;
@property(readonly) BOOL Classic;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly) BOOL backgroundOnly;
@property(readonly, copy) NSString *architecture;
@property(readonly) BOOL acceptsRemoteEvents;
@property(readonly) BOOL acceptsHighLevelEvents;
- (id)windows;
- (id)menuBars;

@end
