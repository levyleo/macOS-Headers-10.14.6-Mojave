//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapperBase : NSObject
{
    struct AccessibilityObject *m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)arg1;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)ariaLandmarkRoleDescription;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (struct CGPath *)convertPathToScreenSpace:(struct Path *)arg1;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilitySpeechHint;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilityTitle;
- (BOOL)fileUploadButtonReturnsValueInTitle;
- (BOOL)titleTagShouldBeUsedInDescriptionField;
- (struct AccessibilityObject *)accessibilityObject;
- (id)attachmentView;
- (BOOL)updateObjectBackingStore;
- (void)detach;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;

@end
