//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGMovieExportSessionHelper-Protocol.h"

@class AVAssetExportSession, MGMediaComposition, NSProgress, NSString, NSURL;
@protocol MGMovieExportSessionHelperDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MGAVFoundationExportSession : NSObject <MGMovieExportSessionHelper>
{
    AVAssetExportSession *_avSession;
    id <MGMovieExportSessionHelperDelegate> _delegate;
    MGMediaComposition *_mediaComposition;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_queue> *_exportProgressTimerQueue;
    NSObject<OS_dispatch_source> *_exportProgressTimer;
    BOOL _isExtensionHidden;
    NSProgress *_progress;
}

- (void).cxx_destruct;
- (void)updateProgress;
- (void)cancel;
- (void)createExportSessionwithExportParameters:(id)arg1;
- (id)initWithMediaComposition:(id)arg1 exportParameters:(id)arg2 sessionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
