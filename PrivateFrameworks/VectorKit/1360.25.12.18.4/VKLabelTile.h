//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

__attribute__((visibility("hidden")))
@interface VKLabelTile : VKTile
{
    shared_ptr_702c344d _labelTile;
}

@property(readonly, nonatomic) shared_ptr_702c344d labelTile; // @synthesize labelTile=_labelTile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 tileType:(unsigned char)arg3 labelManager:(const shared_ptr_e1d4bd06 *)arg4 sharedResources:(id)arg5;

@end
