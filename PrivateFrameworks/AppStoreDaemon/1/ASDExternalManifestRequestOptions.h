//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions
{
    BOOL _shouldHideUserPrompts;
    NSURL *_manifestURL;
}

@property(nonatomic) BOOL shouldHideUserPrompts; // @synthesize shouldHideUserPrompts=_shouldHideUserPrompts;
@property(readonly, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
- (void).cxx_destruct;
- (id)init;

@end
