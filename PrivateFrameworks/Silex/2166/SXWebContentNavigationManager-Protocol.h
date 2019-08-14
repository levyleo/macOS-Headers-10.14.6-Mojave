//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, NSURLRequest, UIViewController;
@protocol SXWebContentNavigationHandler, SXWebContentNavigationObserver;

@protocol SXWebContentNavigationManager <NSObject>
- (void)removeObserver:(id <SXWebContentNavigationObserver>)arg1;
- (void)addObserver:(id <SXWebContentNavigationObserver>)arg1;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 extension:(NSString *)arg2;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1 scheme:(NSString *)arg2;
- (void)registerHandler:(id <SXWebContentNavigationHandler>)arg1;
- (void)commitViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
- (BOOL)shouldPreviewRequest:(NSURLRequest *)arg1;
- (unsigned long long)actionForRequest:(NSURLRequest *)arg1;
@end
