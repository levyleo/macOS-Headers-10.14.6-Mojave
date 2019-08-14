//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <DocumentManager/DOCAppearanceProtocol-Protocol.h>
#import <DocumentManager/DOCHostInfoViewControllerProxy-Protocol.h>
#import <DocumentManager/UIPopoverPresentationControllerDelegate-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCItem, NSString, UIViewController, _UIResilientRemoteViewContainerViewController;
@protocol DOCRemoteAppearanceInterface, DOCServiceInfoViewControllerProxy;

@interface DOCInfoViewController : UINavigationController <DOCHostInfoViewControllerProxy, UIPopoverPresentationControllerDelegate, DOCAppearanceProtocol>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    UIViewController<DOCRemoteAppearanceInterface> *_localViewController;
    DOCConfiguration *_configuration;
    id <DOCServiceInfoViewControllerProxy> _serviceProxy;
    DOCItem *_item;
    DOCAppearance *_lastAppearance;
    BOOL _showTagsOnly;
    BOOL _inPopoverMode;
}

@property(nonatomic) BOOL inPopoverMode; // @synthesize inPopoverMode=_inPopoverMode;
- (void).cxx_destruct;
- (void)updatePreferredContentSize:(struct CGSize)arg1;
- (void)dismissViewController;
- (void)updateAppearance:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_updateForPresentation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)remoteInterface;
- (id)remoteViewController;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2 showTagsOnly:(BOOL)arg3;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
