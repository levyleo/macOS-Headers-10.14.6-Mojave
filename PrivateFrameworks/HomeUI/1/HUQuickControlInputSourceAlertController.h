//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HFTVInputControlItem, NSString;
@protocol HUPresentationDelegate;

@interface HUQuickControlInputSourceAlertController : UIAlertController <HUPresentationDelegateHost, HUPreloadableViewController>
{
    id <HUPresentationDelegate> _presentationDelegate;
    HFTVInputControlItem *_controlItem;
    CDUnknownBlockType _completionHandler;
}

+ (id)viewControllerWithInputControlItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) HFTVInputControlItem *controlItem; // @synthesize controlItem=_controlItem;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (id)hu_preloadContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
