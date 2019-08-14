//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "ILShareContentsDelegate-Protocol.h"
#import "RKTerminationDelegateProtocol-Protocol.h"

@class AlbumMgr, DBDocument, HgKDatabaseManager, HgLockedRidList, HgRidList, IPMessageReceiver, IP_ILPhotoShare, KeywordMgr, NSArray, NSData, NSDate, NSLock, NSMapTable, NSMutableDictionary, NSNumber, NSOperation, NSOperationQueue, NSRunLoop, NSString, NSTimer, NewFaceDetector, ProgressController, RKCustomSortOrder, RKDatabase, RKiPhotoDatabase, SqGlobals, ThumbnailManager;
@protocol NSLocking><NSObject;

@interface ImageDB : NSObject <ILShareContentsDelegate, RKTerminationDelegateProtocol>
{
    BOOL mWarnTransactions;
    BOOL mShowLoadSaveTimes;
    BOOL mLogPeriodicSaving;
    BOOL mUseNoCacheIO;
    BOOL mFinishingWriteTransaction;
    BOOL mTransactionIsPublish;
    NSMapTable *mPhotoKeys;
    NSMapTable *mPhotoUuids;
    NSMapTable *mPhotoVersionUuids;
    NSMapTable *mPhotoMasterUuids;
    SqGlobals *mSqGlobals;
    RKiPhotoDatabase *mRkSqDB;
    DBDocument *mDocument;
    RKDatabase *mDatabase;
    unsigned long long mKey;
    NSString *mRoot;
    HgKDatabaseManager *mFaceDBMgr;
    HgKDatabaseManager *mFaceBlobDBMgr;
    NSMutableDictionary *mDetectedFaceIdByPhotoInfoIdByIndex;
    unsigned long long mNextTempKey;
    BOOL mLastImportRollKeyChanged;
    BOOL mLastEmptyEventKeyChanged;
    BOOL mIsModified;
    BOOL mQuitWithoutWrite;
    KeywordMgr *mKeywordMgr;
    BOOL mIsTemporary;
    BOOL mWasRKUpgraded;
    BOOL mWasSQUpgraded;
    BOOL mForceFaceDetectionAfterUpgrade;
    int mRepairOptions;
    struct IPPhotoList *mNeedThumbRegen;
    ThumbnailManager *mThumbnailManager;
    AlbumMgr *mAlbumMgr;
    unsigned long long mMarkValue;
    struct _opaque_pthread_mutex_t mInstanceLock;
    int mLockCount;
    BOOL mIsWriteTransaction;
    BOOL mGUIThreadWaiting;
    struct set<IPPhotoInfo *, std::__1::less<IPPhotoInfo *>, std::__1::allocator<IPPhotoInfo *>> *mModifiedPhotos;
    struct set<Album *, std::__1::less<Album *>, std::__1::allocator<Album *>> *mRefilteredAlbums;
    struct _opaque_pthread_t *mMainThread;
    struct _opaque_pthread_t *mCurrentTransactionThread;
    struct _opaque_pthread_mutex_t mHighPriorityLock;
    int mHighPriorityCount;
    NSMapTable *mAllAlbumsByKey;
    NSMapTable *mAllAlbumsByUuid;
    NSMapTable *mAllAlbumsByRollKey;
    NSMapTable *mAllRolls;
    NSMapTable *mAllStacks;
    RKCustomSortOrder *mRollSortOrder;
    NSRunLoop *mRunLoop;
    struct IPPhotoList *mPendingAdd;
    struct IPPhotoList *mPendingRemove;
    double mUpdateStart;
    struct IPRoll *mUpdateRoll;
    BOOL mIsLoading;
    BOOL mInUpdate;
    BOOL mIsArchiving;
    int mArchiveNice;
    NSTimer *mArchiveTimer;
    ProgressController *mCopyProgress;
    unsigned long long mCopyTotalCount;
    unsigned long long mCopyCurrentCount;
    double mLastCopyPercent;
    NSMutableDictionary *mAlbumData;
    NSData *mRollData;
    BOOL mDelayLoading;
    IP_ILPhotoShare *mPhotoShare;
    NSDate *mUpgradeStartTime;
    NSDate *mLastUpdateTime;
    double mLastTimeRemaining;
    unsigned long long mTotalUpgradeBytes;
    unsigned long long mCompletedUpgradeBytes;
    struct list<double, std::__1::allocator<double>> *mLastNUpgradedPercent;
    struct list<unsigned long long, std::__1::allocator<unsigned long long>> *mLastNUpgradedBytes;
    struct list<NSDate *, std::__1::allocator<NSDate *>> *mLastNUpgradedTime;
    int _integrity;
    BOOL _restartedUpgrade;
    NSArray *mPostUnarchiveImportPhotos;
    long long mPostUnarchiveImportReference;
    NSString *mPostRecoveryImportDir;
    BOOL mNeedUpgradeAutoSplit;
    BOOL mEmptyThumbCaches;
    IPMessageReceiver *mMessageReceiver;
    struct IPPhotoList *mCutList;
    NewFaceDetector *mFaceDetector;
    NSMutableDictionary *mPlaceNameCache;
    NSString *mUuid;
    unsigned long long mNextKey;
    BOOL mDidCreateNewDatabase;
    BOOL _placesChanged;
    NSTimer *_placeProgressTimer;
    NSOperationQueue *mLoadingQueue;
    NSOperation *mLoadVersionsAndProxiesOperation;
    NSLock *mFinishLoadingLock;
    NSNumber *_hasVisibleItemsHidden;
    NSNumber *_hasVisibleItemsNotHidden;
    id <NSLocking><NSObject> mPhotoOperationsLock;
    NSOperationQueue *mPhotoOperationQueue;
    HgRidList *mPhotoRepairFailedIdList;
    HgLockedRidList *mPhotoRepairingIdList;
}

+ (void)upgradeLibraryFailedForPath:(id)arg1 error:(id)arg2;
+ (void)_upgradePlacesFromSqDB:(id)arg1 intoDatabase:(id)arg2;
+ (double)convertRKRadius:(double)arg1 atLatitude:(double)arg2;
+ (double)convertIPhotoRadius:(double)arg1 atLatitude:(double)arg2;
+ (int)convertIPhotoFaceState:(id)arg1;
+ (void)initialize;
+ (void)sendIPMessage:(unsigned int)arg1 messageData1:(void *)arg2 messageData2:(void *)arg3 messageData3:(void *)arg4 fromSender:(id)arg5;
+ (unsigned int)unpackDBNotification:(id)arg1 messageData1:(void **)arg2 messageData2:(void **)arg3 messageData3:(void **)arg4;
+ (id)packForDBNotificationMessage:(unsigned int)arg1 messageData1:(void *)arg2 messageData2:(void *)arg3 messageData3:(void *)arg4;
@property(nonatomic) DBDocument *document; // @synthesize document=mDocument;
@property(retain, nonatomic) RKDatabase *database; // @synthesize database=mDatabase;
- (void)incrementLibraryMovieSerialNumber;
- (id)libraryMovieSerialNumber;
- (void)_createPlaceholderLegacyDBFilesAtRoot:(id)arg1;
- (void)_warnArchiveSavingError:(id)arg1;
- (void)saveDatabase;
- (id)galleryName;
- (id)persistentDictionaryForShare:(id)arg1;
- (void)setPersistentDictionary:(id)arg1 forShare:(id)arg2;
- (id)ilPhotoShare;
- (void)_removeAllPhotosFromMap;
- (void)_removePhotosFromDB:(struct IPPhotoList *)arg1 reportMissingFiles:(BOOL)arg2 progress:(id)arg3;
- (void)_removePhotosFromDB:(struct IPPhotoList *)arg1 progress:(id)arg2;
- (void)_removePhotoFromDB:(struct IPPhotoInfo *)arg1;
- (void)_removeVersionsFromDB:(id)arg1 masters:(id)arg2 progress:(id)arg3;
- (void)_collectPhotoForRemoveFromDB:(struct IPPhotoInfo *)arg1 versions:(id)arg2 masters:(id)arg3;
- (void)_removePhotoFromMap:(unsigned long long)arg1;
- (void)addPhotoToMap:(struct IPPhotoInfo *)arg1;
- (void)_updatePhotoForMaster:(struct IPPhotoInfo *)arg1;
- (void)_addPhotoToDB:(struct IPPhotoInfo *)arg1 importGroup:(id)arg2;
- (BOOL)_upgradeThumbnails:(id)arg1 progressTitle:(id)arg2 repairingLibrary:(BOOL)arg3;
- (void)progressCompleted:(id)arg1;
- (void)_endUpgradeProgress:(id)arg1;
- (void)_continueUpgradeProgress:(id)arg1 percentDone:(double)arg2 holdoutPercentDone:(double)arg3 lastImage:(struct IPPhotoInfo *)arg4 wasUpgraded:(BOOL)arg5;
- (id)_beginUpgradeProgress:(id)arg1 thumbsOnly:(BOOL)arg2 repairingLibrary:(BOOL)arg3;
- (id)recoverLostPhotos;
- (long long)_backupLibrary:(id)arg1;
- (void)fileManager:(id)arg1 willProcessPath:(id)arg2;
- (void)_renameImageFromKey:(struct IPFileImage *)arg1 forPhoto:(struct IPPhotoInfo *)arg2;
- (void)setIsTemporary:(BOOL)arg1;
- (BOOL)isTemporary;
- (void)removeFromPendingAdd:(struct IPPhotoInfo *)arg1;
- (void)addToPendingRemove:(struct IPPhotoInfo *)arg1;
- (void)addToPendingAdd:(struct IPPhotoInfo *)arg1;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2;
- (id)modificationDate;
- (void)clearNeedThumbRegen;
- (struct IPPhotoList *)needThumbRegen;
- (BOOL)libraryRebuild;
- (BOOL)rebuildArchiveAlbum;
- (BOOL)wasUpgradedFromAnyVersion;
- (void)markAsModified;
- (BOOL)isModified;
- (id)definedKeywords;
- (id)keywordMgr;
- (void)removeAllObjects;
- (void)removeImageWithKey:(unsigned long long)arg1 notify:(BOOL)arg2;
- (void)getOriginalDir:(id *)arg1 andPath:(id *)arg2 forPhoto:(struct IPPhotoInfo *)arg3;
- (struct IPPhotoList *)photosForRidList:(id)arg1;
- (struct IPPhotoList *)photosForKeys:(vector_f672cb0f *)arg1;
- (struct IPPhotoList *)photosForVersions:(id)arg1;
- (struct IPPhotoInfo *)photoForVersion:(id)arg1;
- (struct IPPhotoInfo *)photoForKey:(unsigned long long)arg1;
- (BOOL)hasVisibleItems;
- (unsigned long long)albumCount;
- (id)albumMap;
- (unsigned long long)stackCount;
- (id)stackMap;
- (unsigned long long)rollCount;
- (id)rollMap;
- (id)rollUIDs;
- (vector_5dbb424c *)newSortedRollVector;
- (vector_5dbb424c *)newRollVector;
- (struct IPPhotoList *)photosInUnnamedRolls;
- (BOOL)likelyRollUser;
- (struct IPStack *)stackForKey:(unsigned long long)arg1;
- (vector_5dbb424c *)rollsForKeys:(id)arg1;
- (struct IPRoll *)rollForName:(id)arg1;
- (struct IPRoll *)rollForUID:(id)arg1;
- (struct IPRoll *)rollForKey:(unsigned long long)arg1;
- (id)albumForRollKey:(unsigned long long)arg1;
- (id)albumForName:(id)arg1;
- (id)albumForUID:(id)arg1;
- (id)albumForKey:(unsigned long long)arg1;
- (id)versionUIDOfPhotoForKey:(unsigned long long)arg1;
- (unsigned long long)keyOfPhotoForVersionUID:(id)arg1;
- (id)masterUIDOfPhotoForKey:(unsigned long long)arg1;
- (unsigned long long)keyOfPhotoForMasterUID:(id)arg1;
- (struct IPPhotoInfo *)photoForUID:(id)arg1;
- (struct IPPhotoInfo *)photoForVersionUID:(id)arg1;
- (struct IPPhotoInfo *)photoForMasterUID:(id)arg1;
- (struct IPPhotoInfo *)photoForPath:(id)arg1;
- (struct IPPhotoList *)contentsOfIPRoll:(struct IPRoll *)arg1 visibleOnly:(BOOL)arg2;
- (struct IPPhotoList *)contentsOfRoll:(unsigned long long)arg1;
- (id)allEventKeys;
- (id)allAlbumKeys;
- (id)allPhotoKeys;
- (struct IPPhotoList *)allPhotos;
- (unsigned long long)count;
- (void)removePhotoListFromCutList:(struct IPPhotoList *)arg1;
- (void)removePhotoFromCutList:(struct IPPhotoInfo *)arg1;
- (void)addPhotoListToCutList:(struct IPPhotoList *)arg1;
- (void)addPhotoToCutList:(struct IPPhotoInfo *)arg1;
- (void)clearCutList;
- (unsigned long long)cutListCount;
- (struct IPPhotoList *)cutList;
- (id)ensureAlbumMgr;
- (void)setupAlbumMgr;
- (id)albumMgr;
- (id)nextEmptyEventName;
- (void)endRoll;
- (void)startRoll;
- (void)setUpdateRoll:(struct IPRoll *)arg1;
- (struct IPRoll *)updateRoll;
- (struct IPPhotoList *)importedPhotoStreamPhotos;
- (void)removePhotoStreamAlbumPhotos:(struct IPPhotoList *)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)removeAllPhotosInPhotoStreamAlbum:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)_removePhotos:(struct IPPhotoList *)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)endUpdate;
- (void)endUpdateShowingUI:(BOOL)arg1;
- (void)notifyPendingRemoves;
- (void)notifyPendingRemovesShowingUI:(BOOL)arg1;
- (void)notifyPendingAdds;
- (void)beginUpdate:(id)arg1;
- (void)beginUpdate:(id)arg1 fromSource:(id)arg2;
- (void)_addPhotoToUpdateRoll:(struct IPPhotoInfo *)arg1;
- (void)_importCanceled:(id)arg1;
- (void)_importFinished:(id)arg1;
- (struct IPPhotoInfo *)photoWithHashIsDuplicate:(id)arg1;
- (struct IPPhotoInfo *)photoAtPathIsDuplicate:(id)arg1 ignoreDates:(BOOL)arg2;
- (struct IPPhotoInfo *)photoOfNameIsDuplicate:(id)arg1 originalDate:(double)arg2 modifyDate:(double)arg3 photoFileNamesAndUIDs:(id)arg4 originalFileSize:(unsigned long long)arg5;
- (id)photoFileNamesAndUIDs;
- (id)filenameForPath:(id)arg1 ofType:(unsigned int)arg2;
- (struct IPPhotoInfo *)_addKey:(unsigned long long)arg1 uid:(id)arg2 path:(id)arg3 imageType:(unsigned int)arg4 caption:(id)arg5 roll:(unsigned long long)arg6 importGroup:(id)arg7 modifiedDate:(double)arg8 archiveDate:(double)arg9 insert:(BOOL)arg10 buildThumbnail:(BOOL)arg11 duringImport:(BOOL)arg12 rkMetadata:(id)arg13 addToRedRock:(BOOL)arg14 iproll:(struct IPRoll *)arg15;
- (struct IPPhotoInfo *)addPathDuringImport:(id)arg1 imageType:(unsigned int)arg2 caption:(id)arg3 iproll:(struct IPRoll *)arg4 modifiedDate:(double)arg5 archiveDate:(double)arg6 rkMetadata:(id)arg7;
- (struct IPPhotoInfo *)addKey:(unsigned long long)arg1 caption:(id)arg2 format:(unsigned int)arg3 roll:(unsigned long long)arg4 modifiedDate:(double)arg5 archiveDate:(double)arg6;
- (struct IPPhotoInfo *)addPhotoWithUID:(id)arg1 roll:(unsigned long long)arg2 importGroup:(id)arg3;
- (void)_addPhotoInfo:(struct IPPhotoInfo *)arg1 importGroup:(id)arg2;
- (void)_addPhotoAfterDBUpgrade:(struct IPPhotoInfo *)arg1 importGroup:(id)arg2 thumbnailUpgradeList:(id)arg3 fromSqDB:(BOOL)arg4;
- (unsigned long long)markValue;
- (void)unMark;
- (void)mark;
- (void)_handleDBMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (void)doneWithChanges;
- (void)setLastViewerType:(int)arg1;
- (int)lastViewerType;
- (void)setLastAlbumUuid:(id)arg1;
- (id)lastAlbumUuid;
- (id)thumbnailManager;
- (void)removeMetaDataForKey:(id)arg1;
- (void)setMetaData:(id)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1 forKey:(id)arg2;
- (id)getMetaDataForKey:(id)arg1;
- (void)setLastEmptyEventKey:(unsigned long long)arg1;
- (unsigned long long)lastEmptyEventKey;
- (void)setLastImportRollKey:(unsigned long long)arg1;
- (unsigned long long)lastImportRollKey;
- (unsigned long long)nextTempKeyAndIncrement;
- (unsigned long long)nextKeyAndIncrement;
- (id)sqGlobals;
@property(readonly, nonatomic) RKiPhotoDatabase *rkSqDB; // @synthesize rkSqDB=mRkSqDB;
- (void)setUuid:(id)arg1;
- (id)uid;
- (id)runLoop;
- (void)setRunLoop:(id)arg1;
- (void)_setRoot:(id)arg1;
- (id)root;
- (void)empytThumbCachesIfNecessary;
- (BOOL)setRoot:(id)arg1 progress:(id *)arg2;
- (BOOL)setRoot:(id)arg1;
- (void)closeSqDB;
- (void)schedulePhotoForRepair:(struct IPPhotoInfo *)arg1;
- (void)prefetchVersions:(id)arg1;
- (void)waitForAllVersionsToLoad;
- (void)finishLoading;
- (void)precacheStackContents;
- (void)precacheStackStates;
- (void)_loadAllAdditionalData;
- (void)_loadAllVersionsAndProxies;
- (void)_waitForFinishLoadingUnlock;
- (void)_installPhotoStreamData:(id)arg1;
- (void)_installProxies:(id)arg1;
- (id)_loadVersionsAndProxies:(id)arg1;
- (void)_setupLoadingQueue;
- (void)setNeedUpgradeAutoSplit:(BOOL)arg1;
- (BOOL)needUpgradeAutoSplit;
- (void)_cleanupAfterUpgrade;
- (void)_checkForInterruptedUpgrade;
- (BOOL)_hasInterruptedUpgradeManifest;
- (void)_createInterruptedUpgradeManifest;
- (BOOL)_addPathToInterruptedUpgradeManifest:(id)arg1 oldDir:(id)arg2 newDir:(id)arg3;
- (void)_removeDirsNamedRecursively:(id)arg1 atPath:(id)arg2;
- (void)_removeDirsNamed:(id)arg1;
- (void)_removeSymbolicLinksInRoot;
- (void)_removeSymbolicLinksInFolder:(id)arg1;
- (void)_recoverOrphanPhotosAfterUpgrade:(BOOL)arg1;
- (void)_recoverOrphanPhotos:(id)arg1;
- (void)_recoverOrphanImportPhotos:(id)arg1;
- (void)_autoImportPhotos:(id)arg1;
- (void)autoImportPhotosIfNecessary;
- (void)_removeEmptyDirectoriesRecursively:(id)arg1 pathContents:(id)arg2;
- (void)finishUpgrade;
- (BOOL)_checkForLocalFiles:(id)arg1 checkChildDirs:(BOOL)arg2;
- (void)_checkRunLoopForReadySources;
- (BOOL)_checkLibraryIntegrity;
- (BOOL)unarchive:(BOOL)arg1 progress:(id *)arg2;
- (void)_checkForThumbnailsToUpgrade;
- (void)_checkForThumbnailsToRepair;
- (id)__thumbnailsToRepair;
- (void)__repairThumbnailsSynchronously:(id)arg1 scheduleRemaining:(BOOL)arg2;
- (void)__scheduleThumbnailsForRepair:(id)arg1;
- (void)_warnUpgradeAndRepairPermissions;
- (int)loadFromSqDB:(BOOL)arg1 progress:(id *)arg2;
- (int)_upgradeiPhoto8LibraryFromSqDB:(id)arg1 withProgress:(id)arg2 progressHoldout:(double)arg3 thumbnailsAreCurrent:(BOOL)arg4;
- (id)_prepareiPhoto8LibraryForUpgradeAtRoot:(id)arg1;
- (long long)_warnUpdateRequired;
- (id)_locationForSqEvent:(id)arg1;
- (void)_initializeRedRock;
- (void)_loadPreferences:(id)arg1;
- (void)_placeProgressTimer;
- (void)upgradeDetectedFaceExternals;
- (void)_buildRKVersionFaceContent;
- (void)_upgradeFaceDB;
- (void)terminateWithoutWrite;
- (BOOL)quitWithoutWrite;
- (void)clearLoadingFlag;
- (BOOL)cancelWriteIfRequested;
- (BOOL)isDelayLoading;
- (void)clearCachedRollData;
- (id)rollData;
- (void)setLastNMonthsValue:(long long)arg1;
- (long long)lastNMonthsValue;
- (void)setShowLastNMonthsAlbum:(BOOL)arg1;
- (BOOL)showLastNMonthsAlbum;
- (void)setModificationDateInterval:(double)arg1;
- (double)modificationDateInterval;
- (void)setRollKeysUpdated:(BOOL)arg1;
- (BOOL)rollKeysUpdated;
- (void)setRollKeysFixed:(BOOL)arg1;
- (BOOL)rollKeysFixed;
- (void)setThumbnailVersion:(long long)arg1;
- (long long)thumbnailVersion;
- (void)setPhotocastNotified:(BOOL)arg1;
- (BOOL)photocastNotified;
- (BOOL)hasPhotocastAlbums;
- (BOOL)_verifyUserData:(id)arg1;
- (id)_importGroupForPhoto:(struct IPPhotoInfo *)arg1 mapping:(id)arg2;
- (id)_importGroupDateForRoll:(struct IPRoll *)arg1;
- (id)_importFolderForPhoto:(struct IPPhotoInfo *)arg1;
- (void)_photoImportFlush;
- (void)doUpgradeAutoSplitIfNeeded;
- (void)_doUpgradeAutoSplit;
- (id)layoutContainers:(id)arg1 inVirtualArchive:(id)arg2 replyThread:(id)arg3 replyTarget:(id)arg4 replySelector:(SEL)arg5 tbr:(id)arg6;
- (id)backupPath;
- (id)tempPath;
- (id)oldArchivePath;
- (id)archive5Path;
- (id)tempArchivePath;
- (id)archivePath;
- (id)relativePath;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setKey:(unsigned long long)arg1;
- (unsigned long long)key;
- (void)movePhotos:(struct IPPhotoList *)arg1 toStack:(struct IPStack *)arg2 beforePhoto:(struct IPPhotoInfo *)arg3;
- (void)removePhotosFromStack:(struct IPPhotoList *)arg1;
- (void)unstackPhotos:(struct IPStack *)arg1;
- (struct IPStack *)createStackFromListOfPhotos:(struct IPPhotoList *)arg1 forceNewStack:(BOOL)arg2;
- (void)ensureAlbumsHaveAllStackMembers:(struct IPStack *)arg1;
- (unsigned long long)makeEventWithPhotos:(struct IPPhotoList *)arg1 destination:(struct IPRoll *)arg2 deletedRollKeys:(id *)arg3 renameMergeToUnnamed:(BOOL)arg4 undoMgr:(id)arg5;
- (void)removeStackFromDB:(struct IPStack *)arg1;
- (void)addStackToDB:(struct IPStack *)arg1;
- (void)removeRollFromMap:(struct IPRoll *)arg1;
- (void)removeRollFromDB:(struct IPRoll *)arg1;
- (BOOL)deleteRoll:(struct IPRoll *)arg1;
- (void)addRollToMap:(struct IPRoll *)arg1;
- (void)addRollToDB:(struct IPRoll *)arg1;
- (void)removeAlbumFromDB:(id)arg1;
- (void)removeAlbumFromMap:(id)arg1;
- (void)addAlbumToMap:(id)arg1;
- (void)addAlbumToDB:(id)arg1;
- (void)albumRefiltered:(id)arg1;
- (void)_sendRefilterNotifications:(id)arg1;
- (void)photoChangedInTransaction:(struct IPPhotoInfo *)arg1;
- (void)ensureOriginalForPhoto:(struct IPPhotoInfo *)arg1;
- (void)setImageForPhoto:(struct IPPhotoInfo *)arg1 originalImage:(struct IPFileImage *)arg2 editedImage:(struct IPFileImage *)arg3 markAsEdited:(int)arg4;
- (void)requireNoTransaction;
- (void)requireWriteTransaction;
- (void)requireTransaction;
- (BOOL)isInWriteTransaction;
- (BOOL)isInTransaction;
- (void)endTransactionAndSaveDatabase:(BOOL)arg1;
- (void)endTransaction:(struct CGImage *)arg1;
- (void)endTransaction;
- (void)_endTransaction:(struct CGImage *)arg1 saveDatabase:(BOOL)arg2;
- (BOOL)highPriorityThreadWaiting;
- (BOOL)guiThreadWaiting;
- (BOOL)isTransactionPublish;
- (void)setTransactionIsPublish:(BOOL)arg1;
- (void)beginWriteTransaction;
- (void)beginTransaction:(BOOL)arg1;
- (void)beginTransaction;
- (void)callPerformSelectorOnMainThread:(SEL)arg1 withObjectArgument:(id)arg2 andObject:(id)arg3;
- (BOOL)isWriteTransactionThread;
- (void)prepareForRelease;
- (void)terminateApplication;
- (id)faceDetector;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 isTemporary:(BOOL)arg2;
- (id)init;
- (void)markPhotosNeedingReverseGeocodeUpgrade:(int)arg1;
- (void)excludeItemsFromTimeMachineBackup;
- (void)removeOldBackups;
- (id)oldPathForPhotoBackup2:(struct IPPhotoInfo *)arg1;
- (id)oldPathForPhotoBackup:(struct IPPhotoInfo *)arg1;
- (id)photoIDsForLibraryFilterKey:(id)arg1 sort:(int)arg2;
- (id)photoIDsForLibraryFilterKey:(id)arg1;
- (id)supportedLibraryFilterKeys;
- (id)orderedAvailableLibraryFilterKeys;
- (id)_albumForFilterKey:(int)arg1;
- (id)flaggedPhotoIDs;
- (id)allEventIDs;
- (id)photosContainingAnyPersonIDsIn:(id)arg1;
- (id)nameOfPersonWithID:(id)arg1;
- (id)albumWithAlbumID:(id)arg1;
- (id)eventWithEventID:(id)arg1;
- (id)photosWithPhotoIDs:(id)arg1;
- (id)photoWithPhotoID:(id)arg1;
- (void)deletedFolders:(id)arg1;
- (void)_batchRemoveEventAlbums:(id)arg1;
- (void)createdFolders:(id)arg1;
- (BOOL)_isFixedFolder:(id)arg1;
- (void)createdProjects:(id)arg1;
- (void)ensureEventAlbumForRoll:(struct IPRoll *)arg1;
- (void)contentChangedForAlbums:(id)arg1 addedVersionIds:(id)arg2 removedVersionIds:(id)arg3;
- (void)createdAlbums:(id)arg1;
- (void)property:(id)arg1 changedForModels:(id)arg2;
- (void)versions:(id)arg1 didChangeForKeyPath:(id)arg2;
- (void)version:(id)arg1 didChangeForKeyPath:(id)arg2;
- (void)unregisterForDatabaseNotifications;
- (void)registerForDatabaseNotifications;

@end
