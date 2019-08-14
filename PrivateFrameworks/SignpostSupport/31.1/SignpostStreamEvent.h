//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SignpostSupport/SignpostEvent.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent
{
    unsigned long long _totalFrameCount;
    NSObject<OS_dispatch_source> *_timeoutSource;
    unsigned long long _serialNumber;
}

+ (id)serializationTypeNumber;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(nonatomic) unsigned long long _totalFrameCount; // @synthesize _totalFrameCount;
- (void).cxx_destruct;
- (BOOL)_hasTotalFrames;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;

@end
