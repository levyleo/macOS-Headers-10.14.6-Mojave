//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDynamicColorModifier-Protocol.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface NSAlphaThresholdColorModifier : NSObject <NSDynamicColorModifier>
{
    double _alphaThreshold;
    NSColor *_belowThresholdColor;
    NSColor *_aboveThresholdColor;
}

@property(copy) NSColor *aboveThresholdColor; // @synthesize aboveThresholdColor=_aboveThresholdColor;
@property(copy) NSColor *belowThresholdColor; // @synthesize belowThresholdColor=_belowThresholdColor;
@property double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
- (id)colorByApplyingToColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlphaThreshold:(double)arg1 belowThresholdColor:(id)arg2 aboveThresholdColor:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
