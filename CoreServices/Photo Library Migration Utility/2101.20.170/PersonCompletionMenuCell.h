//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSCell.h>

@class IP_Ellipsizer;

@interface PersonCompletionMenuCell : NSCell
{
    IP_Ellipsizer *_titleEllipsizer;
    IP_Ellipsizer *_subtitleEllipsizer;
    BOOL _lightBackground;
    BOOL _flipped;
}

@property BOOL flipped; // @synthesize flipped=_flipped;
@property BOOL lightBackground; // @synthesize lightBackground=_lightBackground;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawSubtitleText:(id)arg1 inRect:(struct CGRect)arg2 textColor:(id)arg3;
- (void)drawTitleText:(id)arg1 inRect:(struct CGRect)arg2 textColor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)init;

@end
