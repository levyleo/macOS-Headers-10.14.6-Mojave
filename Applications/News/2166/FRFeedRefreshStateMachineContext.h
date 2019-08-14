//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFStateMachineContextType-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprintModifierResult, NSString;

@interface FRFeedRefreshStateMachineContext : NSObject <NFStateMachineContextType>
{
    unsigned long long _refreshKind;
    FRFeedCollectionViewLayoutBlueprintModifierResult *_result;
}

@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintModifierResult *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long refreshKind; // @synthesize refreshKind=_refreshKind;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double minimumRefreshDuration;
@property(readonly, nonatomic) double newStoriesMessageLingerTime;
@property(readonly, nonatomic) double mastheadAnimationDuration;
@property(readonly, nonatomic) double refreshIndicatorDelay;
- (void)updateContextWithResult:(id)arg1;
- (id)initWithRefreshKind:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
