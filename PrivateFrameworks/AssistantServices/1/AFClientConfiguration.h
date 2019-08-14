//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isDeviceInSetupFlow;
    BOOL _isDeviceInCarDNDMode;
    BOOL _isDeviceInStarkMode;
    BOOL _isAccessibilityVoiceOverTouchEnabled;
    BOOL _isAccessibilityVibrationDisabled;
    float _outputVolume;
    long long _deviceRingerSwitchState;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest; // @synthesize twoShotAudioPlaybackRequest=_twoShotAudioPlaybackRequest;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest; // @synthesize tapToSiriAudioPlaybackRequest=_tapToSiriAudioPlaybackRequest;
@property(readonly, nonatomic) float outputVolume; // @synthesize outputVolume=_outputVolume;
@property(readonly, nonatomic) BOOL isAccessibilityVibrationDisabled; // @synthesize isAccessibilityVibrationDisabled=_isAccessibilityVibrationDisabled;
@property(readonly, nonatomic) BOOL isAccessibilityVoiceOverTouchEnabled; // @synthesize isAccessibilityVoiceOverTouchEnabled=_isAccessibilityVoiceOverTouchEnabled;
@property(readonly, nonatomic) BOOL isDeviceInStarkMode; // @synthesize isDeviceInStarkMode=_isDeviceInStarkMode;
@property(readonly, nonatomic) BOOL isDeviceInCarDNDMode; // @synthesize isDeviceInCarDNDMode=_isDeviceInCarDNDMode;
@property(readonly, nonatomic) BOOL isDeviceInSetupFlow; // @synthesize isDeviceInSetupFlow=_isDeviceInSetupFlow;
@property(readonly, nonatomic) long long deviceRingerSwitchState; // @synthesize deviceRingerSwitchState=_deviceRingerSwitchState;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithDeviceRingerSwitchState:(long long)arg1 isDeviceInSetupFlow:(BOOL)arg2 isDeviceInCarDNDMode:(BOOL)arg3 isDeviceInStarkMode:(BOOL)arg4 isAccessibilityVoiceOverTouchEnabled:(BOOL)arg5 isAccessibilityVibrationDisabled:(BOOL)arg6 outputVolume:(float)arg7 tapToSiriAudioPlaybackRequest:(id)arg8 twoShotAudioPlaybackRequest:(id)arg9;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
