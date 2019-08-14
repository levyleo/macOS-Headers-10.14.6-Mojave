//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXMondrianViewMediaSection.h"

#import "IPXAlbumsBrowserContentChangedDelegate-Protocol.h"

@class NSString;
@protocol IPXAlbumsBrowserContentChangedDelegate;

@interface _IPXAlbumsBrowserControllerMediaSection : IPXMondrianViewMediaSection <IPXAlbumsBrowserContentChangedDelegate>
{
    id <IPXAlbumsBrowserContentChangedDelegate> _delegate;
}

@property __weak id <IPXAlbumsBrowserContentChangedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (void)itemUpdated:(id)arg1;
- (id)itemForMediaItem:(id)arg1;
- (void)updateMediaItem:(id)arg1 withItem:(id)arg2;
- (id)newMediaItemForItem:(id)arg1;
- (id)uuidForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
