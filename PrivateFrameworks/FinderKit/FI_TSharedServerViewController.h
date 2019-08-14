//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSNavSharedServerController.h>

#import <FinderKit/TNodeObserverProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TSharedServerViewController : NSNavSharedServerController <TNodeObserverProtocol>
{
    _Bool _waitingToEject;
    struct shared_ptr<TNodeObserverCocoaBridge> _nodeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)screenShareClicked:(id)arg1;
- (void)askToUseODSClicked:(id)arg1;
- (void)connectAsButtonClicked:(id)arg1;
- (void)connectToSharedServerAs;
- (void)setRepresentedObject:(id)arg1;
- (void)updateConnectionState;
- (void)updateConnectionStateAsRemoteDisc;
- (void)updateConnectionStateAsSharedServer;
- (void)updateLayout;
- (void)nodeObserver:(struct TNodeObserver *)arg1 openSyncCompleted:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 openSyncStarted:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeChanged:(const struct TFENode *)arg2 inObservedNode:(const struct TFENode *)arg3 property:(unsigned int)arg4;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeAdded:(const struct TFENode *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)stopObservingNode:(const struct TFENode *)arg1;
- (void)startObservingNode:(const struct TFENode *)arg1;
- (void)setNetworkConnectionState:(unsigned int)arg1;
- (unsigned int)networkConnectionState;
- (struct TFENode)serverNode;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
