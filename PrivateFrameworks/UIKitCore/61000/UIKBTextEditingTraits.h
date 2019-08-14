//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIKBTextEditingTraits : NSObject
{
    BOOL _canToggleBoldface;
    BOOL _canToggleItalics;
    BOOL _canToggleUnderline;
    BOOL _supportStyling;
    BOOL _canCut;
    BOOL _canCopy;
    BOOL _canPaste;
    BOOL _canMoveCursorLeft;
    BOOL _canMoveCursorRight;
    BOOL _isBold;
    BOOL _isItalicized;
    BOOL _isUnderlined;
}

+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL isUnderlined; // @synthesize isUnderlined=_isUnderlined;
@property(readonly, nonatomic) BOOL isItalicized; // @synthesize isItalicized=_isItalicized;
@property(readonly, nonatomic) BOOL isBold; // @synthesize isBold=_isBold;
@property(readonly, nonatomic) BOOL canMoveCursorRight; // @synthesize canMoveCursorRight=_canMoveCursorRight;
@property(readonly, nonatomic) BOOL canMoveCursorLeft; // @synthesize canMoveCursorLeft=_canMoveCursorLeft;
@property(readonly, nonatomic) BOOL canPaste; // @synthesize canPaste=_canPaste;
@property(readonly, nonatomic) BOOL canCopy; // @synthesize canCopy=_canCopy;
@property(nonatomic) BOOL canCut; // @synthesize canCut=_canCut;
@property(readonly, nonatomic) BOOL supportStyling; // @synthesize supportStyling=_supportStyling;
@property(readonly, nonatomic) BOOL canToggleUnderline; // @synthesize canToggleUnderline=_canToggleUnderline;
@property(readonly, nonatomic) BOOL canToggleItalics; // @synthesize canToggleItalics=_canToggleItalics;
@property(readonly, nonatomic) BOOL canToggleBoldface; // @synthesize canToggleBoldface=_canToggleBoldface;
- (id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;

@end
