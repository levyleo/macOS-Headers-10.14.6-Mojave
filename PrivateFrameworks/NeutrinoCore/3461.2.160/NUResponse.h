//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface NUResponse : NSObject
{
    id _result;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)description;
- (id)result:(id *)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)init;

@end
