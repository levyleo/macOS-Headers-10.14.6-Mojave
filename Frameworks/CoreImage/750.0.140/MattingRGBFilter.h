//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/MattingFilter-Protocol.h>

@class MattingBoxTensorFilter, NSArray;
@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface MattingRGBFilter : NSObject <MattingFilter>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLTexture> _guideStack;
    id <MTLTexture> _guideStackTexture2DView;
    id <MTLTexture> _alphaStack;
    id <MTLTexture> _alphaStackTexture2DView;
    id <MTLTexture> _mean_I;
    id <MTLTexture> _mean_alpha;
    NSArray *_var_I;
    id <MTLTexture> _coefficients;
    id <MTLTexture> _coefficientsTexture2DView;
    id <MTLTexture> _constraints;
    id <MTLTexture> _constraintsTexture2DView;
    id <MTLComputePipelineState> _nearestNeighborDownsamplingKernel;
    id <MTLComputePipelineState> _computeInverted3DGuideCovarianceMatrixKernel;
    id <MTLComputePipelineState> _compute3DCoefficientsKernel;
    id <MTLComputePipelineState> _applyCoefficientsKernel;
    id <MTLComputePipelineState> _applyCoefficientsSamplingKernel;
    BOOL stateComputed;
    BOOL coefficientsComputed;
    MattingBoxTensorFilter *boxTensorFilter;
    CDStruct_220e14ca config;
}

@property(readonly) BOOL coefficientsComputed; // @synthesize coefficientsComputed;
@property(readonly) BOOL stateComputed; // @synthesize stateComputed;
@property CDStruct_220e14ca config; // @synthesize config;
@property(retain) MattingBoxTensorFilter *boxTensorFilter; // @synthesize boxTensorFilter;
- (void).cxx_destruct;
- (int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5;
- (int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5;
- (int)encodeStepOn:(id)arg1;
- (int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5;
- (int)encodeCoefficientsOn:(id)arg1 guideStack:(id)arg2 alphaStack:(id)arg3 mean_I:(id)arg4 var_I:(id)arg5 coefficients:(id)arg6;
- (void)encodeNearestNeighborDownSamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3;
- (int)_compileShadersWithLibrary:(id)arg1;
- (void)dealloc;
- (void)releaseResources;
- (int)allocateResources:(CDStruct_220e14ca)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end
