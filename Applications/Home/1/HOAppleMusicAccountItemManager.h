//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HOAppleMusicAccountModule;

@interface HOAppleMusicAccountItemManager : HFItemManager
{
    BOOL _shouldDisableUpdates;
    HOAppleMusicAccountModule *_module;
}

@property(nonatomic) BOOL shouldDisableUpdates; // @synthesize shouldDisableUpdates=_shouldDisableUpdates;
@property(readonly, nonatomic) HOAppleMusicAccountModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;

@end
