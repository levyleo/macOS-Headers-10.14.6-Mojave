//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRImageManager, MRTexture;

@interface MRTextureSource : NSObject
{
    MRTexture *_texture;
    CDStruct_6d5f65b2 _textureOptions;
    unsigned int _pixelFormat;
    float _color[4];
    struct __IOSurface *_ioSurface;
    struct __CVBuffer *_cvPixelBuffer;
    struct CGContext *_cgContext;
    struct CGColorSpace *_colorspace;
    struct CGImage *_cgImage;
    void *_datas[3];
    unsigned long long _dataSize;
    unsigned int _dataRowBytes;
    unsigned int _dataWidth;
    unsigned int _dataHeight;
    BOOL _ownsData;
    unsigned char _orientation;
    struct __CVBuffer *_cvTexture;
    BOOL _isPremultiplied;
    BOOL _isOpaque;
    BOOL _wantsSharedTexture;
    MRImageManager *_imageManager;
    CDStruct_3e356df7 _size;
}

@property(nonatomic) BOOL wantsSharedTexture; // @synthesize wantsSharedTexture=_wantsSharedTexture;
@property(readonly, nonatomic) CDStruct_3e356df7 size; // @synthesize size=_size;
@property(readonly) MRImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (void)addOverlayForROI:(id)arg1;
@property(readonly) MRTexture *texture;
@property(readonly) CDStruct_6d5f65b2 *textureOptions;
- (void)generateMipmap;
- (void)cleanup;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext *)arg1 imageManager:(id)arg2;
- (id)initWithCGContext:(struct CGContext *)arg1 size:(CDStruct_3e356df7)arg2 imageManager:(id)arg3;
- (id)initWithCVTexture:(struct __CVBuffer *)arg1 size:(CDStruct_3e356df7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 size:(CDStruct_3e356df7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 textureSize:(CDStruct_3e356df7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 imageManager:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 size:(CDStruct_3e356df7)arg2 orientation:(long long)arg3 imageManager:(id)arg4;
- (id)initWithSize:(CDStruct_3e356df7)arg1 andColor:(const float *)arg2 imageManager:(id)arg3;

@end
