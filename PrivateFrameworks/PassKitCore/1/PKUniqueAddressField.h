//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PKUniqueAddressField : NSObject
{
    NSString *_key;
    long long _index;
    NSError *_error;
    NSString *_invalidText;
}

@property(retain, nonatomic) NSString *invalidText; // @synthesize invalidText=_invalidText;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
