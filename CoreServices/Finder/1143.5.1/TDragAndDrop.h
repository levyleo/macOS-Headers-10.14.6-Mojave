//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TDragAndDrop : NSObject
{
}

+ (_Bool)isDragOverMenuBar:(struct CGPoint)arg1;
+ (void)endDrop;
+ (unsigned long long)updateDropOnNode:(const struct TFENode *)arg1 withDraggingInfo:(id)arg2 actionsAllowed:(unsigned int)arg3 showDisallowedCursor:(_Bool)arg4;
+ (unsigned long long)updateDropOnTarget:(const struct TFENode *)arg1 altTarget:(const struct TFENode *)arg2 withDraggingInfo:(id)arg3 outDropTargetAcceptsDrop:(_Bool *)arg4;
+ (unsigned long long)beginDropWithDraggingInfo:(id)arg1;
+ (struct TDropOperation *)currentDropOperation;
+ (_Bool)isDropInProgress;

@end
