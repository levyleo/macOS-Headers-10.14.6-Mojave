//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLSparseVector, SGTransformerInstance;

@interface SGModelFeatures : NSObject
{
    SGTransformerInstance *_source;
    PMLSparseVector *_vector;
}

- (void).cxx_destruct;
- (id)sessionDescriptor;
- (id)source;
- (id)vector;
- (id)initWithSource:(id)arg1 vector:(id)arg2;

@end
