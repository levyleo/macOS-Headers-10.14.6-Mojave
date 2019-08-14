//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPXRevealSharedStreamItemRequest : NSObject
{
    unsigned long long _itemType;
    NSString *_streamIdentifier;
    NSString *_photoIdentifier;
    NSString *_commentIdentifier;
    long long _commentCount;
}

+ (id)requestForURLResourceSpecifier:(id)arg1;
+ (id)requestForStreamIdentifier:(id)arg1;
@property long long commentCount; // @synthesize commentCount=_commentCount;
@property unsigned long long itemType; // @synthesize itemType=_itemType;
@property(copy) NSString *commentIdentifier; // @synthesize commentIdentifier=_commentIdentifier;
@property(copy) NSString *photoIdentifier; // @synthesize photoIdentifier=_photoIdentifier;
@property(copy) NSString *streamIdentifier; // @synthesize streamIdentifier=_streamIdentifier;
- (void).cxx_destruct;

@end
