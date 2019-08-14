//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class NSButton, PXPeopleScalableAvatarView, UXLabel;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UXViewController
{
    id <PXPeopleMeViewControllerDataSource> _dataSource;
    CDUnknownBlockType _dismissHandler;
    double _sideInsets;
    id <PXPerson> _suggestedPerson;
    NSButton *_confirmButton;
    NSButton *_denyButton;
    UXLabel *_descriptionLabel;
    PXPeopleScalableAvatarView *_avatarView;
}

@property(retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UXLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSButton *denyButton; // @synthesize denyButton=_denyButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) id <PXPerson> suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
@property(nonatomic) double sideInsets; // @synthesize sideInsets=_sideInsets;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(readonly, nonatomic) id <PXPeopleMeViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_rejectMe:(id)arg1;
- (void)_confirmMe:(id)arg1;
- (void)_dismissViewControllerAsConfirmed:(BOOL)arg1;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(BOOL)arg3;
@property(readonly, nonatomic) double preferredHeight;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1;

@end
