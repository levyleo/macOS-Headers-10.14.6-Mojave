//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXLivePhotoTrimScrubberUpdateDelegate-Protocol.h"

@class IPXLivePhotoTrimScrubber, IPXToolbarButton, NSArray, NSMenu, NSMutableArray, NSPopUpButton, NSString, NSView;
@protocol IPXEditorActionReceiver, IPXLivePhotoToolbarControllerDelegate;

@interface IPXLivePhotoToolbarController : IPXViewController <IPXLivePhotoTrimScrubberUpdateDelegate>
{
    NSView *_livePhotoToolbar;
    IPXToolbarButton *_livePhotoMuteButton;
    IPXToolbarButton *_livePhotoToggleButton;
    NSPopUpButton *_variationButton;
    NSMutableArray *_livePhotoToolbarConstraints;
    NSMenu *_variationMenu;
    BOOL _livePhotoThirdPartyEdited;
    unsigned long long _livePhotoState;
    IPXLivePhotoTrimScrubber *_livePhotoTrimScrubber;
    id <IPXEditorActionReceiver> _actionReceiver;
    id <IPXLivePhotoToolbarControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IPXLivePhotoToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IPXEditorActionReceiver> actionReceiver; // @synthesize actionReceiver=_actionReceiver;
@property(readonly, nonatomic) IPXLivePhotoTrimScrubber *livePhotoTrimScrubber; // @synthesize livePhotoTrimScrubber=_livePhotoTrimScrubber;
@property(nonatomic) unsigned long long livePhotoState; // @synthesize livePhotoState=_livePhotoState;
@property(nonatomic) BOOL livePhotoThirdPartyEdited; // @synthesize livePhotoThirdPartyEdited=_livePhotoThirdPartyEdited;
- (void).cxx_destruct;
- (void)trimScrubberDidUpdate:(id)arg1;
- (BOOL)toolbarVersionDidDownload:(id)arg1;
- (void)livePhotoStateClicked:(id)arg1;
- (void)variationButtonClicked:(id)arg1;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)muteButtonClicked:(id)arg1;
- (void)_updateButtonDescriptions;
- (void)_updateVariationMenu;
- (void)_update;
@property(nonatomic, getter=isLivePhotoEnabled) BOOL livePhotoEnabled;
@property(nonatomic, getter=isMuted) BOOL muted;
@property(readonly, nonatomic) NSArray *constraints;
- (void)updateViewConstraints;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
