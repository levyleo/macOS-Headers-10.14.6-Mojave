//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INSpeakable <NSObject>
@property(readonly) NSArray *alternativeSpeakableMatches;
@property(readonly) NSString *vocabularyIdentifier;
@property(readonly) NSString *pronunciationHint;
@property(readonly) NSString *spokenPhrase;

@optional
@property(readonly) NSString *identifier;
@end
