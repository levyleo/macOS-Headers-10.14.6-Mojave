//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, MPAVRoute, NSArray;

@interface RCAudioSessionRoutingMPAVRoutingController : NSObject
{
    BOOL _hasCategoryEverBeenActive;
    BOOL _isRoutingToAirPlayMirrorDestination;
    BOOL _isRoutingToPhoneCall;
    BOOL _isAudioSessionAppropriateForQueryingRoutes;
    AVAudioSessionPortDescription *_cachedPickedInputRoutePortDescription;
    AVAudioSessionPortDescription *_cachedPickedOutputRoutePortDescription;
    MPAVRoute *_cachedPickedOutputRoute;
    NSArray *_cachedPickableOutputRoutes;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL isAudioSessionAppropriateForQueryingRoutes; // @synthesize isAudioSessionAppropriateForQueryingRoutes=_isAudioSessionAppropriateForQueryingRoutes;
@property(readonly, nonatomic) BOOL isRoutingToPhoneCall; // @synthesize isRoutingToPhoneCall=_isRoutingToPhoneCall;
@property(readonly, nonatomic) BOOL isRoutingToAirPlayMirrorDestination; // @synthesize isRoutingToAirPlayMirrorDestination=_isRoutingToAirPlayMirrorDestination;
@property(readonly, nonatomic) BOOL hasCategoryEverBeenActive; // @synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive;
@property(readonly, nonatomic) NSArray *cachedPickableOutputRoutes; // @synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes;
@property(readonly, nonatomic) MPAVRoute *cachedPickedOutputRoute; // @synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedOutputRoutePortDescription; // @synthesize cachedPickedOutputRoutePortDescription=_cachedPickedOutputRoutePortDescription;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription; // @synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription;
- (void).cxx_destruct;
- (BOOL)pickRoute:(id)arg1;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)pickSpeakerRoute;
- (long long)outputRouteTypeForNavigationIcon;
- (BOOL)makeAudioSessionCategoryActive:(id)arg1;
- (id)initWithName:(id)arg1;

@end

