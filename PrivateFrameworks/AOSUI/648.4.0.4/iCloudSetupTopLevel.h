//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CastlePlugin, MM_Account, NSButton, NSProgressIndicator, NSView, iCloudSetupTopLevelViews;

@interface iCloudSetupTopLevel : NSObject
{
    MM_Account *_account;
    NSProgressIndicator *_spinner;
    unsigned long long _currentState;
    CastlePlugin *_plugin;
    BOOL _nibLoadingCompleted;
    iCloudSetupTopLevelViews *_topLevelViews;
    NSView *_setupViewHolder;
    NSView *_setupView;
    NSButton *_buttonOne;
    NSButton *_buttonTwo;
}

@property(retain, nonatomic) NSButton *buttonTwo; // @synthesize buttonTwo=_buttonTwo;
@property(retain, nonatomic) NSButton *buttonOne; // @synthesize buttonOne=_buttonOne;
@property(retain, nonatomic) NSView *setupView; // @synthesize setupView=_setupView;
@property(retain, nonatomic) NSView *setupViewHolder; // @synthesize setupViewHolder=_setupViewHolder;
@property BOOL nibLoadingCompleted; // @synthesize nibLoadingCompleted=_nibLoadingCompleted;
@property(retain) iCloudSetupTopLevelViews *topLevelViews; // @synthesize topLevelViews=_topLevelViews;
@property(retain) MM_Account *account; // @synthesize account=_account;
@property CastlePlugin *plugin; // @synthesize plugin=_plugin;
- (void)reset;
- (BOOL)sendQuit;
- (BOOL)_quitWithSendMode:(int)arg1 timeout:(long long)arg2;
- (void)buttonTwoPressed:(id)arg1;
- (void)buttonOnePressed:(id)arg1;
- (id)doNext;
- (id)determineSetup:(id)arg1;
- (void)appToFront;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPlugin:(id)arg2;
- (id)init;

@end
