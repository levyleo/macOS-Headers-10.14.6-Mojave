//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarRegionLinearLayout.h>

@interface _UIStatusBarRegionStackingLayout : _UIStatusBarRegionLinearLayout
{
    BOOL _hugging;
    long long _horizontalAlignment;
    double _interspace;
}

@property(nonatomic) BOOL hugging; // @synthesize hugging=_hugging;
@property(nonatomic) double interspace; // @synthesize interspace=_interspace;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (BOOL)fitsAllItems;
- (id)_horizontalConstraintsForLayoutItems:(id)arg1 layoutGuides:(id)arg2;

@end
