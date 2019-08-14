//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, PVWindowController;

@interface PVDocumentOpeningContext : NSObject
{
    long long _openingMode;
    BOOL _displayWindow;
    NSString *_spotlightSearchString;
    NSMutableArray *_addURLErrors;
    PVWindowController *_windowController;
    PVWindowController *_givenWindowController;
    NSMutableArray *_containersOpened;
    NSMutableSet *_existingWindowControllers;
    BOOL _canceled;
    unsigned long long _countOfFilesToBeOpened;
}

@property unsigned long long countOfFilesToBeOpened; // @synthesize countOfFilesToBeOpened=_countOfFilesToBeOpened;
@property(retain) PVWindowController *givenWindowController; // @synthesize givenWindowController=_givenWindowController;
@property(readonly) NSMutableSet *existingWindowControllers; // @synthesize existingWindowControllers=_existingWindowControllers;
@property(getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly) NSMutableArray *containersOpened; // @synthesize containersOpened=_containersOpened;
@property BOOL displayWindow; // @synthesize displayWindow=_displayWindow;
@property(retain) PVWindowController *windowController; // @synthesize windowController=_windowController;
@property(readonly) NSMutableArray *addURLErrors; // @synthesize addURLErrors=_addURLErrors;
@property(copy) NSString *spotlightSearchString; // @synthesize spotlightSearchString=_spotlightSearchString;
@property long long openingMode; // @synthesize openingMode=_openingMode;
- (void).cxx_destruct;
- (id)init;

@end
