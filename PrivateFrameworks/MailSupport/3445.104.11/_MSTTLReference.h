//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _MSTTLReference : NSObject
{
    id _value;
    double _ttl;
    NSDate *_lastSet;
}

@property(retain, nonatomic) NSDate *lastSet; // @synthesize lastSet=_lastSet;
@property(nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)getValueWithGenerator:(CDUnknownBlockType)arg1;
- (id)initWithTTL:(double)arg1;

@end
