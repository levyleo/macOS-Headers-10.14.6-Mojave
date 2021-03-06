//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream, NSMutableArray;
@protocol DKDAAPParserDelegate;

@interface DKDAAPParser : NSObject
{
    BOOL _canceled;
    id <DKDAAPParserDelegate> _delegate;
    long long _state;
    NSInputStream *_inputStream;
    NSMutableArray *_containerStack;
}

@property(nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <DKDAAPParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_verifyExpectedEOF;
- (void)_callDelegateDidEndContainerCode:(unsigned int)arg1;
- (void)_callDelegateDidParseDataCode:(unsigned int)arg1 bytes:(char *)arg2 contentLength:(unsigned int)arg3;
- (void)_callDelegateDidStartContainerCode:(unsigned int)arg1 contentLength:(unsigned int)arg2;
- (BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)arg1;
- (BOOL)_callDelegateShouldParseCode:(unsigned int)arg1;
- (void)_callDelegateDidFailWithError:(id)arg1;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidFinish;
- (void)_callDelegateDidStart;
- (void)cancel;
- (void)parse;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;

@end

