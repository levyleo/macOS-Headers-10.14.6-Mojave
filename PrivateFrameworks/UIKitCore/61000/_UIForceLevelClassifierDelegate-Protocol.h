//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIForceLevelClassifier;

@protocol _UIForceLevelClassifierDelegate <NSObject>
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(long long)arg2;

@optional
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;
@end

