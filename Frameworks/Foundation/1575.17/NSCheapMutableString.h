//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString
{
    union {
        unsigned short *fat;
        char *thin;
    } contents;
    struct {
        unsigned int isFat:1;
        unsigned int freeWhenDone:1;
        unsigned int refs:30;
    } flags;
    unsigned long long numCharacters;
    void *_reserved;
}

- (unsigned long long)cStringLength;
- (const char *)lossyCString;
- (const char *)cString;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)setContentsNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;

@end
