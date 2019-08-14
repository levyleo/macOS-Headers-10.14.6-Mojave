//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface _ICNFMCMimeEnrichedReader : NSObject
{
    CDStruct_2ada2998 _inputBuffer;
    long long _currentIndex;
    long long _inputLength;
    unsigned int _noFillLevel:30;
    unsigned int _eatOneNewline:1;
    unsigned int _insideComment:1;
    long long _lastQuoteLevel;
    NSMutableArray *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    BOOL outputShouldBeHTML;
}

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)convertEnrichedString:(id)arg1 intoPlainOutputString:(id)arg2;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (long long)readTokenInto:(id *)arg1;
- (id)copyCommand;
- (id)copyNextTokenWithDelimiters:(id)arg1;
- (id)currentFont;
- (void)parseParameterString:(id)arg1;
- (void)endCommand:(id)arg1;
- (void)beginCommand:(id)arg1;
- (void)setupFontStackEntry:(id)arg1;
- (void)handleNoParameterCommand:(const CDStruct_8e792ae2 *)arg1;
- (void)closeUpQuoting;
- (void)fixConsecutiveSpaces:(id)arg1;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)appendStringToBuffer:(id)arg1;
- (id)init;
- (id)parenthesesSet;
- (id)punctuationSet;

@end
