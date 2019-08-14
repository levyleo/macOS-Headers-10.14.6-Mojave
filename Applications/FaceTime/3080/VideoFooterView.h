//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSMutableArray, NSStackView, RoundButton, RoundButtonContainer;

@interface VideoFooterView : NSView
{
    RoundButton *_declineButton;
    RoundButton *_endButton;
    RoundButton *_muteButton;
    RoundButton *_callBackButton;
    RoundButton *_cancelButton;
    RoundButton *_callPromptCallButton;
    RoundButton *_messageButton;
    RoundButton *_muteVideoButton;
    RoundButton *_addPeopleButton;
    RoundButton *_sideBarButton;
    RoundButton *_fullScreenButton;
    NSView *_leftmostControl;
    NSView *_rightmostControl;
    NSArray *_allButtons;
    RoundButtonContainer *_declineContainer;
    RoundButtonContainer *_endContainer;
    RoundButtonContainer *_muteContainer;
    RoundButtonContainer *_callBackContainer;
    RoundButtonContainer *_cancelContainer;
    RoundButtonContainer *_callPromptCallContainer;
    RoundButtonContainer *_messageContainer;
    RoundButtonContainer *_muteVideoContainer;
    RoundButtonContainer *_addPeopleContainer;
    RoundButtonContainer *_sideBarContainer;
    RoundButtonContainer *_fullScreenContainer;
    NSArray *_allContainers;
    NSMutableArray *_buttonConstraints;
    NSStackView *_stackView;
}

+ (id)axUnmuteString;
+ (id)axMuteString;
@property(readonly, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSMutableArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSArray *allContainers; // @synthesize allContainers=_allContainers;
@property(retain, nonatomic) RoundButtonContainer *fullScreenContainer; // @synthesize fullScreenContainer=_fullScreenContainer;
@property(retain, nonatomic) RoundButtonContainer *sideBarContainer; // @synthesize sideBarContainer=_sideBarContainer;
@property(retain, nonatomic) RoundButtonContainer *addPeopleContainer; // @synthesize addPeopleContainer=_addPeopleContainer;
@property(retain, nonatomic) RoundButtonContainer *muteVideoContainer; // @synthesize muteVideoContainer=_muteVideoContainer;
@property(retain, nonatomic) RoundButtonContainer *messageContainer; // @synthesize messageContainer=_messageContainer;
@property(retain, nonatomic) RoundButtonContainer *callPromptCallContainer; // @synthesize callPromptCallContainer=_callPromptCallContainer;
@property(retain, nonatomic) RoundButtonContainer *cancelContainer; // @synthesize cancelContainer=_cancelContainer;
@property(retain, nonatomic) RoundButtonContainer *callBackContainer; // @synthesize callBackContainer=_callBackContainer;
@property(retain, nonatomic) RoundButtonContainer *muteContainer; // @synthesize muteContainer=_muteContainer;
@property(retain, nonatomic) RoundButtonContainer *endContainer; // @synthesize endContainer=_endContainer;
@property(retain, nonatomic) RoundButtonContainer *declineContainer; // @synthesize declineContainer=_declineContainer;
@property(retain, nonatomic) NSArray *allButtons; // @synthesize allButtons=_allButtons;
@property(retain, nonatomic) NSView *rightmostControl; // @synthesize rightmostControl=_rightmostControl;
@property(retain, nonatomic) NSView *leftmostControl; // @synthesize leftmostControl=_leftmostControl;
@property(retain, nonatomic) RoundButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) RoundButton *sideBarButton; // @synthesize sideBarButton=_sideBarButton;
@property(retain, nonatomic) RoundButton *addPeopleButton; // @synthesize addPeopleButton=_addPeopleButton;
@property(retain, nonatomic) RoundButton *muteVideoButton; // @synthesize muteVideoButton=_muteVideoButton;
@property(retain, nonatomic) RoundButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) RoundButton *callPromptCallButton; // @synthesize callPromptCallButton=_callPromptCallButton;
@property(retain, nonatomic) RoundButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) RoundButton *callBackButton; // @synthesize callBackButton=_callBackButton;
@property(retain, nonatomic) RoundButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) RoundButton *endButton; // @synthesize endButton=_endButton;
@property(retain, nonatomic) RoundButton *declineButton; // @synthesize declineButton=_declineButton;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_commonInit;

@end
