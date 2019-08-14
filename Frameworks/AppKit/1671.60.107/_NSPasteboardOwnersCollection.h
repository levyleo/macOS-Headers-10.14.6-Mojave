//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSPasteboard;

__attribute__((visibility("hidden")))
@interface _NSPasteboardOwnersCollection : NSObject
{
    NSMapTable *_ownersByIndex;
    NSMapTable *_ownerCounts;
    NSPasteboard *_pasteboard;
}

- (void).cxx_destruct;
- (void)handleOwnershipChange;
- (void)removeOwnerForTypeIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setOwner:(id)arg1 forTypeIdentifier:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_incrementCountForOwner:(id)arg1;
- (void)_decrementCountForOwner:(id)arg1;
- (void)dealloc;
- (id)initWithPasteboard:(id)arg1;

@end
