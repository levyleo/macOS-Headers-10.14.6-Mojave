//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    BOOL _predictedByTagger;
    BOOL _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
    NSMutableOrderedSet *_predictedSecondaryLangMaps;
    NSString *_contentString;
}

@property(retain, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps; // @synthesize predictedSecondaryLangMaps=_predictedSecondaryLangMaps;
@property(copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property(nonatomic, getter=isTagged) BOOL tagged; // @synthesize tagged=_tagged;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)updateTagsForLocalePrefChange;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (BOOL)hasOnlyNonWesternLangMaps;
- (BOOL)hasOnlyWesternLangMaps;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (id)significantAmbiguousLangMaps;
- (BOOL)langMapIsSignificant:(id)arg1;
- (BOOL)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)tagContent;
- (BOOL)_addLanguageTagForCurrentChunk;
- (CDStruct_3a8d9e70 *)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (id)_allLangIDs;
- (int)langIDforLangCode:(id)arg1;
- (id)langCodeForlangId:(int)arg1;
- (void)enumeratePredictedTags:(CDUnknownBlockType)arg1;
- (void)enumerateUnpredictedTags:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *content;
- (id)description;
- (id)initWithContent:(id)arg1;

@end

