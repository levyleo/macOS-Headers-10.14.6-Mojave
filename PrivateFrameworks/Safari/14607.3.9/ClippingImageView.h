//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class ClippingIconImageRenderer;

__attribute__((visibility("hidden")))
@interface ClippingImageView : NSImageView
{
    ClippingIconImageRenderer *_renderer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL drawsDropShadowAndMask;
@property(nonatomic) long long imageViewStyle;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
