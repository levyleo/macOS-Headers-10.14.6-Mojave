//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHMemory, PHObjectPlaceholder, PHPhotoLibrary, RDMemory;

@interface PHMemoryChangeRequest : NSObject
{
    PHMemory *_memory;
    PHObjectPlaceholder *_placeholderForCreatedMemory;
    RDMemory *_mutableModel;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)changeRequestForMemory:(id)arg1;
+ (void)deleteMemories:(id)arg1;
+ (id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(BOOL)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6;
+ (long long)_titleFormatForProposedAttributes:(id)arg1;
+ (BOOL)_shouldAcceptProposedAttributes:(id)arg1;
+ (id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(long long)arg4 subcategory:(long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 extendedCuratedAssets:(id)arg8 keyAsset:(id)arg9;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(long long)arg4 subcategory:(long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8;
+ (id)creationRequestForMemory;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) RDMemory *mutableModel; // @synthesize mutableModel=_mutableModel;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMemory; // @synthesize placeholderForCreatedMemory=_placeholderForCreatedMemory;
- (void).cxx_destruct;
- (void)setQueryHintObjects:(id)arg1;
- (void)setQueryHintObject:(id)arg1;
- (void)setMovieCuratedAssets:(id)arg1;
- (void)incrementShareCount;
- (void)incrementViewCount;
- (void)incrementPlayCount;
- (void)setBlacklistedFeature:(id)arg1;
- (void)setNotificationState:(long long)arg1;
- (void)setMovieStateData:(id)arg1 forAsset:(id)arg2;
- (void)setMovieData:(id)arg1;
- (void)setPhotosGraphData:(id)arg1;
- (void)setPhotosGraphVersion:(long long)arg1;
@property(nonatomic) double score;
@property(nonatomic, getter=isUserCreated) BOOL userCreated;
@property(nonatomic, getter=isPending) BOOL pending;
@property(nonatomic, getter=isFavorite) BOOL favorite;
- (void)setBookmarked:(BOOL)arg1;
@property(nonatomic, getter=isRejected) BOOL rejected;
- (void)setCreationDate:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSubcategory:(long long)arg1;
- (void)setCategory:(long long)arg1;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
- (void)addCuratedAssets:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 keyAsset:(id)arg4;
@property(readonly, nonatomic) RDMemory *model;
@property(readonly, nonatomic) NSString *localIdentifier;
- (id)initWithMemory:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end
