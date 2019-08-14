//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@interface UserPicturePickerGrid : NSMatrix
{
    long long _cellsPerRow;
    long long _numberOfImages;
}

- (long long)arrowKeyDown:(unsigned short)arg1 fromSelectedItem:(long long)arg2;
- (void)highlightCell:(BOOL)arg1 atPosition:(long long)arg2;
- (long long)numberOfImages;
- (void)setUpWithImages:(id)arg1;
- (id)initWithImages:(id)arg1;
- (void)_layoutCells:(long long)arg1;

@end
