//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject
{
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (void).cxx_destruct;
- (id)description;
- (id)adjustValues;
- (unsigned long long)adjustValueCount;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)arg1;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(BOOL)arg1;
- (BOOL)isEscher;
- (id)equivalentCustomGeometry;
- (int)type;
- (id)init;

@end
