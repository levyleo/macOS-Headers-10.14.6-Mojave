//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Element.h"

@class NSDictionary, NSURL;

@interface DiskItem : Element
{
    NSURL *_nsurl;
    NSDictionary *_fileAttributes;
    short _volumeRefNum;
    struct LSItemInfoRecord _LSItemInfoRecord;
    BOOL _volumeRefNumValid;
    BOOL _LSItemInfoRecordValid;
}

- (id)open:(id)arg1;
- (id)move:(id)arg1;
- (id)openSelf;
- (id)deleteSelf;
- (void)setDefaultApplication:(id)arg1;
- (id)defaultApplication;
- (id)uniformTypeID;
- (id)kind;
- (void)setStationery:(BOOL)arg1;
- (BOOL)stationery;
- (void)setCreatorType:(id)arg1;
- (id)creatorType;
- (void)setFileType:(id)arg1;
- (id)fileType;
- (id)container;
- (id)physicalSize;
- (id)logicalSize;
- (id)shortVersion;
- (id)version;
- (id)productVersion;
- (id)displayedName;
- (id)bookmark;
- (struct AliasRecord **)alias;
- (BOOL)equals:(id)arg1;
- (id)posixPath;
- (id)hfsPath;
- (id)url;
- (BOOL)hidden;
- (void)setVisible:(BOOL)arg1;
- (BOOL)visible;
- (void)setFInfo:(void *)arg1;
- (unsigned char)getFInfo:(void *)arg1;
- (BOOL)packageFolder;
- (BOOL)busyStatus;
- (id)nameExtension;
- (void)setModificationDate:(id)arg1;
- (id)modificationDate;
- (id)creationDate;
- (id)disk;
- (id)volume;
- (void)createWithParent:(id)arg1;
- (id)uniqueID;
- (void)setName:(id)arg1;
- (unsigned int)infoFlags;
- (short)volumeRefNum;
- (id)fileAttributeForKey:(id)arg1;
- (id)fileAttributes;
- (void)setResourceValue:(id)arg1 forKey:(id)arg2;
- (id)resourceValueForKey:(id)arg1;
- (void)setNsurl:(id)arg1;
- (id)nsurl;
- (void)dealloc;
- (id)initDiskItemWithParent:(id)arg1 andSiblings:(id)arg2 andName:(id)arg3;
- (id)initDiskItemWithParent:(id)arg1 andSiblings:(id)arg2 andURL:(id)arg3;
- (id)initDiskItem;
- (id)objectSpecifier;

@end
