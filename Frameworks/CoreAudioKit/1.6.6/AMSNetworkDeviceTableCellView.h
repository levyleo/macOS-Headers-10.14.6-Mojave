//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface AMSNetworkDeviceTableCellView : NSTableCellView
{
    NSProgressIndicator *progressIndicator;
    NSImageView *indicatorImage;
    NSButton *deviceCheckbox;
    NSTextField *deviceNameLabel;
}

@property(readonly) NSTextField *deviceNameLabel; // @synthesize deviceNameLabel;
@property(readonly) NSImageView *indicatorImage; // @synthesize indicatorImage;
@property(readonly) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(readonly) NSButton *deviceCheckbox; // @synthesize deviceCheckbox;
- (id)initWithFrame:(struct CGRect)arg1;

@end
