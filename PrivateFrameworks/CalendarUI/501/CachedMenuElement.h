//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface CachedMenuElement : NSObject
{
    NSString *_sourceTitle;
    NSString *_calendarIdentifier;
    NSImage *_smallIcon;
    NSImage *_largeIcon;
}

@property(retain) NSImage *largeIcon; // @synthesize largeIcon=_largeIcon;
@property(retain) NSImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(retain) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
- (void).cxx_destruct;

@end
