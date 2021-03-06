//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject
{
    struct CGSize mDesiredSize;
    TSDImageProvider *mProvider;
    struct CGPath *mMaskPath;
    BOOL mIncludesAdjustments;
    BOOL mWideGamutCanvas;
    int mStatus;
    struct CGImage *mSizedImage;
    long long mSizedImageOrientation;
}

@property(nonatomic) BOOL sizedImageIncludesAdjustments; // @synthesize sizedImageIncludesAdjustments=mIncludesAdjustments;
@property(readonly, nonatomic) struct CGPath *maskPath; // @synthesize maskPath=mMaskPath;
@property(nonatomic) long long sizedImageOrientation; // @synthesize sizedImageOrientation=mSizedImageOrientation;
@property(nonatomic) struct CGImage *sizedImage; // @synthesize sizedImage=mSizedImage;
@property(nonatomic) int status; // @synthesize status=mStatus;
@property(retain, nonatomic) TSDImageProvider *provider; // @synthesize provider=mProvider;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property(readonly, nonatomic) BOOL wideGamut; // @synthesize wideGamut=mWideGamutCanvas;
- (void)generateSizedImage;
@property(readonly, nonatomic) BOOL sizedImageHasMask;
- (void)dealloc;
- (id)initWithDesiredSize:(struct CGSize)arg1 provider:(id)arg2 maskPath:(struct CGPath *)arg3 wideGamutCanvas:(BOOL)arg4;

@end

