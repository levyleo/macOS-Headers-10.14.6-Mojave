//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>
{
    BOOL _handled;
    NSSet *_recordZoneIDs;
}

@property(retain, nonatomic) NSSet *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(nonatomic, getter=wasHandled) BOOL handled; // @synthesize handled=_handled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
