//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTOpenGLContext;

__attribute__((visibility("hidden")))
@interface QTRemoteCVImageBufferUnarchiver : NSObject
{
    struct __CVOpenGLBufferPool *_openGLBufferPool;
    QTOpenGLContext *_openGLContext;
}

- (struct __CVBuffer *)createCVImageBufferFromCVOpenGLBufferDescription:(const CDStruct_a11a3c06 *)arg1 attachmentsData:(void *)arg2 attachmentsDataSize:(unsigned long long)arg3;
- (struct __CVBuffer *)createCVImageBufferFromCVPixelBufferDescription:(const CDStruct_7e7fb945 *)arg1 attachmentsData:(void *)arg2 attachmentsDataSize:(unsigned long long)arg3 planeDescriptions:(CDStruct_33dcf794 *)arg4 planeDescriptionsCount:(unsigned long long)arg5 bufferData:(void *)arg6 bufferDataSize:(unsigned long long)arg7 releasePlanarBytesCallback:(CDUnknownFunctionPointerType)arg8 releaseRefCon:(void *)arg9;
- (struct __CVBuffer *)createCVImageBufferFromCVPixelBufferDescription:(const CDStruct_7e7fb945 *)arg1 attachmentsData:(void *)arg2 attachmentsDataSize:(unsigned long long)arg3 bufferData:(void *)arg4 bufferDataSize:(unsigned long long)arg5 releaseBytesCallback:(CDUnknownFunctionPointerType)arg6 releaseRefCon:(void *)arg7;
- (void)finalize;
- (void)dealloc;

@end
