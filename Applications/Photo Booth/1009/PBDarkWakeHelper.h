//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PBDarkWakeHelperDelegate;

@interface PBDarkWakeHelper : NSObject
{
    id <PBDarkWakeHelperDelegate> _delegate;
    struct __CFRunLoopSource *_ioRunLoopSource;
}

+ (BOOL)screenShieldIsRaised;
@property(nonatomic) struct __CFRunLoopSource *ioRunLoopSource; // @synthesize ioRunLoopSource=_ioRunLoopSource;
@property __weak id <PBDarkWakeHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
