//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/MNNavigationStateCommute.h>

__attribute__((visibility("hidden")))
@interface MNNavigationStateForegroundPredictingDestination : MNNavigationStateCommute
{
}

- (void)commuteSessionDidArrive:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)enterState;
- (void)stopPredictingDestinations;
- (void)updateMapsActive:(BOOL)arg1;
- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredResourcePolicy;
- (unsigned long long)desiredLocationProviderType;
- (long long)type;
- (BOOL)requiresHighMemoryThreshold;

@end

