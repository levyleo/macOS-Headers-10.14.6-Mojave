//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenSharing/SSAddress.h>

@class NSString;

@interface SSUDPSocketAddress : SSAddress
{
    NSString *remoteIPPort;
}

@property(copy) NSString *remoteIPPort; // @synthesize remoteIPPort;
- (id)displayString;
- (void)dealloc;
- (id)initWithUDPSocket:(int)arg1;

@end
