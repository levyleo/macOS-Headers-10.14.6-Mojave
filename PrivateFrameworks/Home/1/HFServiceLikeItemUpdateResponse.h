//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCharacteristicBatchReadResponse, HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject
{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    HFCharacteristicBatchReadResponse *_readResponse;
    NSDictionary *_standardResults;
}

@property(readonly, nonatomic) NSDictionary *standardResults; // @synthesize standardResults=_standardResults;
@property(readonly, nonatomic) HFCharacteristicBatchReadResponse *readResponse; // @synthesize readResponse=_readResponse;
@property(readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // @synthesize displayMetadata=_displayMetadata;
- (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3;

@end

