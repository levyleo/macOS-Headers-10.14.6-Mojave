//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SIUFoundation/NSObject-Protocol.h>

@class NSMetadataItem, NSMetadataQuery, NSString;

@protocol NSMetadataQueryDelegate <NSObject>

@optional
- (id)metadataQuery:(NSMetadataQuery *)arg1 replacementValueForAttribute:(NSString *)arg2 value:(id)arg3;
- (id)metadataQuery:(NSMetadataQuery *)arg1 replacementObjectForResultObject:(NSMetadataItem *)arg2;
@end
