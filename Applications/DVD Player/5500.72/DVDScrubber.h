//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSlider.h>

@class NSDateComponentsFormatter;

@interface DVDScrubber : NSSlider
{
    NSDateComponentsFormatter *_dateComponentsFormatter;
    BOOL _isDragging;
    BOOL _wasPlaying;
}

+ (void)initialize;
@property(nonatomic) BOOL wasPlaying; // @synthesize wasPlaying=_wasPlaying;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (struct CGSize)intrinsicContentSize;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)allowsVibrancy;

@end
