//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController
{
    id <GKAchievementViewControllerDelegate> _achievementDelegate;
}

@property id <GKAchievementViewControllerDelegate> achievementDelegate; // @synthesize achievementDelegate=_achievementDelegate;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (id)description;
- (id)init;

@end
