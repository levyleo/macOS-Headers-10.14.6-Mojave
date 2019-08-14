//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSString, NSTextField, NSWindow;

@interface FBAlertPanel : NSWindowController
{
    NSImageView *imageView;
    NSTextField *alertText;
    NSTextField *infoText;
    NSButton *yesButton;
    NSButton *cancelButton;
    NSButton *thirdButton;
    NSButton *dontAskCheckbox;
    long long _exitValue;
    NSString *_defaultsString;
    NSWindow *_attachedWindow;
}

+ (void)runModalForWindow:(id)arg1 withAlertDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)runModalForWindow:(id)arg1 withAlertDictionary:(id)arg2;
@property(retain) NSWindow *attachedWindow; // @synthesize attachedWindow=_attachedWindow;
@property(copy) NSString *defaultsString; // @synthesize defaultsString=_defaultsString;
@property long long exitValue; // @synthesize exitValue=_exitValue;
- (void)layoutAlert;
- (id)dontAskCheckbox;
- (id)thirdButton;
- (id)cancelButton;
- (id)yesButton;
- (id)infoText;
- (id)alertText;
- (id)imageView;
- (void)buttonPressed:(id)arg1;
- (void)dontAskToggled:(id)arg1;

@end
