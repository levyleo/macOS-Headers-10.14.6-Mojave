//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/ASDControl.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDLevelControl : ASDControl
{
    float _decibelValue;
    float _minimumDecibelValue;
    float _maximumDecibelValue;
    NSObject<OS_dispatch_queue> *_valueQueue;
    BOOL _settable;
}

+ (id)volumeControlWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;
@property(readonly, nonatomic, getter=isSettable) BOOL settable; // @synthesize settable=_settable;
- (void).cxx_destruct;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (BOOL)changeScalarValue:(float)arg1;
- (BOOL)changeDecibelValue:(float)arg1;
@property(nonatomic) float scalarValue; // @dynamic scalarValue;
@property(nonatomic) float decibelValue; // @dynamic decibelValue;
@property(nonatomic) float minimumDecibelValue; // @dynamic minimumDecibelValue;
@property(nonatomic) float maximumDecibelValue; // @dynamic maximumDecibelValue;
- (float)decibelFromScalar:(float)arg1;
- (float)scalarFromDecibel:(float)arg1;
- (float)_decibelFromScalar:(float)arg1;
- (float)_scalarFromDecibel:(float)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (unsigned int)baseClass;
- (id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned int)arg8;
- (id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned int)arg5 inScope:(unsigned int)arg6 withPlugin:(id)arg7;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithPlugin:(id)arg1;

@end
