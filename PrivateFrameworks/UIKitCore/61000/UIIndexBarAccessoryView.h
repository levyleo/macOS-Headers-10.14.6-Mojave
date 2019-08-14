//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIIndexBarView.h>

#import <UIKitCore/UIScrollAccessory-Protocol.h>

@class UIScrollView;
@protocol UIIndexBarAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory>
{
    UIScrollView *_scrollView;
    long long _edge;
}

@property(nonatomic) long long edge; // @synthesize edge=_edge;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)displayEntryNearestToContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL overlay;
- (BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)setEntries:(id)arg1;
- (void)update;

// Remaining properties
@property(nonatomic) __weak id <UIIndexBarAccessoryViewDelegate> delegate; // @dynamic delegate;

@end
