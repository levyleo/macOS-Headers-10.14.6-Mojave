//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBulkRenameFormatterController.h"

@class NSPopUpButton, NSTextField;

@interface TBulkRenameAddTextController : TBulkRenameFormatterController
{
    NSPopUpButton *_whereBtn;
    NSTextField *_textToAddFld;
    struct TNotificationCenterObserver _textToAddTextDidChangeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)reformat:(id)arg1 row:(unsigned long long)arg2;
- (void)whereChanged:(id)arg1;
- (_Bool)resetCounterForEachFile;
- (_Bool)allowRename;
- (id)displayName;
- (int)formatterType;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end
