//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextAttachment.h>

@class ICNFMCMimePart, NSFileWrapper;

@interface ICNFMCMimeTextAttachment : NSTextAttachment
{
    ICNFMCMimePart *_mimePart;
}

+ (id)attachmentWithInternalAppleAttachmentData:(id)arg1 mimeBody:(id)arg2;
@property(retain, nonatomic) ICNFMCMimePart *mimePart; // @synthesize mimePart=_mimePart;
- (void).cxx_destruct;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (BOOL)hasBeenDownloaded;
- (BOOL)isPlaceholder;
- (unsigned long long)approximateSize;
- (id)fileWrapperForcingDownloadEvenIfExternalBody:(BOOL)arg1;
@property(readonly, nonatomic) NSFileWrapper *fileWrapperForcingDownload;
- (id)initWithMimePart:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2;

@end
