//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying>
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    BOOL _isAppendingSectionInsert;
    NSUUID *_identifier;
}

@property(nonatomic) BOOL isAppendingSectionInsert; // @synthesize isAppendingSectionInsert=_isAppendingSectionInsert;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (void).cxx_destruct;
- (BOOL)isNOOP;
- (BOOL)isEqualToUpdate:(id)arg1;
- (BOOL)isRevertedUpdateOf:(id)arg1;
- (id)revertedUpdate;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
@property(readonly, nonatomic, getter=_isSectionOperation) BOOL isSectionOperation;
@property(readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property(readonly, nonatomic, getter=_action) long long action;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end
