//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIBarContentView.h>

@class NSLayoutConstraint, NSMapTable, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView : _UIBarContentView
{
    _UIButtonBar *_buttonBar;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
    BOOL _hitTestingExtensionsAreValid;
    struct NSDirectionalEdgeInsets _padding;
}

@property(nonatomic) struct NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_appearanceChanged;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)barMetrics;
- (double)defaultTextPadding;
- (double)defaultEdgeSpacing;
- (double)absorptionForItem:(id)arg1;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (void)reloadWithItems:(id)arg1;
- (void)updateContent;
- (void)updateConstraints;
- (id)_newButtonBarWithItems:(id)arg1;
- (void)_updateButtonBarConstraintConstantsForItems:(id)arg1 inView:(id)arg2;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;

@end

