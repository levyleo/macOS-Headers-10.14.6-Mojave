//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXCPLService-Protocol.h"
#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class NSString, PXCPLServiceStatus, SBLCPLStatus;
@protocol OS_dispatch_queue;

@interface IPXNSCPLService : NSObject <SBLSharedServicesManagerReceiver, PXCPLService>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    SBLCPLStatus *_statusProvider;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_serviceStatusDidChange:(id)arg1;
- (id)_cplStatus;
- (void)_updateWithNewStatusIfNecessary:(id)arg1;
- (void)iCloudPhotoLibraryStatusChanged:(id)arg1;
- (void)iCloudPhotoLibraryStateChanged;
- (void)performAction:(long long)arg1;
- (BOOL)canPerformAction:(long long)arg1;
- (id)serviceStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
