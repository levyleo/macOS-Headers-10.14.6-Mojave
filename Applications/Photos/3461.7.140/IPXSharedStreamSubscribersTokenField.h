//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTokenField.h>

@interface IPXSharedStreamSubscribersTokenField : NSTokenField
{
    BOOL _canEdit;
}

+ (Class)cellClass;
@property BOOL canEdit; // @synthesize canEdit=_canEdit;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (BOOL)streamOwnerAffected:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;

@end
