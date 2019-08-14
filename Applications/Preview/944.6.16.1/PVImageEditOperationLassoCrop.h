//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVImageEditOperation.h"

@class CIImage;

@interface PVImageEditOperationLassoCrop : PVImageEditOperation
{
    CIImage *_maskImage;
    struct CGRect _cropRect;
    struct CGSize _origSize;
}

+ (BOOL)supportsSecureCoding;
@property struct CGSize originalSize; // @synthesize originalSize=_origSize;
@property struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain) CIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void).cxx_destruct;
- (id)filterChainForSourceImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 bounds:(struct CGRect)arg2 originalSize:(struct CGSize)arg3;
- (id)initWithCIImage:(id)arg1 bounds:(struct CGRect)arg2 originalSize:(struct CGSize)arg3;

@end
