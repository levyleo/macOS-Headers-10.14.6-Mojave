//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSLocale, NSURLRequest, WFLocation;

@protocol WFAirQualityRequestFormatter <NSObject>
+ (NSURLRequest *)airQualityRequestForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 error:(id *)arg3;
@end
