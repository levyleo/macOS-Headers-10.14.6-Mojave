//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSAttributedString, NSView;

@interface CalUIFontSmoothedTextLayer : CALayer
{
    NSView *_owningView;
    NSAttributedString *_attrTitle;
}

@property(retain) NSAttributedString *attrTitle; // @synthesize attrTitle=_attrTitle;
@property __weak NSView *owningView; // @synthesize owningView=_owningView;
- (void).cxx_destruct;
- (id)stringValue;
- (void)setAttributedStringValue:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;

@end
