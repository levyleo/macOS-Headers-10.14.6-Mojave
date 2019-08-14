//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIImageView;
@protocol FRFeedCollectionViewCellActivityIndicatorViewDelegate;

@interface FRFeedCollectionViewCellActivityIndicatorView : UIView
{
    BOOL _hasItems;
    BOOL _disliked;
    BOOL _liked;
    BOOL _favorited;
    id <FRFeedCollectionViewCellActivityIndicatorViewDelegate> _delegate;
    long long _alignment;
    UIImageView *_currentImageView;
    NSMutableArray *_activityIndicatorViewArray;
    UIImageView *_dislikeImageView;
    UIImageView *_likeImageView;
    UIImageView *_favoriteImageView;
    UIColor *_activityIndicatorColor;
}

@property(copy, nonatomic) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor=_activityIndicatorColor;
@property(retain, nonatomic) UIImageView *favoriteImageView; // @synthesize favoriteImageView=_favoriteImageView;
@property(nonatomic) BOOL favorited; // @synthesize favorited=_favorited;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(nonatomic) BOOL liked; // @synthesize liked=_liked;
@property(retain, nonatomic) UIImageView *dislikeImageView; // @synthesize dislikeImageView=_dislikeImageView;
@property(nonatomic) BOOL disliked; // @synthesize disliked=_disliked;
@property(retain, nonatomic) NSMutableArray *activityIndicatorViewArray; // @synthesize activityIndicatorViewArray=_activityIndicatorViewArray;
@property(retain, nonatomic) UIImageView *currentImageView; // @synthesize currentImageView=_currentImageView;
@property(nonatomic) BOOL hasItems; // @synthesize hasItems=_hasItems;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) __weak id <FRFeedCollectionViewCellActivityIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)fr_articleMarking_saveImage;
- (id)fr_articleMarking_dislikeImage;
- (id)fr_articleMarking_likeImage;
- (void)_updateTintColors;
- (id)_properOrderOfViews;
- (void)setDisliked:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLiked:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavorited:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateViewWithNewImageView:(id)arg1 animated:(BOOL)arg2;
- (void)reset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
