//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

#import <SystemMigrationNetworking/SMWindowsArchiveStreamDelegate-Protocol.h>

@class NSNumber, NSObject;
@protocol SMNWindowsCopyActionDelegate;

@interface SMNWindowsCopyAction : SMNAction <SMWindowsArchiveStreamDelegate>
{
    NSNumber *componentIdentifier;
    NSNumber *componentSize;
    NSObject *retryContext;
    unsigned long long totalWrittenLength;
    id <SMNWindowsCopyActionDelegate> delegate;
}

+ (BOOL)needsDirectAccessToSendOrReceiveResult;
+ (int)actionID;
@property id <SMNWindowsCopyActionDelegate> delegate; // @synthesize delegate;
@property unsigned long long totalWrittenLength; // @synthesize totalWrittenLength;
@property(retain) NSObject *retryContext; // @synthesize retryContext;
@property(retain) NSNumber *componentSize; // @synthesize componentSize;
@property(retain) NSNumber *componentIdentifier; // @synthesize componentIdentifier;
- (void).cxx_destruct;
- (void)finishedFile:(id)arg1 length:(unsigned long long)arg2;
- (void)updatedFile:(id)arg1 partialLength:(unsigned long long)arg2;
- (id)localPathForFile:(id)arg1;
- (BOOL)shouldContinue;
- (id)requestPayload;
- (id)result;
- (BOOL)receiveResultOnFd:(int)arg1 errorIsFatal:(char *)arg2;
- (id)description;
- (id)initWithComponentIdentifier:(id)arg1 andSize:(id)arg2;

@end
