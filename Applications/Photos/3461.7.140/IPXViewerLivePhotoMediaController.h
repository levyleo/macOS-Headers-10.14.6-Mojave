//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewerImageController.h"

#import "IPXBadgeViewTrackingDelegate-Protocol.h"
#import "IPXLivePhotoTrimScrubberDelegate-Protocol.h"
#import "ISChangeObserver-Protocol.h"
#import "NUMediaViewDelegate-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "PHLivePhotoViewDelegatePrivate-Protocol.h"
#import "PXVideoScrubberControllerTarget-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class ISWrappedAVPlayer, LiAddress, NSArray, NSMutableSet, NSString, NUMediaView, NUVideoPropertiesRequest, NUVideoRenderRequest, PFCoalescer, PHLivePhoto, PHLivePhotoView, RDDatabase, RDVersion;

@interface IPXViewerLivePhotoMediaController : IPXViewerImageController <PHLivePhotoViewDelegatePrivate, NUMediaViewDelegate, ISChangeObserver, PFResourceAccessClient, RDLibraryMessagesReceiver, IPXBadgeViewTrackingDelegate, PXVideoScrubberControllerTarget, IPXLivePhotoTrimScrubberDelegate>
{
    RDDatabase *_registeredMessageReceiver;
    long long _editSource;
    NSMutableSet *_reasonsToHidePlayer;
    CDStruct_1b6d18a9 _cachedPhotoKeyTime;
    CDStruct_1b6d18a9 _cachedAdjustedKeyTime;
    CDStruct_1b6d18a9 _cachedAdjustedStartTime;
    CDStruct_1b6d18a9 _cachedAdjustedEndTime;
    NUMediaView *_mediaView;
    NSArray *_previousFilters;
    NSString *_previousAutoloopFlavor;
    BOOL _canPlayLivePhotoOnMouseOver;
    BOOL _mediaViewLoopPlaybackIsPaused;
    struct {
        char playerView;
        char playerViewVisibility;
        char livePhoto;
        char targetReadiness;
        char adjustedTimes;
        char photoTime;
        char mediaViewComposition;
    } _needsUpdateFlags;
    PFCoalescer *_videoCompositionUpdateCoalescer;
    BOOL _isInteractiveAdjustment;
    // Error parsing type: Ai, name: _currentLivePhotoRequestID
    NUVideoRenderRequest *_livePhotoVideoRenderRequest;
    NUVideoPropertiesRequest *_livePhotoVideoPropertiesRequest;
    BOOL _isCropTransition;
    BOOL __beingAnimatedInScrollView;
    BOOL __aboveDeepPressureThreshold;
    BOOL __performingChanges;
    BOOL __playbackRequestedWhileVisible;
    CDUnknownBlockType durationChangeHandler;
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    PHLivePhotoView *_livePhotoView;
    ISWrappedAVPlayer *__videoPlayer;
    PHLivePhoto *__livePhoto;
    LiAddress *_versionAddress;
}

+ (void)_resizeCropAdjustmentIfNecessaryWithOldRenderDescription:(id)arg1 newRenderDescription:(id)arg2 descriptionEditController:(id)arg3;
+ (void)_replaceLivePhotoKeyFrameTime:(id)arg1 descriptionEditController:(id)arg2 editSession:(id)arg3;
+ (id)_editPipelineFilters;
@property(retain) LiAddress *versionAddress; // @synthesize versionAddress=_versionAddress;
@property(nonatomic, setter=_setPlaybackRequestedWhileVisible:) BOOL _playbackRequestedWhileVisible; // @synthesize _playbackRequestedWhileVisible=__playbackRequestedWhileVisible;
@property(nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges; // @synthesize _performingChanges=__performingChanges;
@property(nonatomic, getter=_isAboveDeepPressureThreshold, setter=_setAboveDeepPressureThreshold:) BOOL _aboveDeepPressureThreshold; // @synthesize _aboveDeepPressureThreshold=__aboveDeepPressureThreshold;
@property(nonatomic, getter=_isBeingAnimatedInScrollView) BOOL _beingAnimatedInScrollView; // @synthesize _beingAnimatedInScrollView=__beingAnimatedInScrollView;
@property(retain, nonatomic, setter=_setLivePhoto:) PHLivePhoto *_livePhoto; // @synthesize _livePhoto=__livePhoto;
@property(retain, nonatomic, setter=_setVideoPlayer:) ISWrappedAVPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property(readonly, nonatomic) long long editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
- (void).cxx_destruct;
- (void)mediaViewIsReadyForVideoPlayback:(id)arg1;
- (void)mediaView:(id)arg1 didZoom:(double)arg2;
- (void)mediaViewDidUpdateLivePhoto:(id)arg1;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2;
- (void)_forceLightMapCalculationWithKeyFrameTime:(id)arg1;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)videoScrubberControllerDidEndSeeking:(id)arg1;
- (void)videoScrubberControllerWillBeginSeeking:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)cancelPendingSeeks;
- (float)playRate;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (long long)playerStatus;
- (id)playerItem;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)livePhotoViewVideoPlayerDidChange:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)descriptionEditController:(id)arg1 videoComplementVisibilityChanged:(BOOL)arg2;
- (void)descriptionEditController:(id)arg1 renderDescriptionOrientationChanged:(id)arg2;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 operationDidChangeAtIndex:(unsigned long long)arg3 invalidMasterRect:(struct CGRect)arg4;
- (void)operationsChangedForDescriptionController:(id)arg1 renderDescription:(id)arg2;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 endInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 beginInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)largePAPreviewImageUpdatedForVersionAddress:(id)arg1;
- (void)libraryUpdatedVersion:(id)arg1 forKeyPaths:(id)arg2;
- (void)_didExitCrop;
- (void)_didEnterCrop;
- (void)_willExitCrop;
- (void)_willEnterCrop;
- (void)handleEvent:(id)arg1 onBadgeView:(id)arg2;
- (void)_scrubToTime:(CDStruct_1b6d18a9)arg1;
- (void)_disablePlaybackOnMouseOver;
- (void)_enablePlaybackOnMouseOver;
- (void)_displayOverlayClasses:(BOOL)arg1;
- (id)_viewerOverlayClassesToHideDuringPlayback;
- (void)_startPlayingLivePhotoMedia;
- (void)_handleAdjustedLivePhotoRenderResponse:(id)arg1 propertiesResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_renderAdjustedLivePhoto:(CDUnknownBlockType)arg1;
- (void)_handleLivePhotoResult:(id)arg1 error:(id)arg2 requestID: /* Error: Ran out of types for this method. */;
- (void)_handleVideoCompositionUpdateCoalescerDidFireWithRequestID: /* Error: Ran out of types for this method. */;
- (void)_updateLivePhotoIfNeeded;
- (void)_ensureLivePhotoRequest;
- (void)_invalidateLivePhoto;
- (void)_insertPlayerIntoCanvasViewForUserPlayback;
- (void)_stopHidingPlayerForReason:(id)arg1;
- (void)_hidePlayerForReason:(id)arg1;
- (void)_updatePreviewClipLayerFrameFromPreviewItemViewConfiguration;
- (void)_handleClickNotification:(id)arg1;
- (id)_newComposition;
- (id)_newRenderDescription;
- (void)_tearDownMediaView;
- (void)_setupMediaView;
- (void)_removeItemViewController;
- (void)_setupItemViewController;
- (void)_stopReceivingMessages;
- (void)_startReceivingMessages;
- (void)_videoComplementBecameUpToDate:(id)arg1;
- (void)_videoComplementWentOutOfDate;
- (void)_updateMediaViewCompositionIfNeeded;
- (void)_invalidateMediaViewComposition;
@property(nonatomic, setter=_setLivePhotoTargetReadiness:) long long _livePhotoTargetReadiness;
- (void)_updatePlayerVisibilityIfNeeded;
- (void)_invalidatePlayerViewVisibility;
- (void)_updateAdjustedTimesIfNeeded;
- (void)_invalidateAdjustedTimes;
- (void)_updatePhotoKeyTimeIfNeeded;
- (void)_invalidatePhotoKeyTime;
- (void)_updateTargetReadinessIfNeeded;
- (void)_invalidateTargetReadiness;
- (void)_updatePlayerViewIfNeeded;
- (void)_invalidatePlayerView;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (BOOL)_hasMuteAdjustment;
@property(readonly, nonatomic) BOOL shouldMuteEditPlayback;
- (void)_updateMutedPlayback;
- (BOOL)_hasLoopingVideoAdjustment;
@property(readonly, nonatomic) BOOL isLoopingVideo;
- (BOOL)_isLoopingVideo:(BOOL)arg1;
- (void)_setBeingAnimatedInScrollView:(BOOL)arg1;
- (void)stopPlayingLivePhotoMedia;
- (void)startPlayingLivePhotoMediaAfterDelay:(double)arg1;
@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property(readonly, nonatomic) CDStruct_1b6d18a9 adjustedTrimEndTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 adjustedTrimStartTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 adjustedKeyTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoKeyTime;
@property(readonly, nonatomic) unsigned char currentPlaybackVariation;
- (id)_livePhotoMediaPipelineFilters;
- (void)setPipelineFilters:(id)arg1;
- (void)resetShowOriginalMode;
- (void)setShowOriginalMode:(long long)arg1;
- (void)didFinishAnimatingOrientationChange;
- (void)willAnimateOrientationChange;
- (void)stopMediaPlayback;
- (void)startMediaPlayback;
- (BOOL)mediaPlaybackStarted;
- (BOOL)supportsMediaPlayback;
- (void)removeViewerItemModel;
- (void)setupViewerItemModel;
- (void)setExtraLoadingEnabled:(BOOL)arg1;
- (void)didScrollOutOfVisibleRect;
- (void)hasSettledAsPrimaryViewerItemController;
- (void)didScrollIntoVisibleRect;
- (void)didAnimateInScrollView:(id)arg1;
- (void)beginAnimationInScrollView:(id)arg1;
- (void)reloadWithVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didDownloadVersionInResponseToRequest:(id)arg1;
- (void)viewerItemModelDidChange;
- (void)setInOptimizedScrubbingMode:(BOOL)arg1;
- (BOOL)shouldAllowDraggingForEvent:(id)arg1;
- (void)didEndAnimationInScrollView:(id)arg1;
- (void)updateBadgesAnimated:(BOOL)arg1 optionalBadgeUpdateDelgate:(id)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithOwningViewerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) RDVersion *version;

@end
