//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject <NSCopying>
{
    BOOL _lowConfidence;
    float _confidence;
    NSLocale *_locale;
    NSArray *_tokens;
    NSString *_metaInfo;
}

@property(readonly, nonatomic) NSString *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(readonly, nonatomic) BOOL lowConfidence; // @synthesize lowConfidence=_lowConfidence;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5;

@end
