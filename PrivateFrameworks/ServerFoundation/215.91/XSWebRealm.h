//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerFoundation/NSCoding-Protocol.h>
#import <ServerFoundation/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface XSWebRealm : NSObject <NSCoding, NSCopying>
{
    NSString *_folder;
    NSMutableArray *_browseGroups;
}

@property(retain) NSMutableArray *browseGroups; // @synthesize browseGroups=_browseGroups;
@property(retain) NSString *folder; // @synthesize folder=_folder;
- (id)settings;
- (id)initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
