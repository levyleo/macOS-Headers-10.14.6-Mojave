//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICAnalyticsReporterBase.h>

@class NSDate, NSManagedObjectContext, NSMutableDictionary;

@interface ICSnapshotAnalyticsReporter : ICAnalyticsReporterBase
{
    BOOL _previousLoggingHasFinished;
    NSDate *_timeStampForPreviousLogging;
    NSManagedObjectContext *_modernContext;
    NSManagedObjectContext *_htmlContext;
    NSMutableDictionary *_blocksForSnapshotKeys;
    NSMutableDictionary *_generalStatisticsV1ToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV2ToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV3ToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV4ToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV5ToBeSentAllAtOnce;
    NSMutableDictionary *_axGeneralStatisticsV1ToBeSentAllAtOnce;
    NSMutableDictionary *_axGeneralStatisticsV2ToBeSentAllAtOnce;
    NSMutableDictionary *_axGeneralStatisticsV3ToBeSentAllAtOnce;
    NSMutableDictionary *_axGeneralStatisticsV4ToBeSentAllAtOnce;
    unsigned long long _keysThatHaveFinishedLogging;
}

+ (id)sharedReporter;
@property BOOL previousLoggingHasFinished; // @synthesize previousLoggingHasFinished=_previousLoggingHasFinished;
@property unsigned long long keysThatHaveFinishedLogging; // @synthesize keysThatHaveFinishedLogging=_keysThatHaveFinishedLogging;
@property(retain) NSMutableDictionary *axGeneralStatisticsV4ToBeSentAllAtOnce; // @synthesize axGeneralStatisticsV4ToBeSentAllAtOnce=_axGeneralStatisticsV4ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *axGeneralStatisticsV3ToBeSentAllAtOnce; // @synthesize axGeneralStatisticsV3ToBeSentAllAtOnce=_axGeneralStatisticsV3ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *axGeneralStatisticsV2ToBeSentAllAtOnce; // @synthesize axGeneralStatisticsV2ToBeSentAllAtOnce=_axGeneralStatisticsV2ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *axGeneralStatisticsV1ToBeSentAllAtOnce; // @synthesize axGeneralStatisticsV1ToBeSentAllAtOnce=_axGeneralStatisticsV1ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV5ToBeSentAllAtOnce; // @synthesize generalStatisticsV5ToBeSentAllAtOnce=_generalStatisticsV5ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV4ToBeSentAllAtOnce; // @synthesize generalStatisticsV4ToBeSentAllAtOnce=_generalStatisticsV4ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV3ToBeSentAllAtOnce; // @synthesize generalStatisticsV3ToBeSentAllAtOnce=_generalStatisticsV3ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV2ToBeSentAllAtOnce; // @synthesize generalStatisticsV2ToBeSentAllAtOnce=_generalStatisticsV2ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV1ToBeSentAllAtOnce; // @synthesize generalStatisticsV1ToBeSentAllAtOnce=_generalStatisticsV1ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *blocksForSnapshotKeys; // @synthesize blocksForSnapshotKeys=_blocksForSnapshotKeys;
@property(retain, nonatomic) NSManagedObjectContext *htmlContext; // @synthesize htmlContext=_htmlContext;
@property(retain, nonatomic) NSManagedObjectContext *modernContext; // @synthesize modernContext=_modernContext;
@property(retain, nonatomic) NSDate *timeStampForPreviousLogging; // @synthesize timeStampForPreviousLogging=_timeStampForPreviousLogging;
- (void).cxx_destruct;
- (id)axVariantForKey:(id)arg1;
- (void)logGeneralStatisticsV5ToBeSentAllAtOnce;
- (void)logGeneralStatisticsV4ToBeSentAllAtOnce;
- (void)logGeneralStatisticsV3ToBeSentAllAtOnce;
- (void)logGeneralStatisticsV2ToBeSentAllAtOnce;
- (void)logGeneralStatisticsV1ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV5ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV4ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV3ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV2ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV1ToBeSentAllAtOnce;
- (void)performBlockForHTMLManagedObjectContext:(CDUnknownBlockType)arg1;
- (void)performBlockForModernManagedObjectContext:(CDUnknownBlockType)arg1;
- (BOOL)shouldConsiderHTMLAccount:(struct NFAccount *)arg1;
- (BOOL)iCloudAccountIsMigrated;
- (BOOL)localAccountIsMigrated;
- (struct NFAccount *)htmlAccountForPrimaryICloudAccount;
- (id)predicateForPPNotes;
- (id)htmlFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2;
- (unsigned long long)countOfNotesOnMacInHtmlAccount:(id)arg1;
- (unsigned long long)countOfNotesOnMacInHtmlFolder:(id)arg1;
- (void)performLoggingForSnapshotKeys:(id)arg1;
- (void)performRepetitiveClearAndLoggingForSnapshotKeys:(id)arg1;
- (void)performClearAndLoggingForSnapshotKeys;
- (id)init;

@end
