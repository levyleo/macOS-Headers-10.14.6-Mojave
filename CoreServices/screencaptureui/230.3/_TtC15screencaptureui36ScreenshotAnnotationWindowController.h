//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_TtC15screencaptureui20AnnotationController.h"

@class NSButton, NSMenu, NSString;

@interface _TtC15screencaptureui36ScreenshotAnnotationWindowController : _TtC15screencaptureui20AnnotationController
{
    // Error parsing type: , name: doneButton
    // Error parsing type: , name: revertButton
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: mainMenu
    // Error parsing type: , name: markupViewController
    // Error parsing type: , name: screenshot
    // Error parsing type: , name: _annotatedImageForSharing
}

- (void).cxx_destruct;
- (id)initWithWindow:(id)arg1;
- (void)delete:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)revertButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)copyAndClose:(id)arg1;
- (void)copy:(id)arg1;
@property(nonatomic, readonly) NSString *windowNibName;
- (void)windowDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSMenu *mainMenu; // @synthesize mainMenu;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic) __weak NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak NSButton *shareButton; // @synthesize shareButton;
@property(nonatomic) __weak NSButton *revertButton; // @synthesize revertButton;
@property(nonatomic) __weak NSButton *doneButton; // @synthesize doneButton;

@end

