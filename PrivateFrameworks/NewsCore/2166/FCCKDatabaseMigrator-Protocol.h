//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKRecord, FCCKPrivateDatabase, NSArray, NSSet, NSString;

@protocol FCCKDatabaseMigrator <NSObject>
- (void)databaseMigrationDidFinishForDatabase:(FCCKPrivateDatabase *)arg1 result:(long long)arg2;
- (CKRecord *)databaseMigrationMigrateRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (BOOL)databaseMigrationShouldDropRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSArray *)databaseMigrationRecordNamesToMigrateInZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSSet *)databaseMigrationZoneNamesForDatabase:(FCCKPrivateDatabase *)arg1;
@end
