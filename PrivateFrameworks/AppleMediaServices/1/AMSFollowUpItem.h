//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSMetricsEvent, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject
{
    ACAccount *_account;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    BOOL _shouldPostNotification;
    NSArray *_actions;
    long long _displayStyle;
    NSString *_informativeText;
    AMSMetricsEvent *_metricsEvent;
    NSString *_title;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

+ (id)componentsFromBackingIdentifier:(id)arg1;
+ (id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2;
@property(retain) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSString *title; // @synthesize title=_title;
@property BOOL shouldPostNotification; // @synthesize shouldPostNotification=_shouldPostNotification;
@property(retain) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (BOOL)shouldOverwriteItem:(id)arg1;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)generateItem;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property long long priority;
@property(retain) NSString *logKey;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) ACAccount *account; // @synthesize account=_account;
@property(readonly) NSString *groupIdentifier;
@property(readonly) NSString *backingIdentifier;
@property(readonly) BOOL active;
- (id)initWithFollowUpItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3;

@end

