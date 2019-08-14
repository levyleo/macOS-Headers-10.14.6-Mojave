//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CALayerDelegate-Protocol.h"

@class NSArray, NSButton, NSColor, NSString, NSTextField;

@interface AACManagementContainerView : NSView <CALayerDelegate>
{
    long long _trackingTag;
    NSTextField *_titleField;
    NSButton *_disclosureButton;
    NSArray *_contentConstraints;
    NSArray *_disclosureConstraints;
    NSColor *_mainColor;
    NSString *_title;
    NSView *_contentView;
}

@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSColor *mainColor; // @synthesize mainColor=_mainColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)disclosureClicked:(id)arg1;
- (void)awakeFromNib;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
