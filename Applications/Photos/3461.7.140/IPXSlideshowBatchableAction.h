//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFAction.h>

@class IPXSlideshow, NSDictionary, NSString;

@interface IPXSlideshowBatchableAction : PFAction
{
    NSString *_name;
    IPXSlideshow *_slideshow;
    CDUnknownBlockType _block;
    CDUnknownBlockType _prologue;
    CDUnknownBlockType _epilogue;
    NSDictionary *_slideshowDataForUndo;
    NSDictionary *_slideshowDataForRedo;
}

- (void).cxx_destruct;
- (id)progressMessageForUndo;
- (id)progressMessageForExecution;
- (int)performRedo;
- (int)performUndo;
- (int)performAction;
- (id)initWithName:(id)arg1 slideshow:(id)arg2 block:(CDUnknownBlockType)arg3 undoRedoPrologue:(CDUnknownBlockType)arg4 undoRedoEpilogue:(CDUnknownBlockType)arg5;

@end
