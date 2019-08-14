//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextTouchBarItemController.h>

#import <WebKit/NSCandidateListTouchBarItemDelegate-Protocol.h>
#import <WebKit/NSTouchBarDelegate-Protocol.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface WKTextTouchBarItemController : NSTextTouchBarItemController <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate>
{
    BOOL _textIsBold;
    BOOL _textIsItalic;
    BOOL _textIsUnderlined;
    unsigned long long _currentTextAlignment;
    struct RetainPtr<NSColor> _textColor;
    struct RetainPtr<WKTextListTouchBarViewController> _textListTouchBarViewController;
    struct WebViewImpl *_webViewImpl;
}

@property(nonatomic) unsigned long long currentTextAlignment; // @synthesize currentTextAlignment=_currentTextAlignment;
@property(nonatomic) BOOL textIsUnderlined; // @synthesize textIsUnderlined=_textIsUnderlined;
@property(nonatomic) BOOL textIsItalic; // @synthesize textIsItalic=_textIsItalic;
@property(nonatomic) BOOL textIsBold; // @synthesize textIsBold=_textIsBold;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)textListViewController;
- (void)_wkChangeColor:(id)arg1;
@property(retain, nonatomic) NSColor *textColor;
- (void)_wkChangeTextAlignment:(id)arg1;
- (void)_wkChangeTextStyle:(id)arg1;
- (id)textListTouchBarViewController;
- (void)didChangeAutomaticTextCompletion:(id)arg1;
- (void)touchBarWillEnterCustomization:(id)arg1;
- (void)touchBarDidExitCustomization:(id)arg1;
- (void)candidateListTouchBarItem:(id)arg1 changedCandidateListVisibility:(BOOL)arg2;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (id)itemForIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)didDestroyView;
- (id)initWithWebViewImpl:(struct WebViewImpl *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
