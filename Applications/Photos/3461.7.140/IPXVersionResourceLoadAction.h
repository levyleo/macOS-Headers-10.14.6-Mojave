//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface IPXVersionResourceLoadAction : RDModelAction
{
    NSObject<OS_dispatch_semaphore> *_interruptSemaphore;
}

@property(retain) NSObject<OS_dispatch_semaphore> *interruptSemaphore; // @synthesize interruptSemaphore=_interruptSemaphore;
- (void).cxx_destruct;
- (int)performAction;
- (BOOL)interruptSupported;
- (void)interrupt;

@end
