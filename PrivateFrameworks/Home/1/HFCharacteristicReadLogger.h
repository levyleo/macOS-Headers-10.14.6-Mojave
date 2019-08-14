//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject
{
    NSMutableDictionary *_accessoriesToReadByTransport;
}

+ (id)nameForTransportType:(unsigned long long)arg1;
+ (id)transportKeyForCharacteristic:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *accessoriesToReadByTransport; // @synthesize accessoriesToReadByTransport=_accessoriesToReadByTransport;
- (void).cxx_destruct;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1;
- (id)init;

@end
