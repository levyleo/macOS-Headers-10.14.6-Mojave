//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSWPDragItem.h>

@interface TSWPURLDragItem : TSWPDragItem
{
    struct CGPoint _canvasDragPoint;
    struct _NSRange _range;
}

@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct CGPoint canvasDragPoint; // @synthesize canvasDragPoint=_canvasDragPoint;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(struct CGRect)arg4;
- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect)arg2 canvasDragPoint:(struct CGPoint)arg3 range:(struct _NSRange)arg4;

@end
