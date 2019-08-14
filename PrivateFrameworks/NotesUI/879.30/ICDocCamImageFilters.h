//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDocCamImageFilters : NSObject
{
}

+ (struct NSImage *)perspectiveCorrectedImageFromImage:(struct NSImage *)arg1 normalizedImageQuad:(id)arg2;
+ (struct NSImage *)perspectiveCorrectedImageFromImage:(struct NSImage *)arg1 imageQuad:(id)arg2;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2;
+ (struct NSImage *)imageWithRGBColorspaceFromImage:(struct NSImage *)arg1;
+ (struct NSImage *)filteredImage:(struct NSImage *)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3;
+ (struct NSImage *)filteredImage:(struct NSImage *)arg1 imageFilterType:(short)arg2;
+ (struct NSImage *)grayscaleDocument:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)colorDocument:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)autoEnhancement:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)bradleyAdaptiveThresholdWithBlur:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)bradleyAdaptiveThreshold:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)normalization:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)histogramEqualization:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)autoBlackAndWhitePoint:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)grayscale:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)icImageCleanupFilter:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)swapRedAndGreen:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)whiteboardAndSaturation:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)sigmoidColor:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)sigmoidGrayscale:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)whiteboardFilter:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)sepiaFilter:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)convertImageToGrayScale:(struct NSImage *)arg1;
+ (struct NSImage *)convertImageTo8BitGrayScale:(struct NSImage *)arg1;
+ (struct NSImage *)normalizedImage:(struct NSImage *)arg1;
+ (struct NSImage *)bradleyAdaptiveThreshold:(struct NSImage *)arg1;
+ (struct NSImage *)histogramEqualizedImage:(struct NSImage *)arg1;
+ (id)sharedCoreImageContext;
+ (id)localizedImageFilterNameForType:(short)arg1;
+ (id)localizedImageFilterNameForName:(id)arg1;
+ (short)imageFilterTypeFromName:(id)arg1;
+ (id)imageFilterNames;

@end
