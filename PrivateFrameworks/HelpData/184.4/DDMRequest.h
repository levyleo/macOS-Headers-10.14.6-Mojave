//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DDMRequest : NSObject
{
    unsigned int _requestType;
    NSString *_ddmID;
    NSString *_ddmBookID;
    NSString *_language;
    NSString *_product;
    NSString *_platform;
    NSString *_platformVersion;
    NSString *_productVersion;
}

+ (id)topicRequestWithID:(id)arg1 ddmBookID:(id)arg2 language:(id)arg3 product:(id)arg4 productVersion:(id)arg5 platform:(id)arg6 platformVersion:(id)arg7;
+ (id)bookRequestWithID:(id)arg1 language:(id)arg2 product:(id)arg3 productVersion:(id)arg4 platform:(id)arg5 platformVersion:(id)arg6;
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) NSString *platformVersion; // @synthesize platformVersion=_platformVersion;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
@property(readonly) NSString *product; // @synthesize product=_product;
@property(readonly) NSString *language; // @synthesize language=_language;
@property(readonly) NSString *ddmBookID; // @synthesize ddmBookID=_ddmBookID;
@property(readonly) NSString *ddmID; // @synthesize ddmID=_ddmID;
@property(readonly) unsigned int requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)ddmObjectFromResponseDictionary:(id)arg1 originURL:(id)arg2;
@property(readonly) NSURL *ddmURL;
- (id)_ddmURLWithURLComponents:(id)arg1;
- (id)_ddmURLWithQuery:(id)arg1;
- (id)initWithType:(unsigned int)arg1 ddmID:(id)arg2 ddmBookID:(id)arg3 language:(id)arg4 product:(id)arg5 productVersion:(id)arg6 platform:(id)arg7 platformVersion:(id)arg8;

@end
