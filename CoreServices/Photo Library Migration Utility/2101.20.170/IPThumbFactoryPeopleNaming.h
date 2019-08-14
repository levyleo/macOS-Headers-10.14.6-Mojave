//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPThumbFactory.h"

@class IPStretchableImage;

@interface IPThumbFactoryPeopleNaming : IPThumbFactory
{
    IPStretchableImage *_unchecked;
    IPStretchableImage *_checked;
    IPStretchableImage *_uncheckedHilited;
    IPStretchableImage *_checkedHilited;
    IPStretchableImage *_mask;
    IPStretchableImage *_stroke;
}

- (struct CGImage *)makeImageForPhoto:(struct IPPhotoInfo *)arg1 lowRes:(BOOL)arg2 selected:(BOOL)arg3 hover:(BOOL)arg4 faceIndex:(long long)arg5;
- (void)ensureCachedFrames;
- (struct CGImage *)createFrameSelected:(BOOL)arg1 hover:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
