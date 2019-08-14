//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITextInput-Protocol.h>

@class UIDragInteraction;
@protocol UITextDragDelegate;

@protocol UITextDraggable <UITextInput>
@property(nonatomic) long long textDragOptions;
@property(readonly, nonatomic, getter=isTextDragActive) BOOL textDragActive;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property(nonatomic) __weak id <UITextDragDelegate> textDragDelegate;
@end
