//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class GridCellView, GridView, NSArray, NSDictionary, NSDraggingSession;
@protocol NSDraggingInfo, NSPasteboardWriting;

@protocol GridViewDataSource <NSObject>
- (unsigned long long)currentDraggedCellIndexForGridView:(GridView *)arg1;
- (void)gridView:(GridView *)arg1 willRecycleView:(GridCellView *)arg2;
- (void)gridView:(GridView *)arg1 prepareView:(GridCellView *)arg2 forCellAtIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfCellsInGridView:(GridView *)arg1;

@optional
- (void)gridViewDidCompleteCellReorderingAfterDrag:(GridView *)arg1;
- (void)gridView:(GridView *)arg1 didCompleteDrop:(id <NSDraggingInfo>)arg2 index:(unsigned long long)arg3 exchangedIndexes:(NSDictionary *)arg4;
- (BOOL)gridView:(GridView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(unsigned long long)arg3 exchangedIndexes:(NSDictionary *)arg4;
- (BOOL)gridView:(GridView *)arg1 performHoverOnCellAtIndex:(unsigned long long)arg2;
- (BOOL)gridView:(GridView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 onCellAtIndex:(unsigned long long)arg3;
- (unsigned long long)gridView:(GridView *)arg1 dragOverBehaviorsForCellAtIndex:(unsigned long long)arg2;
- (BOOL)gridView:(GridView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(unsigned long long)arg3;
- (unsigned long long)gridView:(GridView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndex:(unsigned long long *)arg3;
- (void)gridView:(GridView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 proposedOperation:(unsigned long long *)arg4;
- (void)gridView:(GridView *)arg1 draggingSession:(NSDraggingSession *)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)gridView:(GridView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (id <NSPasteboardWriting>)gridView:(GridView *)arg1 pasteboardWriterForCellAtIndex:(unsigned long long)arg2;
- (NSArray *)draggingItemClassesForGridView:(GridView *)arg1;
- (BOOL)gridView:(GridView *)arg1 canDragCellAtIndex:(unsigned long long)arg2;
@end
