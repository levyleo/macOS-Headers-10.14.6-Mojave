//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, UHASTouchBar;

@interface _UITouchBar : NSObject
{
    UHASTouchBar *_touchBar;
    NSSet *_touchBarItems;
}

- (void).cxx_destruct;
- (id)backingBar;
@property(nonatomic) BOOL allowsCustomization;
@property(retain, nonatomic) NSSet *templateItems;
@property(retain, nonatomic) NSString *principalItemIdentifier;
@property(copy, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSString *identifier;
- (void)setIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
