//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CMDrawableStyle, CMTableGridInfo, OADOrientedBounds, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper
{
    OADTable *mTable;
    CMDrawableStyle *mStyle;
    CMTableGridInfo *mGrid;
    OADOrientedBounds *mBounds;
}

- (void).cxx_destruct;
- (unsigned long long)rowCount;
- (id)tableBorderStyle;
- (id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2;
- (id)defaultCellFillWithState:(id)arg1;
- (float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2;
- (id)grid;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (id)cellStyle;
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;
- (void)mapTablePropertiesWithState:(id)arg1;

@end
