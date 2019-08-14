//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ITLibLibraryData : NSObject
{
    unsigned long long _features;
    NSURL *_mediaFolderLocation;
    BOOL _showContentRating;
    BOOL _migratedBooks;
}

@property(nonatomic, getter=migratedBooks) BOOL migratedBooks; // @synthesize migratedBooks=_migratedBooks;
@property(nonatomic, getter=shouldShowContentRating) BOOL showContentRating; // @synthesize showContentRating=_showContentRating;
@property(copy, nonatomic) NSURL *mediaFolderLocation; // @synthesize mediaFolderLocation=_mediaFolderLocation;
@property(nonatomic) unsigned long long features; // @synthesize features=_features;
- (void)dealloc;
- (id)init;

@end
