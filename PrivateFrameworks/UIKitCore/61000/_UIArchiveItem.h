//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIArchiveItem : NSObject
{
    BOOL _fileSizeIsSet;
    BOOL _isAppleDoubleFile;
    NSString *_pathInArchive;
    NSString *_fileType;
    unsigned long long _fileSize;
    NSString *_pathToAppleDoubleRealFileCounterpart;
}

@property(retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart; // @synthesize pathToAppleDoubleRealFileCounterpart=_pathToAppleDoubleRealFileCounterpart;
@property(nonatomic) BOOL isAppleDoubleFile; // @synthesize isAppleDoubleFile=_isAppleDoubleFile;
@property(nonatomic) BOOL fileSizeIsSet; // @synthesize fileSizeIsSet=_fileSizeIsSet;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *pathInArchive; // @synthesize pathInArchive=_pathInArchive;
- (void).cxx_destruct;
- (id)description;

@end
