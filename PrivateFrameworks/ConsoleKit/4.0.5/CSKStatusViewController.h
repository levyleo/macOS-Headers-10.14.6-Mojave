//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSStackView;

@interface CSKStatusViewController : NSViewController
{
    NSStackView *_stackView;
}

@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)removeTrailingView;
- (void)addTrailingView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
