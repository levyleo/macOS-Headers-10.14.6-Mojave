//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>
{
    NSString *_category;
    NSString *_mode;
}

@property(readonly, copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToAudioRouteCollectionKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;

@end
