//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBTemperature;

@protocol _INPBTemperatureList <NSObject>
+ (Class)temperatureType;
@property(readonly, nonatomic) unsigned long long temperaturesCount;
@property(copy, nonatomic) NSArray *temperatures;
@property(readonly, nonatomic) BOOL hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBTemperature *)temperatureAtIndex:(unsigned long long)arg1;
- (void)addTemperature:(_INPBTemperature *)arg1;
- (void)clearTemperatures;
@end
