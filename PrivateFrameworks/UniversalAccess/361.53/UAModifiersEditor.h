//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface UAModifiersEditor : NSTextView
{
    unsigned long long _modifiers;
    BOOL _recording;
}

- (id)init;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)setModifiers:(unsigned long long)arg1;
- (unsigned long long)modifiers;
- (void)_stopRecording:(id)arg1;
- (void)_flagsChangedAction:(id)arg1;

@end
