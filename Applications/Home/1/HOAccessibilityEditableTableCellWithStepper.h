//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>

#import "AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h"
#import "HUDisableableCellProtocol-Protocol.h"
#import "HUStepperCellProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSNumber, NSString;
@protocol HUStepperCellDelegate;

@interface HOAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol>
{
    BOOL _disabled;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepperValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
}

@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate; // @synthesize stepperCellDelegate=_stepperCellDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *stepperValue; // @synthesize stepperValue=_stepperValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (CDUnknownBlockType)textFieldValueBlock;
- (CDUnknownBlockType)textFieldValueSetBlock;
- (id)stringValueForStepperCell:(id)arg1;
- (double)maximumValueForStepperCell:(id)arg1;
- (double)minimumValueForStepperCell:(id)arg1;
- (double)stepValueForStepperCell:(id)arg1;
- (void)stepperCell:(id)arg1 setValue:(double)arg2;
- (double)valueForStepperCell:(id)arg1;
- (void)_update;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

