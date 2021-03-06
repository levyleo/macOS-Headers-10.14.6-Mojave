//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPaymentHeroImageManifest, PKPaymentWebService;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject
{
    PKPaymentWebService *_webService;
    NSString *_primaryImageIdentifier;
    NSArray *_featuredImages;
    PKPaymentHeroImageManifest *_manifest;
    id <PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

+ (id)defaultImages;
@property(nonatomic) long long watchSize; // @synthesize watchSize=_watchSize;
@property(nonatomic) id <PKPaymentHeroImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPaymentHeroImageManifest *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSArray *featuredImages; // @synthesize featuredImages=_featuredImages;
@property(copy, nonatomic) NSString *primaryImageIdentifier; // @synthesize primaryImageIdentifier=_primaryImageIdentifier;
- (void).cxx_destruct;
- (struct CGSize)cardArtSizeForSize:(struct CGSize)arg1;
- (void)downloadImages:(id)arg1;
- (id)featuredDefaultImages;
- (id)filterImages:(id)arg1;
- (id)featuredImageIdentifiers;
- (id)initWithManifest:(id)arg1 webService:(id)arg2;

@end

