//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSAttributedString, NSURL;

__attribute__((visibility("hidden")))
@interface NVSideViewFooterViewData : NSObject
{
    NSAttributedString *_providerBanner;
    NSURL *_providerURL;
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSURL *providerURL; // @synthesize providerURL=_providerURL;
@property(retain, nonatomic) NSAttributedString *providerBanner; // @synthesize providerBanner=_providerBanner;
- (void).cxx_destruct;
- (void)updateProviderBannerWithColor:(id)arg1;
- (id)initWithMapItem:(id)arg1;

@end
