//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FTServices/NSObject-Protocol.h>

@class NSString, NSURLRequest;

@protocol FTMessageDeliveryRemoteURLConnection <NSObject>
@property(copy) CDUnknownBlockType block;
@property(retain) NSURLRequest *request;
@property BOOL shouldReturnTimingData;
@property int keepAliveCell;
@property int keepAliveWifi;
@property BOOL disableKeepAlive;
@property int concurrentConnections;
@property BOOL shouldUsePipelining;
@property(retain) NSString *bundleIdentifierForDataUsage;
@property BOOL alwaysForceCellular;
@property BOOL forceCellularIfPossible;
@property BOOL requireIDSHost;
- (void)cancel;
- (void)load;
@end

