//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

__attribute__((visibility("hidden")))
@interface SCRWorkspaceApplication : NSApplication
{
    BOOL _isRunLoopActive;
}

@property(nonatomic) BOOL isRunLoopActive; // @synthesize isRunLoopActive=_isRunLoopActive;
- (void)_stopRunLoop;
- (void)terminate:(id)arg1;
- (void)stop:(id)arg1;
- (void)run;

@end
