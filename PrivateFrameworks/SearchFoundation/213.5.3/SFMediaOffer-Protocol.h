//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFActionItem-Protocol.h>

@class NSData, NSDictionary, NSString, SFActionItem, SFImage;

@protocol SFMediaOffer <SFActionItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *image;
@property(nonatomic) BOOL isEnabled;
@property(copy, nonatomic) NSString *offerIdentifier;
@property(copy, nonatomic) NSString *sublabel;
@property(retain, nonatomic) SFActionItem *actionItem;
@end
