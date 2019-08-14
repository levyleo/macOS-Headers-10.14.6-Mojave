//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSCollectionViewSectionHeaderView-Protocol.h"
#import "NSCollectionViewSectionHeaderViewPrivate-Protocol.h"

@class NSBox, NSButton, NSString, NSTextField;

@interface PVSidebarCollectionViewHeader : NSView <NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate>
{
    NSButton *_secretSectionCollapseButton;
    NSBox *_topBorderView;
    NSBox *_bottomBorderView;
    NSTextField *_titleLabel;
    BOOL _floating;
    BOOL _collapsed;
    BOOL _showsTopSeparator;
    NSString *_title;
    CDUnknownBlockType _collapseButtonPressedBlock;
}

@property(copy) CDUnknownBlockType collapseButtonPressedBlock; // @synthesize collapseButtonPressedBlock=_collapseButtonPressedBlock;
@property(nonatomic) BOOL showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
- (void).cxx_destruct;
- (id)headerBackgroundColor;
- (id)floatingHeaderBackgroundColor;
- (void)updateBarVisibility;
- (void)updateBackgroundColor;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (void)layout;
- (void)_windowChangedKeyState;
@property(getter=isFloating) BOOL floating; // @synthesize floating=_floating;
- (void)collapseAction:(id)arg1;
@property(copy) NSString *title; // @synthesize title=_title;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)awakeFromNib;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property __weak NSButton *sectionCollapseButton;
@property(readonly) Class superclass;

@end
