//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture
{
    NUIOSurface *_surface;
}

@property(readonly, nonatomic) NUIOSurface *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (BOOL)isSurface;
- (void)allocateStorage:(id)arg1;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;

@end
