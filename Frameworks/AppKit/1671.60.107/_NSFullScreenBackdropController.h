//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _NSFullScreenSpace;

__attribute__((visibility("hidden")))
@interface _NSFullScreenBackdropController : NSObject
{
    _NSFullScreenSpace *_space;
    NSMutableArray *_backgroundWindows;
}

@property(nonatomic) _NSFullScreenSpace *space; // @synthesize space=_space;
- (void)removeBackgroundWindows;
- (void)updateBackgroundWindows;
- (id)_createBackgroundWindowOnScreen:(id)arg1;
- (id)backgroundWindowIDs;
- (void)dealloc;

@end
