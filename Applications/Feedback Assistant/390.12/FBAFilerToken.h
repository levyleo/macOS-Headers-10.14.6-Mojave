//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FBAFilerToken : NSObject
{
    NSNumber *_entityID;
    NSString *_token;
    NSNumber *_dsid;
    unsigned long long _entityType;
}

@property(readonly, nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSNumber *entityID; // @synthesize entityID=_entityID;
- (void).cxx_destruct;
- (id)initWithEntityID:(id)arg1 type:(unsigned long long)arg2 token:(id)arg3 dsid:(id)arg4;

@end
