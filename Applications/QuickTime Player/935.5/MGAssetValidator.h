//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface MGAssetValidator : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)resume;
- (void)suspend;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end
