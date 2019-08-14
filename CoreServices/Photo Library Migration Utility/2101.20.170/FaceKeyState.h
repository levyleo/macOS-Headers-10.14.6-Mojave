//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSArray, NSMutableArray;

@interface FaceKeyState : NSObject
{
    NSArray *_facePhotoKeys;
    vector_4b7ceedc *_faceKeys;
    NSMutableArray *_faceNameState;
    struct vector<FaceCorrelationState, std::__1::allocator<FaceCorrelationState>> *_faceCorrelationState;
    struct vector<FaceFeatureState, std::__1::allocator<FaceFeatureState>> *_faceFeatureState;
    struct vector<FaceExternalState, std::__1::allocator<FaceExternalState>> *_faceExternalState;
    struct vector<DetectedFaceState, std::__1::allocator<DetectedFaceState>> *_detectedFaceState;
}

- (CDStruct_9cfe5aca *)detectedFaceEntryAtIndex:(long long)arg1;
- (long long)detectedFaceEntryCount;
- (void)addDetectedFaceEntry:(CDStruct_9cfe5aca *)arg1;
- (CDStruct_1b4a36b4 *)faceExternalEntryAtIndex:(long long)arg1;
- (long long)faceExternalEntryCount;
- (void)addFaceExternalEntry:(CDStruct_1b4a36b4 *)arg1;
- (CDStruct_f601cb6a *)faceFeatureEntryAtIndex:(int)arg1;
- (long long)faceFeatureEntryCount;
- (void)addFaceFeatureEntry:(CDStruct_f601cb6a *)arg1;
- (CDStruct_efb988e1 *)faceCorrelationEntryAtIndex:(long long)arg1;
- (long long)faceCorrelationEntryCount;
- (void)addFaceCorrelationEntry:(CDStruct_efb988e1 *)arg1;
- (id)faceNameEntryAtIndex:(long long)arg1;
- (long long)faceNameEntryCount;
- (void)addFaceNameEntry:(id)arg1;
- (void)setFaceKeys:(vector_4b7ceedc *)arg1;
- (vector_4b7ceedc *)faceKeys;
- (void)setFacePhotoKeys:(id)arg1;
- (id)facePhotoKeys;
- (void)dealloc;
- (id)init;

@end
