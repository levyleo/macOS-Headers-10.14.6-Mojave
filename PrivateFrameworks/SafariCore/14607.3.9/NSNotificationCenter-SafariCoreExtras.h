//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (SafariCoreExtras)
- (id)safari_addObserverForUserDefaultKey:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)safari_removeObserver:(id)arg1 forUserDefaultKey:(id)arg2;
- (void)safari_addObserver:(id)arg1 selector:(SEL)arg2 forUserDefaultKey:(id)arg3;
@end
