//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPPodcastStation;

@interface SAMPPlayPodcastStation : SADomainCommand
{
}

+ (id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcastStation;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAMPPodcastStation *station;
@property(nonatomic) BOOL startPlaying;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
