//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIPickerTableViewCell.h>

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell
{
    UILabel *_titleLabel;
    BOOL _isAttributed;
    BOOL _usesModernStyle;
    UIColor *_textColor;
}

@property(readonly, nonatomic) BOOL _isAttributed; // @synthesize _isAttributed;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) NSString *title;
- (BOOL)_canBeReusedInPickerView;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4 forceTextAlignmentCentered:(BOOL)arg5;

@end

