//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSSimpleImageView.h>

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface NSButtonImageView : _NSSimpleImageView
{
    NSImage *_image;
    NSColor *_tintColor;
    unsigned long long _state;
    int _backgroundStyle;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (int)_vibrancyBlendMode;
- (void)dealloc;

@end
