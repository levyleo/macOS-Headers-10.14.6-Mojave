//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, RecordingActionItemView, UIImage;

@interface RCActionItemViewController : UIViewController
{
    UIImage *_actionImage;
    NSString *_actionTitle;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
@property(copy, nonatomic) NSString *actionTitle;
@property(retain, nonatomic) UIImage *actionImage;

// Remaining properties
@property(retain, nonatomic) RecordingActionItemView *view; // @dynamic view;

@end
