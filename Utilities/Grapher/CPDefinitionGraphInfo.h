//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CPDefinitionGraphInfo : NSObject
{
    Class mClass;
    NSArray *mPositions;
    NSArray *mAttributeArray;
}

- (id)attributeArray;
- (id)positions;
- (Class)class;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 positions:(id)arg2 attributeArray:(id)arg3;

@end
