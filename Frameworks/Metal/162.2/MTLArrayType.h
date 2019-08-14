//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLType.h>

@interface MTLArrayType : MTLType
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementTextureReferenceType;
- (id)elementArrayType;
- (id)elementStructType;

// Remaining properties
@property(readonly) unsigned long long argumentIndexStride; // @dynamic argumentIndexStride;
@property(readonly) unsigned long long arrayLength; // @dynamic arrayLength;
@property(readonly) unsigned long long elementType; // @dynamic elementType;
@property(readonly) unsigned long long stride; // @dynamic stride;

@end
