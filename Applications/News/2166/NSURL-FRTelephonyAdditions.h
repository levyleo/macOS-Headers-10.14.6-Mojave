//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FRTelephonyAdditions)
+ (id)fr_sanitizedURLForWebView:(id)arg1 navigationAction:(id)arg2;
+ (BOOL)fr_canHandleNavigationAction:(id)arg1;
- (BOOL)fr_isHTTPScheme;
- (BOOL)fr_isWebArchiveURL;
- (BOOL)fr_handleExternalURLWithPrompt;
- (id)fr_deepLinkURL;
@end
