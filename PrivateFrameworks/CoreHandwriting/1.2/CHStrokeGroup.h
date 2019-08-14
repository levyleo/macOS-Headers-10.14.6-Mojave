//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol CHStrokeIdentifier;

@interface CHStrokeGroup : NSObject
{
    long long _uniqueIdentifier;
    long long _ancestorIdentifier;
    NSSet *_strokeIdentifiers;
    id <CHStrokeIdentifier> _firstStrokeIdentifier;
    id <CHStrokeIdentifier> _lastStrokeIdentifier;
    long long _classification;
    struct CGRect _bounds;
}

+ (BOOL)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2;
+ (long long)_newStrokeGroupUniqueIdentifier;
@property(readonly, nonatomic) long long classification; // @synthesize classification=_classification;
@property(readonly, nonatomic) id <CHStrokeIdentifier> lastStrokeIdentifier; // @synthesize lastStrokeIdentifier=_lastStrokeIdentifier;
@property(readonly, nonatomic) id <CHStrokeIdentifier> firstStrokeIdentifier; // @synthesize firstStrokeIdentifier=_firstStrokeIdentifier;
@property(readonly, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) long long ancestorIdentifier; // @synthesize ancestorIdentifier=_ancestorIdentifier;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 classification:(long long)arg6;
@property(readonly, nonatomic) struct CGVector averageWritingOrientation;
- (id)description;
- (BOOL)isEquivalentToStrokeGroup:(id)arg1;
- (void)dealloc;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 classification:(long long)arg6;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 classification:(long long)arg5;
- (id)init;

@end
