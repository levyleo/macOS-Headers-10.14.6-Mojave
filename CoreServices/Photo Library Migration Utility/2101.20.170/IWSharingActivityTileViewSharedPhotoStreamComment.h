//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IWSharingActivityTileViewComment.h"

@interface IWSharingActivityTileViewSharedPhotoStreamComment : IWSharingActivityTileViewComment
{
}

+ (id)sharedPhotoStreamController;
- (void)recalculateFrameForContent;
- (void)drawRect:(struct CGRect)arg1;
- (void)_markAsRead;
- (id)_contactInfo;
- (void)_confirmCommentDeleteDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)_canDelete;
- (id)_isVideo:(id)arg1;
- (id)_isMine:(id)arg1;
- (id)_publishedAlbum;

@end
