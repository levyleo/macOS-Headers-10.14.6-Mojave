//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter
{
    NSLocale *_locale;
}

+ (id)convenienceFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2;
- (id)stringFromMiles:(double)arg1;
- (id)stringFromKilometers:(double)arg1;
- (id)init;

@end
