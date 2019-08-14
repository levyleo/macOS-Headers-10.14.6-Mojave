//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MapsDebugTableSection, NSMutableArray, NSNib, NSString, NSTableCellView;

__attribute__((visibility("hidden")))
@interface MapsDebugTableRow : NSObject
{
    NSNib *_nib;
    NSMutableArray *_controlsToClearTargetsFromOnReuse;
    MapsDebugTableSection *_section;
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _prepareContentBlock;
    CDUnknownBlockType _selectionAction;
    NSTableCellView *_currentCell;
}

@property(nonatomic) __weak NSTableCellView *currentCell; // @synthesize currentCell=_currentCell;
@property(copy, nonatomic) CDUnknownBlockType selectionAction; // @synthesize selectionAction=_selectionAction;
@property(copy, nonatomic) CDUnknownBlockType prepareContentBlock; // @synthesize prepareContentBlock=_prepareContentBlock;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak MapsDebugTableSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)configureCell:(id)arg1;
- (id)titleSubtitleSingleLineAttributedString;
- (id)titleSubtitleAttributedString;
- (id)_titleSubtitleAttributedStringWithNewlineSeparator:(BOOL)arg1;
- (BOOL)usesNib;
- (id)nibName;
- (id)cellForTableView:(id)arg1;
- (void)_clearAllControlTargetsForReuse;
- (void)addControlThatNeedsClearingTargetOnReuse:(id)arg1;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)invalidate;
- (void)dealloc;

@end
