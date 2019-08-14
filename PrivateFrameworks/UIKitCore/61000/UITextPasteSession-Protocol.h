//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSAttributedString, UITextRange, _UIPositionedAttributedString;
@protocol UITextPasteAnimating, UITextPasteSessionDelegate;

@protocol UITextPasteSession <NSObject>
@property(nonatomic) __weak id <UITextPasteSessionDelegate> delegate;
@property(readonly, nonatomic) NSAttributedString *pasteResult;
@property(readonly, nonatomic, getter=isPastingBlocked) BOOL pastingBlocked;
@property(readonly, nonatomic) UITextRange *range;
- (_UIPositionedAttributedString *)positionedPasteResult;
- (void)pasteWithAnimator:(id <UITextPasteAnimating>)arg1;
@end
