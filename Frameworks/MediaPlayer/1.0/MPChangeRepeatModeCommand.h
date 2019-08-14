//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand
{
    NSArray *_supportedRepeatTypes;
    long long _currentRepeatType;
}

@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
- (void).cxx_destruct;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2;
- (id)newCommandEventWithType:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedRepeatTypes:(id)arg1;

@end
