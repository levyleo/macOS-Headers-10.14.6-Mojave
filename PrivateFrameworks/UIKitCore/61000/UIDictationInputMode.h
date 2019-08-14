//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UISpecializedInputMode.h>

@class UIKeyboardInputMode, UITouch;

@interface UIDictationInputMode : UISpecializedInputMode
{
    UITouch *_triggeringTouch;
    UIKeyboardInputMode *_currentInputModeForDictation;
}

+ (BOOL)currentInputModeSupportsDictation;
@property(retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property(retain, nonatomic) UITouch *triggeringTouch; // @synthesize triggeringTouch=_triggeringTouch;
- (BOOL)includeBarHeight;
- (Class)viewControllerClass;
- (void)dealloc;

@end
