//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSPasteboardWriting-Protocol.h"

@class NSError, NSString, NSURL, PAShareKitSession, RKVersion;
@protocol PAShareKitShareableFullSizeImageProvider;

@interface PAShareKitShareable : NSObject <NSPasteboardWriting>
{
    PAShareKitSession *_session;
    NSURL *_placeholderImageURL;
    NSURL *_fullSizeImageURL;
    RKVersion *_version;
    int _prepareState;
    id <PAShareKitShareableFullSizeImageProvider> _fullSizeImageProvider;
    NSError *_prepareError;
    BOOL _cleanupPlaceholderImage;
}

+ (id)findItems:(id)arg1 matchingFullSizeImageURLs:(id)arg2;
@property(retain, nonatomic) NSError *prepareError; // @synthesize prepareError=_prepareError;
@property(nonatomic) BOOL cleanupPlaceholderImage; // @synthesize cleanupPlaceholderImage=_cleanupPlaceholderImage;
@property(nonatomic) id <PAShareKitShareableFullSizeImageProvider> fullSizeImageProvider; // @synthesize fullSizeImageProvider=_fullSizeImageProvider;
@property(readonly, nonatomic) int prepareState; // @synthesize prepareState=_prepareState;
@property(retain, nonatomic) RKVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(retain, nonatomic) NSURL *placeholderImageURL; // @synthesize placeholderImageURL=_placeholderImageURL;
@property(nonatomic) PAShareKitSession *session; // @synthesize session=_session;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (BOOL)isReadyToBeShared;
- (id)_exportFullSizeImage;
- (void)_prepareFullSizeImage;
- (void)_preparePlaceholderImage;
- (void)_preflightChecksForExport;
- (void)prepareForState:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
