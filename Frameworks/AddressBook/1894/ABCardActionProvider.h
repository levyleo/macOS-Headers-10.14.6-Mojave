//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABCardActionProvider : NSObject
{
    NSMutableDictionary *_actionsByProperty;
}

+ (id)sharedInstance;
@property(readonly) NSMutableDictionary *actionsByProperty; // @synthesize actionsByProperty=_actionsByProperty;
- (void)loadInternalActions;
- (void)loadActions;
- (void)addDelegatedActionResponderOfClass:(Class)arg1 actionProperty:(id)arg2;
- (void)addDelegatedActionResponderOfClass:(Class)arg1;
- (void)addActionResponder:(id)arg1 forProperty:(id)arg2;
- (void)addActionResponder:(id)arg1;
- (id)actionsForSuggestedValueForProperty:(id)arg1 value:(id)arg2 delegate:(id)arg3 item:(id)arg4;
- (id)actionsForProperty:(id)arg1;
- (void)dealloc;

@end
