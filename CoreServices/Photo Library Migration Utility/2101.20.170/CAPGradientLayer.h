//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAPGradientLayer : CALayer
{
    int mDirection;
    struct CGImage *mImage;
}

+ (void)drawLinearGradientInRect:(struct CGRect)arg1 startAlpha:(double)arg2 endAlpha:(double)arg3 forContext:(struct CGContext *)arg4;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setDirection:(int)arg1;

@end
