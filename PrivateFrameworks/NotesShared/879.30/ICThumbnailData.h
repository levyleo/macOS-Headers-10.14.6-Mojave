//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface ICThumbnailData : NSObject
{
    BOOL _showAsFileIcon;
    BOOL _isMovie;
    struct NSImage *_image;
    unsigned long long _imageScaling;
}

@property(nonatomic) BOOL isMovie; // @synthesize isMovie=_isMovie;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(struct NSImage *)arg1 imageScaling:(unsigned long long)arg2 showAsFileIcon:(BOOL)arg3 isMovie:(BOOL)arg4;

@end
