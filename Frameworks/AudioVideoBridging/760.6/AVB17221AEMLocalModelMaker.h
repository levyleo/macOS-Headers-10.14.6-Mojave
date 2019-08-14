//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMModelMaker.h>

@interface AVB17221AEMLocalModelMaker : AVB17221AEMModelMaker
{
    unsigned short _inputClusterCount;
    unsigned short _outputClusterCount;
}

+ (id)localEntityModelForEntityModel:(id)arg1 onInterface:(id)arg2 usingRemoteMACAddress:(id)arg3 generatedControllerMappings:(id *)arg4;
+ (void)setLocalModelMakerModelName:(id)arg1;
- (void)dealloc;
- (BOOL)processClockSource:(id)arg1 inConfiguration:(id)arg2 withOldNewMappings:(id)arg3 ofEntityModel:(id)arg4 withLocalToRemoteMappings:(id)arg5 andRemoteToLocalMappings:(id)arg6;
- (BOOL)processVideoUnit:(id)arg1 inConfiguration:(id)arg2 withOldNewMappings:(id)arg3 ofEntityModel:(id)arg4 withLocalToRemoteMappings:(id)arg5 andRemoteToLocalMappings:(id)arg6;
- (BOOL)processAudioUnit:(id)arg1 inConfiguration:(id)arg2 withOldNewMappings:(id)arg3 ofEntityModel:(id)arg4 withLocalToRemoteMappings:(id)arg5 andRemoteToLocalMappings:(id)arg6;
- (void)removeMappingForObject:(id)arg1 fromOldNewMappings:(id)arg2;
- (void)localToRemoteMappings:(id)arg1 andRemoteToLocalMappings:(id)arg2 fromOldNewMappings:(id)arg3;
- (id)streamForStream:(id)arg1 hasAudio:(BOOL)arg2 hasVideo:(BOOL)arg3;
- (id)videoClusterForVideoCluster:(id)arg1;
- (id)audioClusterForAudioCluster:(id)arg1;
- (id)outputStreamPortForInputStreamPortAudio:(id)arg1 addToMappings:(id)arg2;
- (id)inputStreamPortForOutputStreamPortAudio:(id)arg1 addToMappings:(id)arg2;
- (id)sensorUnitForSensorUnit:(id)arg1 addToMappings:(id)arg2;
- (id)videoUnitForVideoUnit:(id)arg1 addToMappings:(id)arg2;
- (id)audioUnitForAudioUnit:(id)arg1 addToMappings:(id)arg2;
- (id)localEntityModelForEntityModel:(id)arg1 onInterface:(id)arg2 usingRemoteMACAddress:(id)arg3 generatedControllerMappings:(id *)arg4;

@end
