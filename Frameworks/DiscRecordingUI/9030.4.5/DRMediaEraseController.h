//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSTextField;

@interface DRMediaEraseController : NSObject
{
    NSTextField *_userMessageField;
    NSButton *_startEraseButton;
    NSButton *_trayControlButton;
    BOOL _userEnableState;
    BOOL _isErasing;
    id _controllerPrivate;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)updateEjectStateForDevice:(id)arg1 mediaStatus:(id)arg2;
- (void)updateUserMessageForDevice:(id)arg1 mediaStatus:(id)arg2;
- (void)setUserPrompt:(id)arg1 andOKButtonState:(BOOL)arg2;
- (void)setUserMessageField:(id)arg1;
- (void)setStartEraseButton:(id)arg1;
- (void)setTrayControlButton:(id)arg1;
- (void)mediaStateDidChange:(id)arg1;
- (void)setIsErasing:(BOOL)arg1;
- (void)setMonitoredDevice:(id)arg1;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)controller;

@end
