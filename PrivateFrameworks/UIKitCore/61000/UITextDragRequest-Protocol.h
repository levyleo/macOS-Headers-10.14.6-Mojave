//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITextRange;
@protocol UIDragSession;

@protocol UITextDragRequest <NSObject>
@property(readonly, nonatomic) id <UIDragSession> dragSession;
@property(readonly, nonatomic, getter=isSelected) BOOL selected;
@property(readonly, nonatomic) NSArray *existingItems;
@property(readonly, nonatomic) NSArray *suggestedItems;
@property(readonly, nonatomic) UITextRange *dragRange;
@end
