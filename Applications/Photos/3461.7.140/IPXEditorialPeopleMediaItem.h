//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaItem.h>

@class IPXEditorialModel, NSString;

@interface IPXEditorialPeopleMediaItem : MOMediaItem
{
    NSString *_fakeUrlNormaliseString;
    IPXEditorialModel *_editorialModel;
}

@property(readonly, nonatomic) IPXEditorialModel *editorialModel; // @synthesize editorialModel=_editorialModel;
- (void).cxx_destruct;
- (struct CGImage *)_clipImage:(struct CGImage *)arg1 toSize:(struct CGSize)arg2 withOutwardBorder:(double)arg3 borderColor:(struct CGColor *)arg4;
- (void)_drawClipImage:(struct CGImage *)arg1 toRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 border:(double)arg4 borderColor:(struct CGColor *)arg5;
- (struct CGImage *)_clipImage:(struct CGImage *)arg1 toSize:(struct CGSize)arg2;
- (void)_drawClipImage:(struct CGImage *)arg1 toRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (struct CGImage *)_composeSocialGroupImageForDiameter:(unsigned long long)arg1;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (void)updateWithEditorialModel:(id)arg1;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)url;
- (id)initWithEditorialModel:(id)arg1;

@end
