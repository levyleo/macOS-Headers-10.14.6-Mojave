//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageListContentChange-Protocol.h"

@class NSString;

@interface _MessageListMovedIndexContentChange : NSObject <MessageListContentChange>
{
    unsigned long long _fromIndex;
    unsigned long long _toIndex;
}

@property(readonly, nonatomic) unsigned long long toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, nonatomic) unsigned long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, copy) NSString *description;
- (void)incrementChangeIndexesBy:(unsigned long long)arg1;
- (unsigned long long)shiftIndex:(unsigned long long)arg1;
- (void)applyToTableView:(id)arg1;
- (id)init;
- (id)initWithFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
