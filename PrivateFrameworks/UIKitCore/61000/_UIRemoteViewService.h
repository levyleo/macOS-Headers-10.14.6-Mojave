//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSUUID;
@protocol PKPlugIn;

@interface _UIRemoteViewService : NSObject
{
    BOOL _overridesHostAppearance;
    NSExtension *_extension;
    NSUUID *_contextToken;
}

@property(copy, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(readonly, nonatomic) BOOL overridesHostAppearance; // @synthesize overridesHostAppearance=_overridesHostAppearance;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)updateOverridesHostAppearance;
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;

@end
