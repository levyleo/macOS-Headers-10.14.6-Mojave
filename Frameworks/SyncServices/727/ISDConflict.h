//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ISDConflict : NSObject
{
    NSString *_recordId;
    NSString *_entityName;
    NSString *_dataClassName;
    NSArray *_identityKeys;
    NSMutableArray *_propertyConflicts;
    NSArray *_propertyDependencies;
    NSMutableDictionary *_deletedRecordMap;
}

- (id)propertyConflicts;
- (void)purgeResolvedConflicts;
- (void)clearModified;
- (BOOL)isModified;
- (id)identityKeys;
- (id)dataClassName;
- (id)entityName;
- (id)recordId;
- (void)addPropertyChanges:(id)arg1 forDependentPropertyNames:(id)arg2;
- (void)addDependentPropertyValues:(id)arg1 forDependentPropertyNames:(id)arg2;
- (void)_addPropertyChanges:(id)arg1 forDependentPropertyNames:(id)arg2 fromClientId:(id)arg3;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 entityName:(id)arg2 dataClassName:(id)arg3 identityKeys:(id)arg4;
- (void)setWinningClientId:(id)arg1;
- (id)winningClientId;
- (id)propertyConflictForPropertyNames:(id)arg1;
- (id)propertyConflictForPropertyName:(id)arg1;
- (id)propertyNames;
- (id)resolvedPropertyConflicts;
- (id)unresolvedPropertyConflicts;
- (id)conflictWithPropertyNames:(id)arg1 areDefaultValues:(char *)arg2;
- (BOOL)containsConflictOnPropertyNames:(id)arg1;
- (id)clientIds;
- (BOOL)removePropertyConflict:(id)arg1;
- (id)deletedRecordMap;
- (void)addDeletedRecord:(id)arg1;

@end
