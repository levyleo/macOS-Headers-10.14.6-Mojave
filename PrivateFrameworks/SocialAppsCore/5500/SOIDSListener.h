//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOIDSListener : NSObject
{
    long long _listenCount;
    NSString *_listenerID;
}

+ (id)sharedListener;
@property(readonly) NSString *listenerID; // @synthesize listenerID=_listenerID;
- (void).cxx_destruct;
- (id)init;
- (long long)queryKnownIDStatusForDestinations:(id)arg1 service:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)endListening;
- (void)beginListening;

@end

