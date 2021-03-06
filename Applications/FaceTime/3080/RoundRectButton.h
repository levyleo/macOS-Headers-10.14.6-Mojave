//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSPopUpButtonCell;

@interface RoundRectButton : NSButton
{
    NSColor *_backgroundColor;
    NSColor *_disabledBackgroundColor;
    NSPopUpButtonCell *_popUpCell;
}

+ (id)activeColor;
+ (Class)cellClass;
@property(retain, nonatomic) NSPopUpButtonCell *popUpCell; // @synthesize popUpCell=_popUpCell;
@property(retain, nonatomic) NSColor *disabledBackgroundColor; // @synthesize disabledBackgroundColor=_disabledBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (id)colorForState;
- (id)textColorForState;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)runPopUp:(id)arg1;
@property(nonatomic) BOOL usesMenu;
- (void)awakeFromNib;

@end

