//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRFeedGroupImageKey;

@interface FRFeedGroupImageRequest : NSObject
{
    FRFeedGroupImageKey *_key;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) FRFeedGroupImageKey *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
