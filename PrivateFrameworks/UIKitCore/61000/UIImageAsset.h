//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class CUINamedLayerStack, NSBundle, NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding>
{
    _UIAssetManager *_assetManager;
    NSBundle *_containingBundle;
    BOOL _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct {
        unsigned int hasRegisteredImages:1;
        unsigned int supportsBlockGeneration:1;
        unsigned int disconnectedFromAssetManager:1;
    } _assetFlags;
    CDUnknownBlockType _creationBlock;
    NSString *_assetName;
    CUINamedLayerStack *__layerStack;
}

+ (BOOL)supportsSecureCoding;
+ (id)_assetGeneratingImagesWithDrawingBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CUINamedLayerStack *_layerStack; // @synthesize _layerStack=__layerStack;
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, nonatomic) __weak _UIAssetManager *_assetManager; // @synthesize _assetManager;
- (void).cxx_destruct;
- (void)_disconnectFromAssetManager;
- (BOOL)_containsImagesInPath:(id)arg1;
- (void)_clearResolvedImageResources;
- (id)_defaultTraitCollection;
- (id)_mutableCatalog;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(BOOL)arg3;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (BOOL)isEqual:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (id)imageWithTraitCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)init;

@end

