//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKLabelMarkerView.h>

#import <MapKit/_MKBalloonCalloutViewConfiguring-Protocol.h>

@class NSColor, NSImage, NSString, NSView;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring>
{
    NSView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    NSColor *_balloonFillColor;
    NSColor *_balloonStrokeColor;
    NSImage *_balloonImage;
    NSView *_balloonContentView;
    double _smallBalloonScaleFactor;
}

+ (Class)calloutViewClass;
- (void).cxx_destruct;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;
- (void)_addAnchorDotViewIfNeeded;
- (BOOL)shouldShowCallout;
@property(readonly, nonatomic, getter=_balloonContentView) NSView *balloonContentView;
@property(readonly, nonatomic, getter=_balloonImage) NSImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) NSColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) NSColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) NSColor *balloonTintColor;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

