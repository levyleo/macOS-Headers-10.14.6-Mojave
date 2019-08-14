//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSObject, RDDatabase;
@protocol IPXSmartAlbumQueryItemProtocol, RDQuery;

@interface IPXSmartAlbumQueryItem : NSViewController
{
    NSArray *m_qualifierValues;
    long long m_adjustingValues;
    long long m_holdChanges;
    BOOL m_changed;
    NSObject<RDQuery> *m_query;
    id <IPXSmartAlbumQueryItemProtocol> m_target;
    RDDatabase *_database;
}

+ (void)validateQuery:(id)arg1;
+ (void)initialize;
+ (id)nibName;
+ (id)defaultQuery;
@property(retain, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(nonatomic) id <IPXSmartAlbumQueryItemProtocol> target; // @synthesize target=m_target;
@property(copy, nonatomic) NSArray *qualifiers; // @synthesize qualifiers=m_qualifierValues;
@property(retain, nonatomic) NSObject<RDQuery> *query; // @synthesize query=m_query;
- (void).cxx_destruct;
- (id)nextKeyViewWithPreviousView:(id)arg1;
- (id)localizeArray:(id)arg1;
- (id)nibName;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)albumRefUnfilteredVersionsChanged;
- (void)allowChanges;
- (void)holdChanges;
- (void)sendChangeMessage;
- (void)didAdjust;
- (void)willAdjust;

@end
