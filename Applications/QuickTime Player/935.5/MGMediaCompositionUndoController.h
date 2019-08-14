//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGMediaComposition, NSUndoManager;

@interface MGMediaCompositionUndoController : NSObject
{
    MGMediaComposition *_mediaComposition;
    NSUndoManager *_undoManager;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)removeMediaClipObserver:(id)arg1;
- (void)addMediaClipObserver:(id)arg1;
@property(retain, nonatomic) MGMediaComposition *mediaComposition;
- (id)initWithUndoManager:(id)arg1;

@end
