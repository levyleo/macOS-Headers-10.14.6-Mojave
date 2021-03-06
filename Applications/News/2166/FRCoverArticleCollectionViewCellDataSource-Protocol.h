//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCCoverArtImage, FRCoverArticleCollectionViewCell;
@protocol FCOperationCanceling;

@protocol FRCoverArticleCollectionViewCellDataSource <NSObject>
- (BOOL)articleIsMarkedOffensiveForHeadlineInCoverArticleCell:(FRCoverArticleCollectionViewCell *)arg1;
- (BOOL)hasFavoritedHeadlineInCoverArticleCell:(FRCoverArticleCollectionViewCell *)arg1;
- (unsigned long long)likingStatusForHeadlineInCoverArticleCell:(FRCoverArticleCollectionViewCell *)arg1;
- (id <FCOperationCanceling>)coverArticleCollectionViewCell:(FRCoverArticleCollectionViewCell *)arg1 imageForCoverArt:(FCCoverArtImage *)arg2 resizedToSize:(struct CGSize)arg3 completionBlock:(void (^)(UIImage *))arg4;
@end

