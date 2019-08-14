//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CABackdropLayer, CALayer;

__attribute__((visibility("hidden")))
@interface _NSOverlayBackgroundView : NSView
{
    id _backgroundImageRef;
    double _backgroundScaleFactor;
    CALayer *_materialLayer;
    CALayer *_tintLayer;
    CABackdropLayer *_backdropLayer;
    CALayer *_backgroundLayer;
    double _defaultBlurRadius;
    double _defaultSaturationMultiplier;
    struct CGColor *_defaultBackgroundColor;
    double _paletteScaleFactor;
    id _target;
    SEL _action;
    unsigned int _isActive:1;
    unsigned int _hasAcceleration:1;
    unsigned int _hasAccelerationCached:1;
    unsigned int _darkened:1;
    unsigned int _debugMode:1;
    unsigned int _pressed:1;
}

@property double paletteScaleFactor; // @synthesize paletteScaleFactor=_paletteScaleFactor;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property BOOL debugMode; // @synthesize debugMode=_debugMode;
@property(setter=setDarkened:) BOOL darkened; // @synthesize darkened=_darkened;
@property double backgroundScaleFactor; // @synthesize backgroundScaleFactor=_backgroundScaleFactor;
@property(retain) id backgroundImageRef; // @synthesize backgroundImageRef=_backgroundImageRef;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_cuiOptionsForCurrentMaterial;
- (void)setPressed:(BOOL)arg1;
@property(setter=setActive:) BOOL isActive;
- (void)_updateMaterialForState;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end
