//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (PBAdditions)
+ (id)brassButtonImageWithTitle:(id)arg1 image:(id)arg2 pressed:(BOOL)arg3;
+ (void)drawInnerGlowForString:(id)arg1 inRect:(struct CGRect)arg2 color:(id)arg3 radius:(double)arg4 operation:(unsigned long long)arg5;
+ (id)shutterButtonImageForIcon:(id)arg1 pressed:(BOOL)arg2;
+ (id)etchColorForDisabledButtonGlyph;
+ (id)etchColorForNormalButtonGlyph;
+ (id)etchColorForHighlightButtonGlyph;
+ (void)drawTiledWoodInRect:(struct CGRect)arg1 woodImage:(id)arg2 glowImage:(id)arg3 glowOpacity:(double)arg4 borderShadow:(id)arg5;
+ (void)drawInnerGlowInRect:(struct CGRect)arg1 opacity:(double)arg2 radius:(double)arg3;
- (id)centerToFitInSize:(struct CGSize)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3;
- (void)pb_drawEtchedInRect:(struct CGRect)arg1 radius:(double)arg2;
- (id)createTempFileWithName:(id)arg1;
- (void)compositeWithEtchToPoint:(struct CGPoint)arg1 operation:(long long)arg2 fraction:(double)arg3 etchColor:(id)arg4;
- (id)PNGRepresentation;
- (id)JPEGRepresentation;
- (id)_JPEGRepresentation;
- (id)representationUsingType:(unsigned long long)arg1;
- (id)disabledImage;
- (id)tintedImageWithColor:(id)arg1;
- (id)imageWithOpacity:(double)arg1;
- (id)scaledImage:(struct CGSize)arg1 fromRect:(struct CGRect)arg2;
- (id)squareImage;
- (id)scaledImage:(double)arg1;
- (id)upsideDownImage;
- (id)flippedImage;
- (id)flippedImageHorizontally:(BOOL)arg1 accountForBackingScale:(BOOL)arg2;
@end
