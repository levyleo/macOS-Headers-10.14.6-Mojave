//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainerOptions, NSNumber, NSString;

@interface NSCloudKitMirroringDelegateOptions : NSObject
{
    NSString *_containerIdentifier;
    NSNumber *_ckAssetThresholdBytes;
    BOOL _useEncryptedStorage;
    BOOL _initializeSchema;
    BOOL _automaticallyDownloadFileBackedFutures;
    NSNumber *_operationMemoryThresholdBytes;
    CKContainerOptions *_containerOptions;
}

@property(nonatomic) BOOL automaticallyDownloadFileBackedFutures; // @synthesize automaticallyDownloadFileBackedFutures=_automaticallyDownloadFileBackedFutures;
@property(retain, nonatomic) CKContainerOptions *containerOptions; // @synthesize containerOptions=_containerOptions;
@property(retain, nonatomic) NSNumber *operationMemoryThresholdBytes; // @synthesize operationMemoryThresholdBytes=_operationMemoryThresholdBytes;
@property(retain, nonatomic) NSNumber *ckAssetThresholdBytes; // @synthesize ckAssetThresholdBytes=_ckAssetThresholdBytes;
@property(nonatomic) BOOL useEncryptedStorage; // @synthesize useEncryptedStorage=_useEncryptedStorage;
@property(nonatomic) BOOL initializeSchema; // @synthesize initializeSchema=_initializeSchema;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)description;
- (void)dealloc;
- (id)copy;
- (id)initWithContainerIdentifier:(id)arg1;

@end
