//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CSVoiceProfileContext : NSObject
{
    NSString *_profileId;
    NSString *_languageCode;
    NSString *_productCategory;
    NSNumber *_version;
}

@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProfileId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4;

@end
