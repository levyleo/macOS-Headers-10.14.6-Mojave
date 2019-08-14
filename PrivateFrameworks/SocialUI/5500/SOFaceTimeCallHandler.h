//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SOFaceTimeCallHandlerDelegate;

@interface SOFaceTimeCallHandler : NSObject
{
    id <SOFaceTimeCallHandlerDelegate> _delegate;
    NSTimer *_faceTimeMultiwayCallTimer;
}

@property(nonatomic) __weak NSTimer *faceTimeMultiwayCallTimer; // @synthesize faceTimeMultiwayCallTimer=_faceTimeMultiwayCallTimer;
@property(nonatomic) __weak id <SOFaceTimeCallHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateIfNeeded;
@property(readonly, nonatomic) BOOL hasActiveFaceTimeCall; // @dynamic hasActiveFaceTimeCall;
- (void)_handleMultiwayConversationChanged:(id)arg1;
- (BOOL)_conversationStateDidChange;
- (void)infoButtonClicked;
- (void)joinCall;
- (void)_stopFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimerIfNeeded;
- (void)_startFaceTimeMultiwayCallTimer;
- (BOOL)_shouldStartFaceTimeMultiwayCallTimer;
- (void)_faceTimeMultiwayCallTimerDidFire:(id)arg1;
- (void)registerForEventNotifications;
- (id)chat;
- (void)dealloc;
- (id)init;

@end
