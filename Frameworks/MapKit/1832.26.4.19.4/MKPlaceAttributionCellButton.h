//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : NSButton
{
    id <MKPlaceAttributionCellButtonDelegate> _buttonDelegate;
}

@property(nonatomic) __weak id <MKPlaceAttributionCellButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;

@end
