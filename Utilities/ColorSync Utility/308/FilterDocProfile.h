//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FilterDocProfile : NSObject
{
    struct ColorSyncProfile *ref;
    unsigned int profClass;
    unsigned int profSpace;
    NSString *profName;
    NSURL *profURL;
}

+ (id)newWithIterateData:(struct __CFDictionary *)arg1;
- (id)profURL;
- (id)profName;
- (unsigned int)profSpace;
- (unsigned int)profClass;
- (struct ColorSyncProfile *)ref;
- (void)dealloc;
- (id)initWithIterateData:(struct __CFDictionary *)arg1;

@end
