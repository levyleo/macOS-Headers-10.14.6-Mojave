//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_TtC9App_Store29StoreCollectionViewController.h"

#import "_TtP14AppStoreKitMac20UpdatesPresenterView_-Protocol.h"

@interface _TtC9App_Store21UpdatesViewController : _TtC9App_Store29StoreCollectionViewController <_TtP14AppStoreKitMac20UpdatesPresenterView_>
{
    // Error parsing type: , name: objectGraph
    // Error parsing type: , name: presenter
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: updatesCollectionViewLayout
    // Error parsing type: , name: updatesCollectionViewDataSource
    // Error parsing type: , name: updatesCollectionViewDelegate
    // Error parsing type: , name: updateAllButton
    // Error parsing type: , name: sidebarBadge
}

- (void).cxx_destruct;
- (void)refreshUpdateAllButton;
- (void)showWhatsNewTextAt:(id)arg1;
- (void)showWhatsNewOverlayFor:(id)arg1;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)performWithDataSourceUpdates:(CDUnknownBlockType)arg1 batchUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadData;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)setUpdateBadgeCount:(id)arg1;
- (void)updateAll:(id)arg1;
- (void)reload:(id)arg1;
- (void)deepLinkWasDispatched:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end
