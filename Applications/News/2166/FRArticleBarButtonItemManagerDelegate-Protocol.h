//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRArticleBarButtonItemManager, UIBarButtonItem;

@protocol FRArticleBarButtonItemManagerDelegate <NSObject>
- (BOOL)articleBarButtonItemManagerShouldShowChrome:(FRArticleBarButtonItemManager *)arg1;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performDisLikeActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performLikeActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performTextResizingActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performShareActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performNextActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (BOOL)shouldShowNextButtonForArticleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1;
@end
