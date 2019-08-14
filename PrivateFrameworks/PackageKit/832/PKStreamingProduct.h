//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKProduct.h>

@class NSError, NSString, PKStreamingXARArchive;

@interface PKStreamingProduct : PKProduct
{
    PKProduct *_underlyingProduct;
    PKStreamingXARArchive *_archive;
    unsigned long long _state;
    NSString *_path;
    NSError *_currentError;
}

+ (BOOL)canInitWithURL:(id)arg1;
@property(readonly, copy) NSError *currentError; // @synthesize currentError=_currentError;
@property unsigned long long state; // @synthesize state=_state;
- (id)_archiveForTrustEvaluation;
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;
- (id)allPackageReferences;
- (id)resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2 returningUTI:(id *)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)distribution;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;
- (int)trustLevelReturningCertificateChain:(id *)arg1;
- (BOOL)evaluateTrustReturningError:(id *)arg1;
- (void)setMinimumRequiredTrustLevel:(int)arg1;
- (id)productVersion;
- (id)productIdentifier;
- (id)productType;
- (id)URL;
- (void)_throwExceptionIfResourceNotLoaded:(id)arg1;
- (BOOL)_isProductLoaded;
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_updateCurrentArchiveStateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4 error:(id *)arg5;
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long *)arg2 error:(id *)arg3;

@end
