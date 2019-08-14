//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSDeserializerStream-Protocol.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream>
{
    const void *memory;
    const char *current;
    unsigned long long left;
    unsigned long long max;
    BOOL freeWhenDone;
}

- (void)readData:(void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)readAlignedDataSize;
- (int)readInt;
- (id)initFromPath:(id)arg1;
- (void)dealloc;
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;

@end
