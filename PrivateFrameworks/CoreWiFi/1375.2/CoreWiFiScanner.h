//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CoreWiFiScanner : NSObject
{
    NSMutableArray *channelsOfInterest;
    NSMutableArray *ssidsOfInterest;
}

@property(retain, nonatomic) NSMutableArray *ssidsOfInterest; // @synthesize ssidsOfInterest;
@property(retain, nonatomic) NSMutableArray *channelsOfInterest; // @synthesize channelsOfInterest;
- (id)description;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

