//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioPasscode/AUPasscodeCodecCapability.h>

#import <AudioPasscode/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding>
{
    NSArray *_algorithmVersionNumbers;
    struct _NSRange _frameSizeRange;
    struct _NSRange _numFrameRepeatRange;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *algorithmVersionNumbers; // @synthesize algorithmVersionNumbers=_algorithmVersionNumbers;
@property(readonly, nonatomic) struct _NSRange numFrameRepeatRange; // @synthesize numFrameRepeatRange=_numFrameRepeatRange;
@property(readonly, nonatomic) struct _NSRange frameSizeRange; // @synthesize frameSizeRange=_frameSizeRange;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
