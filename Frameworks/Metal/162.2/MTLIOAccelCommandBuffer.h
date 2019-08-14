//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/_MTLCommandBuffer.h>

@class MTLIOAccelDevice, NSMutableSet, NSObject;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer
{
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLIOAccelCommandBufferStorage *_storage;
    unsigned long long *_submitToHardwareTimeStampPointer;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) struct MTLIOAccelCommandBufferStorage *commandBufferStorage; // @synthesize commandBufferStorage=_storage;
- (void)doCorruptCBSPI:(int)arg1;
- (void)_encodePurgedResources;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)commitEncoder;
- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)kernelCommandCollectTimeStamp;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)commitAndReset;
- (void)commit;
- (void)validate;
- (void)endCurrentSegment;
- (void)beginSegment:(void *)arg1;
- (void)growSegmentList;
- (void)setCurrentSegmentListPointer:(void *)arg1;
@property(readonly) struct MTLIOAccelCommandBufferResourceInfo *commandBufferResourceInfo;
- (void)getSegmentListPointerStart:(void **)arg1 current:(void **)arg2 end:(void **)arg3;
- (struct IOAccelSegmentListHeader *)getSegmentListHeader;
@property(readonly) struct IOAccelResourceList *ioAccelResourceList;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void *)arg1;
- (void)getCurrentKernelCommandBufferPointer:(void **)arg1 end:(void **)arg2;
- (void)getCurrentKernelCommandBufferStart:(void **)arg1 current:(void **)arg2 end:(void **)arg3;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;

@end
