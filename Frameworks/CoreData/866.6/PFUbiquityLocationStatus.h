//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocationStatus : NSObject
{
    BOOL _isLive;
    BOOL _isDeleted;
    BOOL _isDownloaded;
    BOOL _isDownloading;
    BOOL _isUploaded;
    BOOL _isUploading;
    BOOL _isImported;
    BOOL _isScheduled;
    BOOL _isExported;
    BOOL _isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    unsigned long long _hash;
    long long _numBytes;
    long long _numNotifications;
}

@property(readonly, nonatomic) long long numBytes; // @synthesize numBytes=_numBytes;
@property(readonly, nonatomic) long long numNotifications; // @synthesize numNotifications=_numNotifications;
@property(readonly, nonatomic) PFUbiquityLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL isFailed; // @synthesize isFailed=_isFailed;
@property(readonly, nonatomic) BOOL isScheduled; // @synthesize isScheduled=_isScheduled;
@property(readonly, nonatomic) BOOL isExported; // @synthesize isExported=_isExported;
@property(readonly, nonatomic) BOOL isImported; // @synthesize isImported=_isImported;
@property(readonly, nonatomic) BOOL isUploading; // @synthesize isUploading=_isUploading;
@property(readonly, nonatomic) BOOL isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) BOOL isDownloading; // @synthesize isDownloading=_isDownloading;
@property(readonly, nonatomic) BOOL isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(readonly, nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(readonly, nonatomic) BOOL isLive; // @synthesize isLive=_isLive;
- (void)statusDidChange;
- (void)recoveredFromError;
- (void)encounteredError:(id)arg1;
- (void)logWasExported;
- (void)logImportWasCancelled;
- (void)logWasScheduled;
- (void)logWasImported;
- (void)checkFileURLState;
- (id)description;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)init;

@end
