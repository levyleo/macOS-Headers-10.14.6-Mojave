//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, TranscriptStyleController;
@protocol SOTranscriptHTMLArchiverDelegate;

@interface SOTranscriptHTMLArchiver : NSObject
{
    id <SOTranscriptHTMLArchiverDelegate> _delegate;
    DOMDocument *_document;
    TranscriptStyleController *_styleController;
}

@property(readonly, nonatomic) TranscriptStyleController *styleController; // @synthesize styleController=_styleController;
@property(readonly, nonatomic) DOMDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id <SOTranscriptHTMLArchiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)URLFromCSSText:(id)arg1;
- (id)CSSFilePaths;
- (id)messagesCSSText:(id *)arg1;
- (id)resolvedCustomURLResources:(id)arg1 error:(id *)arg2;
- (id)webArchive:(id *)arg1;
- (BOOL)successfullySavedArchive:(id)arg1;
- (void)saveArchive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocument:(id)arg1 styleController:(id)arg2 delegate:(id)arg3;
- (id)initWithDocument:(id)arg1 styleController:(id)arg2;

@end

