//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKExtendedAttribute : NSObject
{
    NSString *_name;
    NSData *_value;
}

@property(copy) NSData *value; // @synthesize value=_value;
@property(copy) NSString *name; // @synthesize name=_name;
- (BOOL)setOnFileAtPath:(id)arg1 option:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end
