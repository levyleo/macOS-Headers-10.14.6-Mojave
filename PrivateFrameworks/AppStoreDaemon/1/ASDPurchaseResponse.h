//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDPurchaseResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    NSArray *_items;
}

@property(readonly) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithPurchaseResponseItems:(id)arg1;
- (id)init;

@end
