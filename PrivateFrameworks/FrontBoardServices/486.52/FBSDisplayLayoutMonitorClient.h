//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSDisplayLayoutMonitorClientDelegate;

@interface FBSDisplayLayoutMonitorClient : FBSServiceFacilityClient
{
    id <FBSDisplayLayoutMonitorClientDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleDisplayLayoutUpdate:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)configureConnectMessage:(id)arg1;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;

@end
