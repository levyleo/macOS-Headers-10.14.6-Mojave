//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSPathControlDelegate-Protocol.h"

@class NSEvent, NSImage, NSPathComponentCell, TPathControl;
@protocol NSDraggingInfo;

@protocol TPathControlDelegate <NSPathControlDelegate>
- (const struct TFENode *)nodeForCell:(NSPathComponentCell *)arg1;
- (void)pathBar:(TPathControl *)arg1 dragImage:(NSImage *)arg2 offset:(struct CGSize)arg3 event:(NSEvent *)arg4;
- (void)pathBar:(TPathControl *)arg1 draggingEnded:(id <NSDraggingInfo>)arg2;
- (void)pathBar:(TPathControl *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (unsigned long long)pathBar:(TPathControl *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
@end

