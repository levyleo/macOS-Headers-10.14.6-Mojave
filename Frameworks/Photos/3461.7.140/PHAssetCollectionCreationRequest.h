//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetCollectionChangeRequest.h>

@class PHObjectPlaceholder, RDAlbum;

@interface PHAssetCollectionCreationRequest : PHAssetCollectionChangeRequest
{
    RDAlbum *_album;
    PHObjectPlaceholder *_placeholder;
}

- (void).cxx_destruct;
- (id)placeholderForCreatedAssetCollection;
- (id)mutableAlbum;
- (id)localIdentifier;
- (id)initWithTitle:(id)arg1 photoLibrary:(id)arg2;

@end
