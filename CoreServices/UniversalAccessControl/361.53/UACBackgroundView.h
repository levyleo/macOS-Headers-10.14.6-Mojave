//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSGradient;

@interface UACBackgroundView : NSView
{
    id _target;
    SEL _action;
    NSArray *_screenBounds;
    NSGradient *__primaryScreenLinearGradient;
    NSGradient *__primaryScreenRadialGradient;
    NSGradient *__secondaryScreensLinearGradient;
}

@property(retain, nonatomic) NSGradient *_secondaryScreensLinearGradient; // @synthesize _secondaryScreensLinearGradient=__secondaryScreensLinearGradient;
@property(retain, nonatomic) NSGradient *_primaryScreenRadialGradient; // @synthesize _primaryScreenRadialGradient=__primaryScreenRadialGradient;
@property(retain, nonatomic) NSGradient *_primaryScreenLinearGradient; // @synthesize _primaryScreenLinearGradient=__primaryScreenLinearGradient;
@property(retain, nonatomic) NSArray *screenBounds; // @synthesize screenBounds=_screenBounds;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
