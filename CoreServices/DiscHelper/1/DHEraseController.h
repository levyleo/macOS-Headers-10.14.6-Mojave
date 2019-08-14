//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class DRDevice, DRErase, NSImageView, NSProgressIndicator, NSString, NSTextField;

@interface DHEraseController : NSWindowController <NSWindowDelegate>
{
    NSTextField *_title;
    NSTextField *_progressMessage;
    NSProgressIndicator *_progress;
    NSImageView *_icon;
    DRDevice *_device;
    DRErase *_erase;
}

@property(retain, nonatomic) DRErase *erase; // @synthesize erase=_erase;
@property(retain, nonatomic) DRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSProgressIndicator *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSTextField *progressMessage; // @synthesize progressMessage=_progressMessage;
@property(retain, nonatomic) NSTextField *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)progressPanelDidFinish:(BOOL)arg1;
- (void)eraseNotification:(id)arg1;
- (BOOL)confirmErase;
- (BOOL)start:(id *)arg1;
- (void)windowDidLoad;
- (id)initWithDeviceString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
