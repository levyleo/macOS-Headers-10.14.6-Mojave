//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class SCKZoneSchema;
@protocol SCKDatabaseStore, SCKDatabaseStoreCoordinatorObserver;

@protocol SCKDatabaseStoreCoordinator
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (void)removeObserver:(id <SCKDatabaseStoreCoordinatorObserver>)arg1;
- (void)addObserver:(id <SCKDatabaseStoreCoordinatorObserver>)arg1;
- (void)writeZone:(SCKZoneSchema *)arg1 withAccessor:(void (^)(id <SCKZoneStore>))arg2;
- (void)readZone:(SCKZoneSchema *)arg1 withAccessor:(void (^)(id <SCKZoneStore>))arg2;
- (void)reloadWithAccessor:(void (^)(id <SCKDatabaseStore>))arg1;
- (void)writeWithAccessor:(void (^)(id <SCKDatabaseStore>))arg1;
- (void)readWithAccessor:(void (^)(id <SCKDatabaseStore>))arg1;
@end
