//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FrequentlyVisitedSite-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TopSiteObjC : NSObject <FrequentlyVisitedSite>
{
}

- (void)ban;
@property(readonly, nonatomic) BOOL isBuiltIn;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *urlString;
@property(readonly, nonatomic) struct TopSite *cpp;

@end
