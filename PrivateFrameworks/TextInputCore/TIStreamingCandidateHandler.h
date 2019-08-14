//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TICandidateHandler-Protocol.h>

@class TICandidateRequestToken, TIKeyboardState;
@protocol TIClientProxy, TIKeyboardInputManagerLogging;

@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler>
{
    unsigned long long _status;
    BOOL _didCallHandler;
    id <TIClientProxy> _clientProxy;
    TICandidateRequestToken *_requestToken;
    CDUnknownBlockType _candidateHandler;
    TIKeyboardState *_keyboardState;
    id <TIKeyboardInputManagerLogging> _logger;
}

@property(nonatomic) __weak id <TIKeyboardInputManagerLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(readonly, copy, nonatomic) CDUnknownBlockType candidateHandler; // @synthesize candidateHandler=_candidateHandler;
@property(readonly, nonatomic) TICandidateRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, nonatomic) id <TIClientProxy> clientProxy; // @synthesize clientProxy=_clientProxy;
- (void).cxx_destruct;
- (void)close;
- (void)pushCandidates:(id)arg1;
- (void)open;
@property(readonly, nonatomic) BOOL asynchronous;
- (void)dealloc;
- (id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 candidateHandler:(CDUnknownBlockType)arg5;

@end
