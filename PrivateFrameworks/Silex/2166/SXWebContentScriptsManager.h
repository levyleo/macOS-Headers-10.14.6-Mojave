//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScriptsManager-Protocol.h>

@class NSMutableArray, NSString, WKWebView;
@protocol SXWebContentLogger;

@interface SXWebContentScriptsManager : NSObject <SXWebContentScriptsManager>
{
    BOOL _readyToExecuteScripts;
    WKWebView *_webView;
    id <SXWebContentLogger> _logger;
    NSMutableArray *_queuedExecutableScripts;
}

@property(nonatomic) BOOL readyToExecuteScripts; // @synthesize readyToExecuteScripts=_readyToExecuteScripts;
@property(readonly, nonatomic) NSMutableArray *queuedExecutableScripts; // @synthesize queuedExecutableScripts=_queuedExecutableScripts;
@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)executeQueuedScripts;
- (void)queueExecutableScript:(id)arg1;
- (void)executeScript:(id)arg1;
- (void)removeScript:(id)arg1;
- (void)removeAllScripts;
- (void)addScript:(id)arg1;
- (id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
