//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HPDReachability;

@interface HVPageLoadErrorHandler : NSObject
{
    HPDReachability *_reachability;
}

+ (BOOL)isLocalHelpBookErrorTopic:(id)arg1;
+ (unsigned int)errorTypeFromError:(id)arg1;
@property(retain) HPDReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (id)errorAnchorHelpURLForTopicID:(id)arg1;
- (void)showPageLoadError:(id)arg1 forFailedItem:(id)arg2;
- (id)initWithServeHost:(id)arg1;

@end
