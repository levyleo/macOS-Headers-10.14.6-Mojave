//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface AVB17221AEMVideoColorSpaceTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (unsigned short)colorSpaceForName:(id)arg1;
- (id)nameForColorSpace:(unsigned short)arg1;

@end
