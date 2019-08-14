//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSMutableArray, NSString;

@interface InstallableOptionsView : NSStackView
{
    struct ppd_file_s *_ppd;
    NSMutableArray *_ppdKeyArray;
    NSMutableArray *_ppdUIArray;
    BOOL _options_changed;
    BOOL _binaryOK;
    NSString *_ppdPath;
}

@property BOOL binaryOK; // @synthesize binaryOK=_binaryOK;
@property(retain) NSString *ppdPath; // @synthesize ppdPath=_ppdPath;
- (void)updateConflicts:(id)arg1;
- (void)updatePopupItem:(id)arg1 atIndex:(long long)arg2 forKey:(id)arg3;
- (void)updateCheckbox:(id)arg1 forKey:(id)arg2;
- (id)toolTipForOption:(id)arg1 choice:(id)arg2;
- (const char *)getCurrentValue:(const char *)arg1;
- (void)createUIContols;
- (id)ppdWithChanges;
- (void)applyChanges:(id)arg1;
- (void)initWithPPD:(id)arg1;
@property(readonly) BOOL hasInstallableOptions; // @dynamic hasInstallableOptions;
- (void)dealloc;

@end
