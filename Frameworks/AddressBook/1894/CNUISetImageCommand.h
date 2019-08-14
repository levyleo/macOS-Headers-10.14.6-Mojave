//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class NSData, NSString;

@interface CNUISetImageCommand : CNUIUndoableCommand
{
    BOOL _shouldSave;
    BOOL _done;
    NSString *_uniqueId;
    NSData *_imageData;
    NSString *_alternatePath;
    NSString *_actionName;
}

+ (id)actionNameForImageData:(id)arg1;
+ (id)compressLargeImageData:(id)arg1;
+ (id)compressImageData:(id)arg1;
+ (void)makeSureImageCanBeSavedAtPath:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL done; // @synthesize done=_done;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(retain, nonatomic) NSString *alternatePath; // @synthesize alternatePath=_alternatePath;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)executeUndo;
- (void)execute;
- (void)executeWithCNSaveRequest:(id)arg1;
- (BOOL)isClearCommand;
- (id)alternatePathForPerson:(id)arg1;
- (id)person;
- (void)switchImage;
- (void)cleanUpAlternatePath;
- (void)finalize;
- (id)initWithContactStore:(id)arg1 uniqueId:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(struct CGRect)arg5 shouldSave:(BOOL)arg6;
- (id)initWithContactStore:(id)arg1;

@end
