//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation
{
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;
}

+ (id)alloc;
+ (Class)__class;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock; // @synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
- (void).cxx_destruct;

@end
