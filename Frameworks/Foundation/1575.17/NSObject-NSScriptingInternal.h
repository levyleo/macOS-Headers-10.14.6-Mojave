//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSScriptingInternal)
- (void)_scriptingRemoveAllObjectsFromValueForKey:(id)arg1;
- (void)_scriptingRemoveObjectsAtIndexes:(id)arg1 fromValueForKey:(id)arg2;
- (id)_scriptingInsertObject:(id)arg1 inValueForKey:(id)arg2;
- (id)_scriptingReplaceObjectAtIndex:(unsigned long long)arg1 withObjects:(id)arg2 inValueForKey:(id)arg3;
- (id)_scriptingInsertObjects:(id)arg1 atIndexes:(id)arg2 inValueForKey:(id)arg3;
- (id)_scriptingAddObjectsFromSet:(id)arg1 toValueForKey:(id)arg2;
- (id)_scriptingAddObjectsFromArray:(id)arg1 toValueForKey:(id)arg2;
- (BOOL)_scriptingCanInsertBeforeOrReplaceObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2;
- (BOOL)_scriptingCanAddObjectsToValueForKey:(id)arg1;
- (id)_scriptingSetValue:(id)arg1 forKey:(id)arg2;
- (BOOL)_scriptingCanSetValue:(id)arg1 forSpecifier:(id)arg2;
- (id)_scriptingCoerceValue:(id)arg1 forKey:(id)arg2;
- (id)_scriptingSetOfObjectsForSpecifier:(id)arg1;
- (id)_scriptingArrayOfObjectsForSpecifier:(id)arg1;
- (id)_scriptingObjectForSpecifier:(id)arg1;
- (unsigned long long)_scriptingIndexOfObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2;
- (unsigned long long)_scriptingIndexOfObjectWithName:(id)arg1 inValueForKey:(id)arg2;
- (id)_scriptingObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2;
- (id)_scriptingObjectWithName:(id)arg1 inValueForKey:(id)arg2;
- (id)_scriptingObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2;
- (id)_scriptingObjectAtIndex:(unsigned long long)arg1 inValueForKey:(id)arg2;
- (BOOL)_scriptingShouldCheckObjectIndexes;
- (unsigned long long)_scriptingObjectCountInValueForKey:(id)arg1;
- (id)_scriptingValueForKey:(id)arg1;
- (long long *)_scriptingIndicesOfObjectsForSpecifier:(id)arg1 count:(long long *)arg2;
- (id)_scriptingIndexesOfObjectsForSpecifier:(id)arg1;
- (unsigned long long)_scriptingIndexOfObjectForSpecifier:(id)arg1;
- (id)_scriptingValueForSpecifier:(id)arg1;
- (id)_scriptingIndicesOfObjectsAfterValidatingSpecifier:(id)arg1;
@end
