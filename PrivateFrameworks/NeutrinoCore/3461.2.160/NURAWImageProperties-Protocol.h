//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol NURAWNoiseReductionProperties;

@protocol NURAWImageProperties <NSObject>
@property(readonly) id <NURAWNoiseReductionProperties> noiseReductionProperties;
@property(readonly) double tint;
@property(readonly) double temperature;
@property(readonly) NSArray *availableDecoderVersions;
@property(readonly) NSString *decoderVersion;
@end
