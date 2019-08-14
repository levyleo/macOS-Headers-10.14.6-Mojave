//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DOMEventListener-Protocol.h"

@class ITWebKit1ViewMacOSPrivateWebView, NSString;

@interface ITWebKit1ViewMacOSWebViewDOMEventListener : NSObject <DOMEventListener>
{
    BOOL _trackDocumentHeightChanges;
    ITWebKit1ViewMacOSPrivateWebView *_webView;
    shared_ptr_ce768d09 _coalescingTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)untrackHeightChangesInDocument:(id)arg1;
- (void)trackHeightChangesInDocument:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
