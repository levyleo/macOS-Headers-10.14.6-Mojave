//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseContainerMediaItem.h"

#import "PFResourceAccessClient-Protocol.h"

@class NSString, RDVersion;
@protocol IPXAlbumsBrowserContentChangedDelegate;

@interface IPXAlbumMediaItem : IPXDatabaseContainerMediaItem <PFResourceAccessClient>
{
    RDVersion *_posterVersion;
    unsigned long long _albumModelId;
    id <IPXAlbumsBrowserContentChangedDelegate> _delegate;
}

@property __weak id <IPXAlbumsBrowserContentChangedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (id)posterModel;
- (BOOL)isEditableSmartAlbum;
- (BOOL)canBeTrashed;
- (BOOL)canReceiveContainerDrop;
- (BOOL)canReorderContents;
- (BOOL)canEditName;
- (id)name;
- (id)synchronouslyRenderedThumbnailForResolution:(unsigned long long)arg1;
- (struct CGImage *)_deletedAlbumCGImage;
- (struct CGImage *)_hiddenAlbumCGImage;
- (struct CGImage *)_blankAlbumCGImage;
- (struct CGImage *)_imageForAlbumType:(long long)arg1;
- (void)_reloadProperties;
- (void)updateWithAlbum:(id)arg1;
@property(readonly, nonatomic) RDVersion *posterVersion;
- (id)album;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
