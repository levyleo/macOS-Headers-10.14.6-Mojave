//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class PRSTVRowCardSection;

@interface PRSTVRowSliceViewController : PRSCardSectionSliceViewController
{
    PRSTVRowCardSection *_rowCardSection;
}

- (void).cxx_destruct;
- (id)rowSliceView;
- (void)syncAttributes;
@property(retain, nonatomic) PRSTVRowCardSection *rowCardSection;
- (double)imageWidth;
- (double)height;
- (void)awakeFromNib;
- (id)initWithRowCardSection:(id)arg1;

@end
