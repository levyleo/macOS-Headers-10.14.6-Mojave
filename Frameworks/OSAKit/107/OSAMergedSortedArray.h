//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface OSAMergedSortedArray : NSArray
{
    NSArray *_array1;
    NSArray *_array2;
    struct _mergedIndexes {
        unsigned int :1;
        unsigned int :31;
    } *_combinedInfo;
    unsigned long long _count;
}

+ (id)uniquedArrayWithArray:(id)arg1 array:(id)arg2 usingFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
+ (id)arrayWithArray:(id)arg1 array:(id)arg2 usingFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;
- (id)initAndUniqueWithArray:(id)arg1 array:(id)arg2 usingFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (id)initWithArray:(id)arg1 array:(id)arg2 usingFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (id)_initWithArray:(id)arg1 array:(id)arg2 usingFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4 makeUnique:(BOOL)arg5;

@end
