//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToValue:(id)arg1;
- (id)description;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (CDStruct_82206317)CMTimeMappingValue;

@end
