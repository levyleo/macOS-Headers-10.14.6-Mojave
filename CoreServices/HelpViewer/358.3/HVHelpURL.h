//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSDictionary, NSString;

@interface HVHelpURL : NSURL
{
    NSString *_unescapedString;
    NSString *_command;
    NSDictionary *_arguments;
    unsigned int _CFStringEncodingUsed;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (id)description;
- (void)_parseFullURL;
- (id)_parseArgumentsFromString:(id)arg1;
- (void)_parseArguments;
- (void)_parseCommand;
- (void)_setArguments:(id)arg1;
- (void)_setCommand:(id)arg1;
@property(readonly) __weak NSDictionary *arguments; // @dynamic arguments;
@property(readonly) __weak NSString *mainArgument; // @dynamic mainArgument;
@property(readonly) __weak NSString *command; // @dynamic command;
- (unsigned long long)type;
- (void)setUnescapedString:(id)arg1;
- (id)unescapedString;
- (id)initWithString:(id)arg1;

@end
