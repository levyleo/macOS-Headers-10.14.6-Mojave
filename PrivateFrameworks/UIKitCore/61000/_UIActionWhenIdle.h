//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _UIActionWhenIdle : NSObject
{
    NSInvocation *_invocation;
}

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void).cxx_destruct;
- (void)addObserverToRunLoop;
- (void)invoke;
- (void)invalidate;
- (BOOL)isValid;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end
