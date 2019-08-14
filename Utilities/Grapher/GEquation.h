//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GImage.h"

@class EQEquation;

@interface GEquation : GImage
{
    EQEquation *mEquation;
    long long mTransform;
}

+ (id)insertInstanceFromEvent:(id)arg1 inView:(id)arg2 controller:(id)arg3;
+ (id)defaultAttributes;
- (void)setTransform:(long long)arg1;
- (long long)transform;
- (double)imageFraction;
- (void)changeColor:(id)arg1 withController:(id)arg2;
- (void)changeFont:(id)arg1 withController:(id)arg2;
- (id)selectionFontIsMultiple:(char *)arg1;
- (void)startEditingInView:(id)arg1 controller:(id)arg2;
- (void)setEquation:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)updateImage;
- (id)equation;
- (void)dealloc;
- (id)initWithView:(id)arg1 equation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awake;

@end
