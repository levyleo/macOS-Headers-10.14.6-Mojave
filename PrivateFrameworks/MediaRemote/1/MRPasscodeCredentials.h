//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRPasscodeCredentials : NSObject
{
    unsigned int _type;
    unsigned long long _characterCount;
    NSString *_passcode;
}

+ (id)_randomPasscode;
+ (id)standardCredentials;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) unsigned long long characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
