//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstFaceConfigEntry : NSObject
{
    int faceId;
    struct CGRect faceRect;
    int framesSinceLast;
}

@property int framesSinceLast; // @synthesize framesSinceLast;
@property struct CGRect faceRect; // @synthesize faceRect;
@property int faceId; // @synthesize faceId;
- (id)initWithRect:(struct CGRect)arg1 withFaceId:(int)arg2;

@end
