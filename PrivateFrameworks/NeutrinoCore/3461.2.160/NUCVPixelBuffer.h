//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUCVPixelBuffer : NSObject
{
    struct __CVBuffer *_CVPixelBuffer;
}

@property(readonly, nonatomic) struct __CVBuffer *CVPixelBuffer; // @synthesize CVPixelBuffer=_CVPixelBuffer;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)init;

@end
