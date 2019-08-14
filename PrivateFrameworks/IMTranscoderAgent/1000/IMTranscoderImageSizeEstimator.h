//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMTranscoderImageSizeEstimator : NSObject
{
    struct CGSize _originalSize;
    double _normalizedInputFactor;
}

+ (id)newEstimatorWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource *)arg3;
- (unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;
- (double)_estimatedBytesPerPixelForJPEGQuality:(double)arg1;
- (double)_normalizedInputFactorForUTI:(id)arg1 bytesPerPixel:(double)arg2;
- (double)_nominalBytesPerPixelForUTI:(id)arg1;
- (struct CGSize)_newSizeForMaximumDimension:(long long)arg1 originalSize:(struct CGSize)arg2;
- (id)initWithUTI:(id)arg1 originalSize:(struct CGSize)arg2 fileSize:(unsigned long long)arg3;
- (id)initWithUTI:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
