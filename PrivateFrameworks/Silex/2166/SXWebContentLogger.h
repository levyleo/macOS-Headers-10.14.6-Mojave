//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentLogger-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXWebContentLogger : NSObject <SXWebContentLogger>
{
    NSMutableDictionary *_values;
}

@property(readonly, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (void)log:(id)arg1;
- (void)bindValue:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
