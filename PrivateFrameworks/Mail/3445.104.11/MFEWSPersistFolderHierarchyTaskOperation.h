//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class MFEWSSyncFolderHierarchyBatch;
@protocol MFEWSPersistFolderHierarchyTaskOperationDelegate;

@interface MFEWSPersistFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSPersistFolderHierarchyTaskOperationDelegate> _delegate;
    MFEWSSyncFolderHierarchyBatch *_batch;
}

@property(readonly, nonatomic) MFEWSSyncFolderHierarchyBatch *batch; // @synthesize batch=_batch;
@property __weak id <MFEWSPersistFolderHierarchyTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithBatch:(id)arg1;

@end
