//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDImageProvider.h>

@interface TSDErrorImageProvider : TSDImageProvider
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (struct CGPDFDocument *)p_iconPDFDocument;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (BOOL)isError;
- (BOOL)isValid;
- (struct CGSize)naturalSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end
