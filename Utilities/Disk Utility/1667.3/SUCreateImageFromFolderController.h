//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSWindow, SUBaseProgressSheet, SUSaveImageDiskImagePane;

@interface SUCreateImageFromFolderController : NSObject
{
    NSWindow *_parent;
    SUSaveImageDiskImagePane *_diskImageSavePanel;
    SUBaseProgressSheet *_progressSheet;
    NSURL *_folderURL;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(retain) SUBaseProgressSheet *progressSheet; // @synthesize progressSheet=_progressSheet;
@property(retain) SUSaveImageDiskImagePane *diskImageSavePanel; // @synthesize diskImageSavePanel=_diskImageSavePanel;
@property(retain) NSWindow *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)_imageProgressWithDictionary:(id)arg1;
- (void)createImage;
- (void)_showSaveWindow;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
