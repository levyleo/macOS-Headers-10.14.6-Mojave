//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSString;
@protocol HUControlViewDelegate;

@protocol HUControlView <NSObject>
+ (Class)valueClass;
@property(nonatomic, getter=isDisabled) BOOL disabled;
@property(retain, nonatomic) id value;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate;
@property(copy, nonatomic) NSString *identifier;

@optional
@property(nonatomic) BOOL canBeHighlighted;
@end

