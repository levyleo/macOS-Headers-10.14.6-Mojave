//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper
{
    PDSlide *mSlide;
    struct CGRect mRect;
}

- (void).cxx_destruct;
- (struct CGRect)slideRect;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (id)defaultTheme;
- (id)slideName;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;

@end
