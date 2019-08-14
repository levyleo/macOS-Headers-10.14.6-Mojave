//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABAccountStatus : NSObject
{
    id _target;
    SEL _action;
    unsigned long long _state;
    struct CGRect _frameForAccessoryViews;
}

+ (id)authenticationFailedStatusWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)alertStatusWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)offlineStatusWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)networkActivityStatus;
+ (id)noStatus;
@property(readonly) struct CGRect frameForAccessoryViews; // @synthesize frameForAccessoryViews=_frameForAccessoryViews;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly) SEL action; // @synthesize action=_action;
@property(readonly) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)arg1;

@end
