//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer, UIView;
@protocol UIViewControllerPreviewingDelegate;

@protocol UIViewControllerPreviewing <NSObject>
@property(nonatomic) struct CGRect sourceRect;
@property(readonly, nonatomic) UIView *sourceView;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@end
