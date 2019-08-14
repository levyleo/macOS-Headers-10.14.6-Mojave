//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNTimeProvider-Protocol.h>
#import <ContactsUI/NSObject-Protocol.h>

@protocol CNCancelable;

@protocol CNScheduler <CNTimeProvider, NSObject>
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2 qualityOfService:(unsigned long long)arg3;
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1 qualityOfService:(unsigned long long)arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(void (^)(void))arg1;
@end
