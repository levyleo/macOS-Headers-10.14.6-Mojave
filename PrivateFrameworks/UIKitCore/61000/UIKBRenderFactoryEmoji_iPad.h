//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactoryEmoji_iPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (id)messagesWriteboardKeyImageName;
- (struct CGPoint)emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiPopupTextOffset;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;

@end
