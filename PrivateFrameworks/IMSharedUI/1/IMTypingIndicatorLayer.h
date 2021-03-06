//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IMSharedUI/IMTypingIndicatorLayerProtocol-Protocol.h>

@class CAReplicatorLayer, NSColor, NSString;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>
{
    BOOL _hasDarkBackground;
    struct NSColor *_bubbleColor;
    double _bubbleOpacity;
    id _iconImage;
    struct NSColor *_thinkingDotColor;
    double _thinkingDotOpacity;
    struct NSColor *_customBubbleColor;
    CALayer *_bubbleContainer;
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDotContainer;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    CALayer *_iconImageLayer;
}

+ (double)defaultBubbleOpacity;
+ (double)defaultThinkingDotOpacity;
+ (double)thinkingDotSpace;
+ (double)thinkingDotDiameter;
+ (struct CGPoint)thinkingDotsOffset;
+ (double)iconImageTrailingSpace;
+ (struct CGRect)iconImageFrame;
+ (struct CGPoint)largeBubbleGrowOffset;
+ (struct CGRect)largeBubbleFrame;
+ (struct CGPoint)mediumBubbleGrowOffset;
+ (struct CGRect)mediumBubbleFrame;
+ (struct CGPoint)smallBubbleGrowOffset;
+ (struct CGRect)smallBubbleFrame;
+ (BOOL)supportsTypingIndicatorAnimation;
+ (struct NSColor *)defaultThinkingDotColor;
+ (struct NSColor *)defaultBubbleColor;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) CALayer *iconImageLayer; // @synthesize iconImageLayer=_iconImageLayer;
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(retain, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property(retain, nonatomic) CALayer *bubbleContainer; // @synthesize bubbleContainer=_bubbleContainer;
@property(copy, nonatomic) NSColor *customBubbleColor; // @synthesize customBubbleColor=_customBubbleColor;
@property(nonatomic) double thinkingDotOpacity; // @synthesize thinkingDotOpacity=_thinkingDotOpacity;
@property(copy, nonatomic) NSColor *thinkingDotColor; // @synthesize thinkingDotColor=_thinkingDotColor;
@property(retain, nonatomic) id iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) double bubbleOpacity; // @synthesize bubbleOpacity=_bubbleOpacity;
@property(copy, nonatomic) NSColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
@property(nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)startGrowAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_forceImmediateRedrawOnLayer:(id)arg1;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (void)_updateBubbleOpacity;
- (void)_updateBubbleColors;
- (void)_buildThinkingDots;
- (void)_buildIconImage;
- (void)_updateForImage;
- (void)_setup;
- (double)convertedCurrentMediaTime;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

