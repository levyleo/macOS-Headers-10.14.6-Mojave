//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMDHelperExternalProtocol;

@interface HMDHelper : NSObject
{
    id <HMDHelperExternalProtocol> _externalProtocol;
}

+ (void)setSharedHelper:(id)arg1;
+ (id)sharedHelper;
@property(retain, nonatomic) id <HMDHelperExternalProtocol> externalProtocol; // @synthesize externalProtocol=_externalProtocol;
- (void).cxx_destruct;
- (id)hashedRouteIDForIdentifier:(id)arg1;
- (id)initWithExternalProtocol:(id)arg1;

@end
