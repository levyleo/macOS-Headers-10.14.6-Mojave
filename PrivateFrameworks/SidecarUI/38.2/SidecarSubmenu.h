//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SidecarSubmenu : NSMenu
{
    long long _generation;
    unsigned long long _options;
    NSArray *_services;
    id _target;
    SEL _action;
}

@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)update;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end
