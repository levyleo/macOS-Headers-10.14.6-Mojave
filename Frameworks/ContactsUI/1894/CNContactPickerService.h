//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactPickerXPCRelay;
@protocol CNContactPickerInternalSetup><CNContactPickerViewController;

@interface CNContactPickerService : NSObject
{
    CNContactPickerXPCRelay *_relay;
    id <CNContactPickerInternalSetup><CNContactPickerViewController> _viewController;
}

+ (id)sharedService;
- (void).cxx_destruct;
- (void)setViewController:(id)arg1;
@property(readonly) CNContactPickerXPCRelay *XPCRelay;
- (id)init;

@end
